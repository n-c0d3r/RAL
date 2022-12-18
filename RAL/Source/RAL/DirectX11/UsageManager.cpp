#include "UsageManager.h"



namespace RAL {

	namespace DirectX11 {

		C_UsageManager::C_UsageManager() {



		}
		void C_UsageManager::Release() {

			I_UsageManager::Release();

		}

		void C_UsageManager::SetupValues() {

			I_UsageManager::SetupValues();



			UL::HN_Log::Info("<RAL> Start setting up DirectX11 Usages");

			Usage.DEFAULT = 0;
			Usage.IMMUTABLE = 1;
			Usage.DYNAMIC = 2;
			Usage.STAGING = 3;

			UL::HN_Log::Info("<RAL> Setting up DirectX11 Usages done");

		}

	}

}