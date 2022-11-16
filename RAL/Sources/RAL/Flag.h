#pragma once

#include <RAL/.BuildInfo>
#include <RAL/Utils.h>



namespace RAL {

	using Flag32 = U32;
	using Flag64 = U64;

}



#define RAL_BEGIN_FLAGS(Name) \
struct S_##Name {

#define RAL_END_FLAGS(Name) \
};\
extern S_##Name Name;

#define RAL_DEFINE_FLAGS(Name) S_##Name Name;

#define RAL_FLAG32(Name) RAL::Flag32 Name = 0;
#define RAL_FLAG64(Name) RAL::Flag64 Name = 0;