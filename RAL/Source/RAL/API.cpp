#include "API.h"
#include <RAL/FormatManager.h>
#include <RAL/UsageManager.h>

#ifdef RAL_SUPPORT_DIRECTX11
#include "DirectX11/API.h"
#endif



namespace RAL {

	I_API* I_API::Create(const std::string& APIName) {

#ifdef RAL_SUPPORT_DIRECTX11
		if (APIName == "DirectX11") {

			try {

				UL::HN_Log::Info("<RAL> Choose DirectX 11 API to use");

				return new DirectX11::C_API();
			}
			catch (UL::I_Exception& e) {

				UL::HN_Log::Exception(e);

				UL::HN_Log::Error("<RAL> Initializing DirectX11 API failed");

				return 0;
			}

		}
#endif

		UL::HN_Log::Error("<RAL> No Graphics API is supported");

		return 0;
	}
	void I_API::Release() {



	}

	void I_API::InternalInit() {

		m_FormatManager->SetupValues();

		m_UsageManager->SetupValues();

	}

}