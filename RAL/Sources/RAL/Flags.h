#pragma once

#include <RAL/.BuildInfo>
#include <RAL/Utils.h>

#include "Singleton.h"



namespace RAL {

	using Flags32 = U32;
	using Flags64 = U64;

}



#define RAL_BEGIN_FLAGS(Name) \
struct Name##_Class {

#define RAL_END_FLAGS(Name) \
};\
RAL_EXTERN Name##_Class Name;

#define RAL_FLAG32(Name) RAL::Flags32 Name = 0;
#define RAL_FLAG64(Name) RAL::Flags64 Name = 0;