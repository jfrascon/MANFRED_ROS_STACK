MRL_ADD_EXECUTABLE("AUTO" "ALL_FILES")

# If you need some include dir:
#INCLUDE_DIRECTORIES("/usr/include/serialport/")
#INCLUDE_DIRECTORIES("libraries/linux/utils/gnuplot_gui.h")


# If you need some link dir:
#LINK_DIRECTORIES(serialPort)

# If you need to link some other external library:
TARGET_LINK_LIBRARIES(${EXE_NAME} serial ${GLUT_LIBRARIES} ${OPENGL_LIBRARIES})

