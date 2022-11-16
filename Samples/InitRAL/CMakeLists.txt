cmake_minimum_required(VERSION 3.10)



file(GLOB InitRALSourceFiles
    "Source/*.cpp"
    "Source/*.h"
)
source_group("Source" FILES ${InitRALSourceFiles})



add_executable(InitRAL
    ${InitRALSourceFiles}
)



set_target_properties(InitRAL
    PROPERTIES 
        FOLDER "Samples"
)



include(${RAL_CMAKE_DIR}/TargetUseRAL.cmake)
TargetUseRAL(InitRAL)