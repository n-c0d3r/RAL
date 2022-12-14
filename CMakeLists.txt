cmake_minimum_required(VERSION 3.10)



project(RAL)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_C_STANDARD 17)



set(RAL_CMAKE_DIR ${CMAKE_CURRENT_LIST_DIR}/CMake)
set(RAL_BINARY_DIR ${CMAKE_CURRENT_BINARY_DIR}/RAL/$<CONFIG>)



add_subdirectory(WAL)



add_subdirectory(RAL)
add_subdirectory(Samples)