cmake_minimum_required(VERSION 3.10)



file(GLOB InitRALSourceFiles
    "Source/*.cpp"
    "Source/*.h"
)
source_group("Source" FILES ${InitRALSourceFiles})



add_executable(Samples.InitRAL
    ${InitRALSourceFiles}
)



set_target_properties(Samples.InitRAL
    PROPERTIES 
        FOLDER "Samples"
)



include(${RAL_CMAKE_DIR}/TargetUseRAL.cmake)
TargetUseRAL(Samples.InitRAL)