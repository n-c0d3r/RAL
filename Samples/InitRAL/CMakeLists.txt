cmake_minimum_required(VERSION 3.2)



file(GLOB SourceFiles
    "Source/*.cpp"
    "Source/*.h"
)
source_group("Source" FILES ${SourceFiles})



add_executable(Samples.InitRAL
    ${SourceFiles}
)

set_target_properties(Samples.InitRAL
    PROPERTIES
        FOLDER "Samples"
)

target_include_directories(Samples.InitRAL
    PRIVATE Source
)



include(${CMAKE_SOURCE_DIR}/CMake/RALImportForTarget.cmake)
RALImportForTarget(Samples.InitRAL)