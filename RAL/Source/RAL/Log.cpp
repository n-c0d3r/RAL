#include "Log.h"



#ifdef _WIN32
#define RAL_SET_CONSOLE_COLOR(color) \
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
#endif



namespace RAL {

	namespace HN_Log
	{

        void Info(const std::string& content){

            RAL_SET_CONSOLE_COLOR(0xF0);

            std::cout << " INFO ";

            RAL_SET_CONSOLE_COLOR(0x07);

            std::cout << " " << content << std::endl;

        }
        void Warn(const std::string& content) {

            RAL_SET_CONSOLE_COLOR(0xE0);

            std::cout << " WARN ";

            RAL_SET_CONSOLE_COLOR(0x06);

            std::cout << " " << content << std::endl;

        }
        void Error(const std::string& content) {

            RAL_SET_CONSOLE_COLOR(0xC0);

            std::cout << " Error ";

            RAL_SET_CONSOLE_COLOR(0x0C);

            std::cout << " " << content << std::endl;

        }
        void Fatal(const std::string& content) {

            RAL_SET_CONSOLE_COLOR(0xD0);

            std::cout << " Fatal ";

            RAL_SET_CONSOLE_COLOR(0x50);

            std::cout << " " << content << " " << std::endl;

            exit(1);

        }

        void Exception(const std::exception& e) {

            std::string content = e.what();

            Level level = (Level)(content[0] % 4);

            content = content.substr(1, content.length() - 1);

            switch (level)
            {
            case RAL::HN_Log::Level::INFO:
                Info(content);
                break;
            case RAL::HN_Log::Level::WARN:
                Warn(content);
                break;
            case RAL::HN_Log::Level::ERROR_:
                Error(content);
                break;
            case RAL::HN_Log::Level::FATAL:
                Fatal(content);
                break;
            default:
                break;
            }

        }

	};

}