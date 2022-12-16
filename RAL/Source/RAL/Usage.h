#pragma once

#include <RAL/.BuildInfo>
#include <RAL/Utils.h>



namespace RAL {

	UL_BEGIN_FLAGS(Usage)

		UL_FLAG32(DEFAULT);
		UL_FLAG32(IMMUTABLE);
		UL_FLAG32(DYNAMIC);
		UL_FLAG32(STAGING);

	UL_END_FLAGS(Usage)

}