#pragma once

#include <RAL/.BuildInfo>

#include <iostream>
#include <exception>

#include <RAL/AbstractObject.h>
#include <RAL/Singleton.h>



namespace RAL {

	struct S_ErrorException : public std::exception {

    private:
        std::string m_Content;


    public:
        S_ErrorException(const std::string& content) : m_Content("2" + content) {
        

        
        }

        const char * what () const throw () {
            return m_Content.c_str();
        }

    };



	struct S_FatalException : public std::exception {

    private:
        std::string m_Content;


    public:
        S_FatalException(const std::string& content) : m_Content("3" + content) {
        
        
        
        }

        const char * what () const throw () {
            return m_Content.c_str();
        }

    };

}