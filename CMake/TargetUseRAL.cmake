
function(TargetUseRAL TargetName)
    
    add_dependencies(${TargetName} RAL)

    # target_link_directories(${TargetName} 
    #     PRIVATE ${RAL_BINARY_DIR}
    # )

    target_link_libraries(${TargetName} 
        PRIVATE RAL
    )

    target_include_directories(${TargetName} 
        PUBLIC ${RAL_SOURCE_DIR}
    )

endfunction(TargetUseRAL)
