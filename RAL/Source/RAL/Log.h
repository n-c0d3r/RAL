#pragma once

#include <RAL/.BuildInfo>
#include <RAL/Utils.h>

#include <RAL/AbstractObject.h>
#include <RAL/Singleton.h>



namespace RAL {

	namespace HN_Log
	{

        extern void Info(const std::string& content);
        extern void Warn(const std::string& content);
        extern void Error(const std::string& content);
        extern void Fatal(const std::string& content);

	};

}