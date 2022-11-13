#pragma once

#include <RAL/BuildInfo.h>
#include <RAL/EntryPoint.h>

#include "Utils/Utils.h"



namespace RAL {

    RAL_ENUM(E_Usage) {
        
        RAL_ENUM_VALUE(Default);
        RAL_ENUM_VALUE(Immutable);
        RAL_ENUM_VALUE(Dynamic);
        RAL_ENUM_VALUE(Staging);

    };

}