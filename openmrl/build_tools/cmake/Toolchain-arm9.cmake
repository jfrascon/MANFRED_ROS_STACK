# this one is important
SET(CMAKE_SYSTEM_NAME Linux)
#this one not so much
SET(CMAKE_SYSTEM_VERSION 1)
# necessary for OpenRDK purposes
SET(CMAKE_SYSTEM_PROCESSOR "arm9")
SET(CROSS_ARCH "${CMAKE_SYSTEM_PROCESSOR}")

# Check validity of Cross Toolchain Dir
SET(ARM9_CROSS_DIR "/usr/")
IF( NOT "x$ENV{ARM9_CROSS_DIR}x" STREQUAL "xx" )
	SET(ARM9_CROSS_DIR $ENV{ARM9_CROSS_DIR})
ENDIF( NOT "x$ENV{ARM9_CROSS_DIR}x" STREQUAL "xx" )
IF( "x${ARM9_CROSS_DIR}x" STREQUAL "xx" )
	MESSAGE( FATAL_ERROR "Empty ARM9_CROSS_DIR variables. Please check your configuration." )
ENDIF( "x${ARM9_CROSS_DIR}x" STREQUAL "xx" )

IF( NOT "x$ENV{ARM9_CROSS_ADDONS_DIR}x" STREQUAL "xx" )
	SET(ARM9_CROSS_ADDONS_DIR $ENV{ARM9_CROSS_ADDONS_DIR})
ENDIF( NOT "x$ENV{ARM9_CROSS_ADDONS_DIR}x" STREQUAL "xx" )
IF( "x${ARM9_CROSS_ADDONS_DIR}x" STREQUAL "xx" )
	MESSAGE( FATAL_ERROR "Empty ARM9_CROSS_ADDONS_DIR variables. Please check your configuration." )
ENDIF( "x${ARM9_CROSS_ADDONS_DIR}x" STREQUAL "xx" )


SET( TARGET_HOST "TARGET_HOST_LINUX")
SET( TARGET_ARCH "linux")
SET( ARM9_PREFIX "arm-none-linux-gnueabi")
LINK_DIRECTORIES(${ARM9_CROSS_ADDONS_DIR}/lib)
SET( INCLUDE_PREFIX "${ARM9_CROSS_DIR}/${ARM9_PREFIX}/include/" )
SET( LIB_PREFIX "${ARM9_CROSS_DIR}/${ARM9_PREFIX}/lib/" )

SET(UNIX 1)

# specify the cross compiler
SET(CMAKE_AR "${ARM9_CROSS_DIR}/bin/${ARM9_PREFIX}-ar" CACHE FILEPATH "" FORCE)
SET(CMAKE_RANLIB "${ARM9_CROSS_DIR}/bin/${ARM9_PREFIX}-ranlib" CACHE FILEPATH "" FORCE)
SET(CMAKE_C_COMPILER "${ARM9_CROSS_DIR}/bin/${ARM9_PREFIX}-gcc" CACHE FILEPATH "" FORCE)
SET(CMAKE_CXX_COMPILER "${ARM9_CROSS_DIR}/bin/${ARM9_PREFIX}-g++" CACHE FILEPATH "" FORCE)
SET(CMAKE_LINKER "${ARM9_CROSS_DIR}/bin/${ARM9_PREFIX}-ld" CACHE FILEPATH "" FORCE)
SET(CMAKE_STRIP "${ARM9_CROSS_DIR}/bin/${ARM9_PREFIX}-strip" CACHE FILEPATH "" FORCE)
SET(CMAKE_OBJCOPY "${ARM9_CROSS_DIR}/bin/${ARM9_PREFIX}-objcopy" CACHE FILEPATH "" FORCE)
SET(CMAKE_OBJDUMP "${ARM9_CROSS_DIR}/bin/${ARM9_PREFIX}-objdump" CACHE FILEPATH "" FORCE)

LIST(APPEND RDKCORE_DEFINITIONS -DLINUX)

LINK_DIRECTORIES(${ARM9_CROSS_ADDONS_DIR}/lib)
INCLUDE_DIRECTORIES(${ARM9_CROSS_ADDONS_DIR}/include)

# where is the target environment 
#SET(CMAKE_FIND_ROOT_PATH  /opt/eldk-2007-01-19/ppc_74xx /home/alex/eldk-ppc74xx-inst)

# search for programs in the build host directories
SET(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
# for libraries and headers in the target directories
#SET(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
#SET(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)

# Tests of working compilers are broken for OpenEmbedded Toolchain
# we avoid testing them
INCLUDE(CMakeForceCompiler)
CMAKE_FORCE_C_COMPILER("${CMAKE_C_COMPILER}" GNU)
CMAKE_FORCE_CXX_COMPILER("${CMAKE_CXX_COMPILER}" GNU)

