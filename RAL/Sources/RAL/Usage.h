#pragma once

#include <RAL/.BuildInfo>
#include <RAL/Utils.h>

#include <RAL/Singleton.h>
#include <RAL/Flag.h>



namespace RAL {

	RAL_BEGIN_FLAGS(Usage)

		RAL_FLAG32(DEFAULT);
		RAL_FLAG32(IMMUTABLE);
		RAL_FLAG32(DYNAMIC);
		RAL_FLAG32(STAGING);

	RAL_END_FLAGS(Usage)

}