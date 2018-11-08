cmake_minimum_required(VERSION 2.8)

project(pa2)

############################################################
# Create variables
############################################################
set(BASEPATH    ${PROJECT_SOURCE_DIR})
set(INCPATH     ${BASEPATH}/include)
set(LIBPATH     ${BASEPATH}/lib)
SET(SRCPATH     ${BASEPATH}/src)
set(PACK        dp io misc util)
set(MAIN        main)
############################################################
# Create compile flags
############################################################
SET(CMAKE_CXX_FLAGS "-Wall -g -std=c++11")
SET(CMAKE_CXX_FLAGS "-Wall -O3 -std=c++11")
############################################################
# process variables
############################################################
IF (NOT EXISTS "${INCPATH}")
  FILE(MAKE_DIRECTORY ${INCPATH})
ENDIF()
IF (NOT EXISTS "${LIBPATH}")
  FILE(MAKE_DIRECTORY ${LIBPATH})
ENDIF()
IF (NOT EXISTS "${SRCPATH}")
  FILE(MAKE_DIRECTORY ${SRCPATH})
ENDIF()
############################################################
# executable file output directory
############################################################
set(EXECUTABLE_OUTPUT_PATH ${BASEPATH})
############################################################
# include file                    
############################################################
# include directory
INCLUDE_DIRECTORIES(${INCPATH} ${SRCPATH})
############################################################
# library                         
############################################################
set(LIBRARY_OUTPUT_PATH ${LIBPATH})
# LIB
file(GLOB LIB ${LIBPATH}/*.a)
############################################################
# Create SRCLIB       
############################################################
# SRC
foreach(i  ${PACK})
  file(GLOB FILE ${SRCPATH}/${i}/*.cpp)
  set(SRC ${SRC} ${FILE})
endforeach() 
add_library(SRCLIB STATIC ${SRC})
target_link_libraries(SRCLIB PRIVATE ${LIB})
############################################################
# Create an executable
############################################################
# MAINPATH
set(MAINPATH ${SRCPATH}/${MAIN}/)
# Add an executable with the above sources
add_executable(m ${MAINPATH}main.cpp)
# link the new target with the target
target_link_libraries(m PRIVATE ${LIB} SRCLIB)
# link the new hello_library target with the hello_binary target
set_target_properties(m PROPERTIES OUTPUT_NAME mps)
