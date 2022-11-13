cmake_minimum_required(VERSION 3.2)



file(GLOB SourceFiles
    "Source/RAL/DirectX11/*.cpp"
    "Source/RAL/DirectX11/*.h"
)
source_group("Source\\RAL\\DirectX11" FILES ${SourceFiles})



source_group("GlobalSource" FILES ${RAL_COMMON_SOURCE_FILES})



add_library(RAL.Implements.DirectX11 SHARED
    ${SourceFiles}

    ${RAL_COMMON_SOURCE_FILES}
)

set_target_properties(RAL.Implements.DirectX11
    PROPERTIES
        FOLDER "RAL/Implements"
)

set_target_properties(RAL.Implements.DirectX11
    PROPERTIES
        OUTPUT_NAME "RAL"
)

target_compile_definitions(RAL.Implements.DirectX11
    PRIVATE RAL_EXPORTS=1 "RAL_CONFIG=$<CONFIG>"
)

target_include_directories(RAL.Implements.DirectX11
    PUBLIC ${CMAKE_BINARY_DIR}/RAL/Include
    PRIVATE Source
    PRIVATE ${RAL_SOURCE_DIR}
)