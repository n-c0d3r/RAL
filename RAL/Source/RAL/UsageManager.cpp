#include "UsageManager.h"



namespace RAL {

	I_UsageManager::I_UsageManager() {



	}
	void I_UsageManager::Release() {

		UL::I_FlagManager::Release();

	}

	void I_UsageManager::SetupValues() {

		I_FlagManager::SetupValues();

	}

}