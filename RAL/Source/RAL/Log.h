#pragma once

#include <RAL/.BuildInfo>

#include <iostream>
#include <exception>

#include <RAL/AbstractObject.h>
#include <RAL/Singleton.h>



namespace RAL {

    struct I_Exception;



    enum class E_LogLevel {

        INFO = 0,
        WARN = 1,
        ERROR_ = 2,
        FATAL = 3

    };



	namespace HN_Log
	{

        extern void Info(const std::string& content);
        extern void Warn(const std::string& content);
        extern void Error(const std::string& content);
        extern void Fatal(const std::string& content);

        extern void Exception(const I_Exception& e);

	};

}