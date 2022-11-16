#include "API.h"

#include <RAL/Format.h>
#include <RAL/DirectX11/FormatManager.h>
#include <RAL/DirectX11/UsageManager.h>



namespace RAL {

	namespace DirectX11 {

		C_API::C_API() :
			I_API(
				"DirectX11",

				new C_FormatManager(),
				new C_UsageManager()
			)
		{

			HN_Log::Info("<RAL> Start initializing DirectX11 API");

			InternalInit();

			HN_Log::Info("<RAL> DirectX11 API initialized");

		}

		void C_API::Release() {

			HN_Log::Info("<RAL> Start Releasing DirectX11 API");

			I_API::Release();

			I_AbstractObject::Release();

			HN_Log::Info("<RAL> DirectX11 API Released");

		}

	}

}