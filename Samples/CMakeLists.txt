cmake_minimum_required(VERSION 3.2)



add_subdirectory(InitRAL)



add_custom_target(Samples)

set_target_properties(Samples
    PROPERTIES
        FOLDER "Samples"
)

add_dependencies(Samples
    Samples.InitRAL
)