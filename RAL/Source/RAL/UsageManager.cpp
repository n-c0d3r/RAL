#include "UsageManager.h"



namespace RAL {

	I_UsageManager::I_UsageManager() {



	}
	void I_UsageManager::Release() {

		I_AbstractObject::Release();

	}

	void I_UsageManager::SetupValues() {

		I_FlagManager::SetupValues();

	}

}