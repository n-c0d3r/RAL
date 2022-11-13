cmake_minimum_required(VERSION 3.2)



file(GLOB SourceFiles
    "Source/RAL/DirectX12/*.cpp"
    "Source/RAL/DirectX12/*.h"
)
source_group("Source\\RAL\\DirectX12" FILES ${SourceFiles})



source_group("GlobalSource" FILES ${RAL_COMMON_SOURCE_FILES})



add_library(RAL.Implements.DirectX12 SHARED
    ${SourceFiles}

    ${RAL_COMMON_SOURCE_FILES}
)

set_target_properties(RAL.Implements.DirectX12
    PROPERTIES
        FOLDER "RAL/Implements"
)

set_target_properties(RAL.Implements.DirectX12
    PROPERTIES
        OUTPUT_NAME "RAL"
)

target_compile_definitions(RAL.Implements.DirectX12
    PRIVATE RAL_EXPORTS=1 "RAL_CONFIG=$<CONFIG>"
)

target_include_directories(RAL.Implements.DirectX12
    PUBLIC ${CMAKE_BINARY_DIR}/RAL/Include
    PRIVATE Source
    PRIVATE ${RAL_SOURCE_DIR}
)