
function(RALImportForTarget TargetName)

    add_dependencies(${TargetName}
        RAL
    )

    target_include_directories(${TargetName}
        PUBLIC ${CMAKE_BINARY_DIR}/RAL/Include
        PRIVATE ${RAL_SOURCE_DIR}
    )

    target_link_directories(${TargetName}
        PRIVATE ${CMAKE_BINARY_DIR}/RAL/$<CONFIG>
    )

    target_link_libraries(${TargetName}
        PRIVATE RAL.lib
    )

    set_property(TARGET ${TargetName} APPEND PROPERTY LINK_FLAGS "/DELAYLOAD:RAL.dll")
    
endfunction(RALImportForTarget)