cmake_minimum_required(VERSION 3.2)



include(${CMAKE_SOURCE_DIR}/CMake/ImplementOptions.cmake)



configure_file(Source/RAL/BuildInfo.h.in Include/RAL/BuildInfo.h)



file(GLOB FakeSourceFiles
    "FakeSource/RAL/*.cpp"
)
source_group("FakeSource\\RAL" FILES ${FakeSourceFiles})



file(GLOB SourceFiles
    "Source/RAL/*.cpp"
    "Source/RAL/*.h"
)
source_group("Source\\RAL" FILES ${SourceFiles})

file(GLOB SourceUtilsFiles
    "Source/RAL/Utils/*.cpp"
    "Source/RAL/Utils/*.h"
)
source_group("Source\\RAL\\Utils" FILES ${SourceUtilsFiles})



set(RAL_SOURCE_DIR "${CMAKE_CURRENT_LIST_DIR}/Source" PARENT_SCOPE)
set(RAL_SOURCE_DIR "${CMAKE_CURRENT_LIST_DIR}/Source")



set(RAL_COMMON_SOURCE_FILES ${SourceFiles} ${SourceUtilsFiles} PARENT_SCOPE)
set(RAL_COMMON_SOURCE_FILES ${SourceFiles} ${SourceUtilsFiles})



add_library(RAL SHARED
    ${SourceFiles}
    ${SourceUtilsFiles}

    ${FakeSourceFiles}
)

set_target_properties(RAL
    PROPERTIES
        FOLDER "RAL"
)

target_include_directories(RAL
    PUBLIC ${CMAKE_BINARY_DIR}/RAL/Include
    PRIVATE Source
)

target_compile_definitions(RAL
    PRIVATE RAL_EXPORTS=1 "RAL_CONFIG=$<CONFIG>"
)



add_subdirectory(Implements)



add_dependencies(RAL
    RAL.Implements
)