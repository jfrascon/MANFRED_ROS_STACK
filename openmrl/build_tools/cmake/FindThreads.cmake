IF ("${CMAKE_CROSSCOMPILING}" STREQUAL TRUE)
	IF ("${OpenRDK_ARCH}" STREQUAL "geode" )
		INCLUDE(${OE_CMAKE_MODULE_PATH}/PTHREADConfig.cmake)
		SET(CMAKE_USE_PTHREADS_INIT 1)
		SET(PTHREAD_LIBRARIES "${TOOLCHAIN_LIBRARIES}/libpthread.so")
		SET(CMAKE_THREAD_LIBS_INIT "${PTHREAD_LIBRARIES}")
	ELSEIF ("${OpenRDK_ARCH}" STREQUAL "arm9" )
		SET(PTHREAD_LIBRARIES "${ARM9_CROSS_DIR}/${ARM9_PREFIX}/libc/usr/lib/libpthread.so")
		SET(Threads_INCLUDE_DIR "${ARM9_CROSS_DIR}/${ARM9_PREFIX}/libc/usr/include")
		SET(CMAKE_THREAD_LIBS_INIT "${PTHREAD_LIBRARIES}")
		SET(CMAKE_USE_PTHREADS_INIT 1)
	ELSE ("${OpenRDK_ARCH}" STREQUAL "geode" )
		MESSAGE(STATUS "Threads support is not available for unknown architecture [${OpenRDK_ARCH}]")
	ENDIF ("${OpenRDK_ARCH}" STREQUAL "geode" )
ELSE ("${CMAKE_CROSSCOMPILING}" STREQUAL TRUE)
	IF(LINUX)
		FIND_PACKAGE(Threads REQUIRED)
		IF(NOT CMAKE_USE_PTHREADS_INIT)
			MESSAGE(FATAL_ERROR "pthreads not found, it is REQUIRED to build the RDK")
		ENDIF(NOT CMAKE_USE_PTHREADS_INIT)
	ELSE(LINUX)
		FIND_PACKAGE(Threads)
	ENDIF(LINUX)
ENDIF ("${CMAKE_CROSSCOMPILING}" STREQUAL TRUE)

IF(CMAKE_USE_PTHREADS_INIT)
	SET(Threads_FOUND 1)
	SET(Threads_LIBRARIES ${CMAKE_THREAD_LIBS_INIT})
ENDIF(CMAKE_USE_PTHREADS_INIT)

