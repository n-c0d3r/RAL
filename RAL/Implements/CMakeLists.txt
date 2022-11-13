cmake_minimum_required(VERSION 3.2)



add_subdirectory(DirectX11)
add_subdirectory(DirectX12)



add_custom_target(RAL.Implements)

set_target_properties(RAL.Implements
    PROPERTIES
        FOLDER "RAL/Implements"
)

add_dependencies(RAL.Implements
    RAL.Implements.DirectX11
    RAL.Implements.DirectX12
)