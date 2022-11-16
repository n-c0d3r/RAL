#include "UsageManager.h"



namespace RAL {

	namespace DirectX11 {

		C_UsageManager::C_UsageManager() {



		}
		void C_UsageManager::Release() {

			I_UsageManager::Release();

			I_AbstractObject::Release();

		}

		void C_UsageManager::SetupValues() {

			I_UsageManager::SetupValues();



			std::cout << "<RAL> Start setting up DirectX11 Usages" << std::endl;

			Usage.DEFAULT = 0;
			Usage.IMMUTABLE = 1;
			Usage.DYNAMIC = 2;
			Usage.STAGING = 3;

			std::cout << "<RAL> Setting up DirectX11 Usages done" << std::endl;

		}

	}

}