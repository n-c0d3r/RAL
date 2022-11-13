cmake_minimum_required(VERSION 3.10)



include(${RAL_CMAKE_DIR}/APIOptions.cmake)



set(RAL_SOURCES_DIR ${CMAKE_SOURCE_DIR}/RAL/Sources PARENT_SCOPE)
set(RAL_SOURCES_DIR ${CMAKE_SOURCE_DIR}/RAL/Sources)



configure_file(ConfigurationFiles/RAL/.BuildInfo ConfigurationFiles/RAL/.BuildInfo)



file(GLOB RALSourceFiles
    "Sources/RAL/*.cpp"
    "Sources/RAL/*.h"
)
source_group("Sources\\RAL" FILES ${RALSourceFiles})

file(GLOB RALSourceDirectX11Files
    "Sources/RAL/DirectX11/*.cpp"
    "Sources/RAL/DirectX11/*.h"
)
source_group("Sources\\RAL\\DirectX11" FILES ${RALSourceDirectX11Files})

file(GLOB RALSourceDirectX12Files
    "Sources/RAL/DirectX12/*.cpp"
    "Sources/RAL/DirectX12/*.h"
)
source_group("Sources\\RAL\\DirectX11" FILES ${RALSourceDirectX12Files})



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
        ${CMAKE_CURRENT_LIST_DIR}/Sources
)

target_compile_definitions(RAL
    PRIVATE RAL_EXPORTS=1
)