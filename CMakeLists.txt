cmake_minimum_required(VERSION 3.10)
project(mi_proyecto)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Carpeta de headers
include_directories(include)

# Archivos fuente
file(GLOB_RECURSE SOURCES
     src/*.cpp
)

# Crear el ejecutable
add_executable(mi_proyecto ${SOURCES})

# Carpeta para ejecutables
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

