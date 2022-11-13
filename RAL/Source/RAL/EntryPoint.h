#pragma once

#include <RAL/BuildInfo.h>



#ifdef RAL_EXPORTS
#define RAL_API __declspec(dllexport)
#define RAL_EXTERN
#else
#define RAL_API __declspec(dllimport)
#define RAL_EXTERN extern
#endif