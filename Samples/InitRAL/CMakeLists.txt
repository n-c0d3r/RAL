cmake_minimum_required(VERSION 3.10)



file(GLOB InitRALSourceFiles
    "Sources/*.cpp"
    "Sources/*.h"
)
source_group("Sources" FILES ${InitRALSourceFiles})



add_executable(InitRAL
    ${InitRALSourceFiles}
)



set_target_properties(InitRAL
    PROPERTIES 
        FOLDER "Samples"
)



include(${RAL_CMAKE_DIR}/TargetUseRAL.cmake)
TargetUseRAL(InitRAL)