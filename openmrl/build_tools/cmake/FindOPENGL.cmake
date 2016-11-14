SET(OPENGL_FOUND 0)
IF (NOT "${CMAKE_CROSSCOMPILING}" STREQUAL TRUE)
	FIND_PACKAGE(OpenGL QUIET)
	IF(OpenGL_FOUND)
		set(OPENGL_FOUND true)
		IF(MACOSX)
			SET(OPENGL_INCLUDE_DIR "/usr/X11R6/include")
			SET(OPENGL_LIBRARIES "-I/usr/X11R6/include -framework OpenGL -framework GLUT -Wl,-dylib_file,/System/Library/Frameworks/OpenGL.framework/Versions/A/Libraries/libGL.dylib:/System/Library/Frameworks/OpenGL.framework/Versions/A/Libraries/libGL.dylib")
		ENDIF(MACOSX)
	ENDIF(OpenGL_FOUND)
ELSE(NOT "${CMAKE_CROSSCOMPILING}" STREQUAL TRUE)
	MESSAGE(STATUS "OPENGL support is not available for cross-compiled OpenRDK")
ENDIF (NOT "${CMAKE_CROSSCOMPILING}" STREQUAL TRUE)
