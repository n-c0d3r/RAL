#pragma once

#include <RAL/BuildInfo.h>
#include <RAL/EntryPoint.h>

#include "Types.h"



#define RAL_ENUM(EnumName) \
struct EnumName

#define RAL_ENUM_VALUE(ValueName) \
public:\
    RAL::Utils::U32 ValueName;\
