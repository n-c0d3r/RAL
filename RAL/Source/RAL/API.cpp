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

			return new DirectX11::C_API();
		}
#endif

		return 0;
	}
	void I_API::Release() {



	}

	void I_API::InternalInit() {

		m_FormatManager->SetupValues();
		m_UsageManager->SetupValues();

	}

}