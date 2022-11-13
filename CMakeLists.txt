cmake_minimum_required(VERSION 3.10)



project(RAL)

set_property( GLOBAL PROPERTY USE_FOLDERS ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_C_STANDARD 17)





add_subdirectory(RAL)
add_subdirectory(Samples)