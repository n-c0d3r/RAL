#pragma once

#include <RAL/.BuildInfo>

#include <iostream>
#include <exception>

#include <RAL/AbstractObject.h>
#include <RAL/Singleton.h>
#include <RAL/Log.h>



namespace RAL {

    struct I_Exception {

        RAL::E_LogLevel logLevel;
        std::string content;

    };



	struct S_ErrorException : public I_Exception {

        S_ErrorException(const std::string& content) {
        
            this->content = content;
            logLevel = E_LogLevel::ERROR_;
        
        }

    };



    struct S_FatalException : public I_Exception {

        S_FatalException(const std::string& content) {

            this->content = content;
            logLevel = E_LogLevel::FATAL;

        }

    };

}