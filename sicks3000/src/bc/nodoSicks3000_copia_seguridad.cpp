#include <cerrno>

#include "ros/ros.h"
#include "sensor_msgs/LaserScan.h"

#include "sicks3000/sicks3000.h"
#include "sicks3000/servicioSicks3000.h"

#define BAG_ANTERIOR_2013_05

sensor_msgs::LaserScan barridoLaserSicks3000;

#ifdef BAG_ANTERIOR_2013_05

ros::Publisher *p_publicadorSicks3000 = NULL;

void escucharPruebaOffline(
		const sensor_msgs::LaserScan::ConstPtr& refPtrBarridoLaserRX) {
	barridoLaserSicks3000 = *refPtrBarridoLaserRX;
	barridoLaserSicks3000.header.stamp = ros::Time::now();
	barridoLaserSicks3000.header.frame_id = "link_laser";
	p_publicadorSicks3000->publish(barridoLaserSicks3000);
}
#endif

bool servirLaserScan(sicks3000::servicioSicks3000::Request& req,
		sicks3000::servicioSicks3000::Response& res) {
	res.barridoLaserSicks3000 = barridoLaserSicks3000;
	return true;
}

int main(int argc, char** argv) {

#ifndef BAG_ANTERIOR_2013_05

	bool valorObtenido = false;
	int fallo = 0;

	// Caracteristicas especificas del laser Sick S3000
	unsigned int distanciaMaximaCentiM = 0;
	unsigned int i = 0;
	unsigned int numeroBytesCabeceraRX = 24;
	unsigned int numeroBytesExtra = 1548;
	unsigned int numeroBytesRespuestaContinua = 1548;
	unsigned int numeroBytesRX = numeroBytesRespuestaContinua + numeroBytesExtra;
	// unsigned int num_iter = 0;
	unsigned int numeroTotalMedidasLaser = 0;

	// Ejecuta en matlab el script 'incideMedidaInicial.m' para obtener el valor
	// de las variables 'angFinRad', 'incrAngRad' y 'cIncr' y numMedLas.
	double anguloFinalRad = 0;
	double incrementoAngularRad = 0;
	double frecuenciaAdquisicion = 10;

	std::vector<unsigned int> barridoLaserCm;
	std::vector<int> vec_reflec;
	std::vector<double> orientacionMedidaLaserRad;

	Sicks3000 laserSicks3000(numeroBytesCabeceraRX, numeroBytesRX, Sicks3000::RESP_CONT);

	distanciaMaximaCentiM = laserSicks3000.getAlcanceLaserCM();
	numeroTotalMedidasLaser = laserSicks3000.getNumTotMedLaser();
	anguloFinalRad = laserSicks3000.getArcoTot() / 2;
	incrementoAngularRad = laserSicks3000.getResAng();

// Si el resultado devuelto por la funcion 'abrirComunicacionSerie' es distinto de 0
// se ha producido algun error estableciendo la comunicacion el laser Sicks3000
	if (laserSicks3000.abrirComunicacionSerie(500000))
	{

		std::cout << "Imposible establecer comunicacion con el laser Sick S3000 en puerto " << laserSicks3000.getNombrePuertoSerie().c_str() << "\n";
		return -1;

	}

	else
	{

		std::cout << "Comunicacion establecida con el laser Sick S3000 en el puerto " << laserSicks3000.getNombrePuertoSerie().c_str() << "\n";

	}

#endif

	ros::init(argc, argv, "nodoSicks3000");
	ros::NodeHandle nodoManejador;
	ros::ServiceServer servidorServicioSicks3000 =
			nodoManejador.advertiseService("servicioSicks3000",
					servirLaserScan);

#ifdef BAG_ANTERIOR_2013_05

	ros::Subscriber suscriptorSicks3000 = nodoManejador.subscribe(
			"topic_sicks3000", 1, escucharPruebaOffline);
	ros::Publisher publicadorSicks3000 = nodoManejador.advertise<
			sensor_msgs::LaserScan>("topic_sicks3000_OK", 1, true);
	p_publicadorSicks3000 = &publicadorSicks3000;
	ros::spin();

#else

	ros::Publisher publicadorSicks3000 = nodoManejador.advertise<sensor_msgs::LaserScan> ("topic_sicks3000", 1, true);
	//ros::Rate tasa(5);

	while (nodoManejador.ok())
	{

		valorObtenido = laserSicks3000.obtenerRespContinua(numeroBytesExtra);
		// I guess reception failure
		fallo++;

		if (valorObtenido)
		{

			// Si el flujo entra de ejecucion entra aqui
			// no hubo fallo de recepcion.
			fallo--;
			barridoLaserSicks3000.header.stamp = ros::Time::now();
			barridoLaserSicks3000.header.frame_id = "link_laser";
			barridoLaserSicks3000.angle_min = -anguloFinalRad;
			barridoLaserSicks3000.angle_max = anguloFinalRad;
			barridoLaserSicks3000.angle_increment = incrementoAngularRad;
			// (1 / frecuenciaAdquisicion) / numeroTotalMedidasLaser --> (1 / (frecuenciaAdquisicion * numeroTotalMedidasLaser))
			barridoLaserSicks3000.time_increment = (1 / (frecuenciaAdquisicion * numeroTotalMedidasLaser));
			barridoLaserSicks3000.range_min = 0.5;
			barridoLaserSicks3000.range_max = 0.01 * distanciaMaximaCentiM;
			barridoLaserSicks3000.ranges.resize(numeroTotalMedidasLaser);
			barridoLaserSicks3000.intensities.resize(numeroTotalMedidasLaser);
			barridoLaserCm = laserSicks3000.getVecDistCM();

			// vec_reflec = laserSicks3000.getVecReflec();
			// orientacionMedidaLaserRad = laserSicks3000.getVecAngRad();

			// double ang = -angFinRad;

			// Medidas entre -90º y -85º
			// for (i = 20; i < 41; i++) {
			// Pasar a de 'cm' a 'm'.
			// barridoLaserSicks3000.ranges[i] = vecDist_CM[i] * 0.01;
			// barridoLaserSicks3000.intensities[i] = vecReflec[i];
			//   ROS_INFO("%d - dist(%f): %d.\n", i, i*ang, vecDist_CM[i]);
			// }
			// ROS_INFO("--------------------\n");

			// Medidas entre -2'5º y +2'5º.
			// for (i = 370; i < 391; i++) {
			// Pasar a de 'cm' a 'm'.
			// barridoLaserSicks3000.ranges[i] = vecDist_CM[i] * 0.01;
			// barridoLaserSicks3000.intensities[i] = vecReflec[i];
			//   ROS_INFO("%d - dist(%f): %d.\n", i, i*ang, vecDist_CM[i]);
			// }
			// ROS_INFO("--------------------\n");

			// Medidas entre +85º y +90º.
			// for (i = 720; i < 741; i++) {
			// Pasar a de 'cm' a 'm'.
			// barridoLaserSicks3000.ranges[i] = vecDist_CM[i] * 0.01;
			// barridoLaserSicks3000.intensities[i] = vecReflec[i];
			// ROS_INFO("%d - dist(%f): %d.\n", i, i*ang, vecDist_CM[i]);
			// }
			// ROS_INFO("--------------------\n\n\n");

			for (i = 0; i < numeroTotalMedidasLaser; ++i)
			{

				// Truncar aquellas medidas que esten por encima del alcance
				// maximo del laserSicks3000.
				if (barridoLaserCm[i] > distanciaMaximaCentiM)
				{
					barridoLaserCm[i] = distanciaMaximaCentiM;
				}
				// Expresar la medida laser en metros.
				barridoLaserSicks3000.ranges[i] = 0.01 * barridoLaserCm[i];
				// barridoLaserSicks3000.intensities[i] = vec_reflec[i];
			}
			publicadorSicks3000.publish(barridoLaserSicks3000);
		}
		// num_iter++;
		// if(num_iter%100 == 0){
		//   printf("Num_iter: %d - ok: %d - fallo: %d.\n", num_iter, num_iter- fallo, fallo);
		// }
		// 'spinOnce' para comprobar si hay una solicitud para el servicio que presta este nodo.
		ros::spinOnce();
		//tasa.sleep();
	}
#endif
	return 0;
}
