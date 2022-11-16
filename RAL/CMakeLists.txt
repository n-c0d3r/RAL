cmake_minimum_required(VERSION 3.10)



include(${RAL_CMAKE_DIR}/APIOptions.cmake)



set(RAL_SOURCE_DIR ${CMAKE_SOURCE_DIR}/RAL/Source PARENT_SCOPE)
set(RAL_SOURCE_DIR ${CMAKE_SOURCE_DIR}/RAL/Source)



configure_file(ConfigurationFiles/RAL/.BuildInfo ConfigurationFiles/RAL/.BuildInfo)



file(GLOB RALSourceFiles
    "Source/RAL/*.cpp"
    "Source/RAL/*.h"
)
source_group("Source\\RAL" FILES ${RALSourceFiles})

file(GLOB RALSourceDirectX11Files
    "Source/RAL/DirectX11/*.cpp"
    "Source/RAL/DirectX11/*.h"
)
source_group("Source\\RAL\\DirectX11" FILES ${RALSourceDirectX11Files})

file(GLOB RALSourceDirectX12Files
    "Source/RAL/DirectX12/*.cpp"
    "Source/RAL/DirectX12/*.h"
)
source_group("Source\\RAL\\DirectX11" FILES ${RALSourceDirectX12Files})



add_library(RAL STATIC
    ${RALSourceFiles}
    ${RALSourceDirectX11Files}
    ${RALSourceDirectX12Files}
)



target_link_libraries(RAL
    PRIVATE 
        d3d11.lib
        d3d12.lib
        d3dcompiler
)

target_include_directories(RAL
    PUBLIC 
        ${CMAKE_BINARY_DIR}/RAL/ConfigurationFiles
        ${CMAKE_CURRENT_LIST_DIR}/Source
)

target_compile_definitions(RAL
    PRIVATE RAL_EXPORTS=1
)