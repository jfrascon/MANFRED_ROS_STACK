SET(JPEG_FOUND 0)
IF (NOT "${CMAKE_CROSSCOMPILING}" STREQUAL TRUE)
	FIND_PACKAGE(JPEG QUIET)
ELSE(NOT "${CMAKE_CROSSCOMPILING}" STREQUAL TRUE)
	IF ("${OpenRDK_ARCH}" STREQUAL "arm9" )
		FIND_PATH(JPEG_INCLUDE_DIR jpeglib.h
			${ARM9_CROSS_DIR}/include
			${ARM9_CROSS_ADDONS_DIR}/include
			NO_CMAKE_SYSTEM_PATH
			)
		FIND_PATH(JPEG_LINK_DIRECTORIES libjpeg.so
			${ARM9_CROSS_DIR}/lib
			${ARM9_CROSS_ADDONS_DIR}/lib
			NO_CMAKE_SYSTEM_PATH
			)
	ELSE ("${OpenRDK_ARCH}" STREQUAL "arm9" )
		MESSAGE(STATUS "JPEG support is not available for ${OpenRDK_ARCH} architecture")
	ENDIF ("${OpenRDK_ARCH}" STREQUAL "arm9" )
ENDIF (NOT "${CMAKE_CROSSCOMPILING}" STREQUAL TRUE)

IF(JPEG_INCLUDE_DIR AND JPEG_LINK_DIRECTORIES)
	SET(JPEG_FOUND "Yes")
	SET(JPEG_LIBRARIES "jpeg")
ENDIF(JPEG_INCLUDE_DIR AND JPEG_LINK_DIRECTORIES)


