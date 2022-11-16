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

			std::cout << "<RAL> Start initializing DirectX11 API" << std::endl;

			InternalInit();

			std::cout << "<RAL> DirectX11 API initialized" << std::endl;

		}

		void C_API::Release() {

			std::cout << "<RAL> Start Releasing DirectX11 API" << std::endl;

			I_API::Release();

			I_AbstractObject::Release();

			std::cout << "<RAL> DirectX11 API Released" << std::endl;

		}

	}

}