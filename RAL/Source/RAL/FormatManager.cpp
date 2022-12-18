#include "FormatManager.h"



namespace RAL {

	I_FormatManager::I_FormatManager() {



	}
	void I_FormatManager::Release() {

		UL::I_AbstractObject::Release();

	}

	void I_FormatManager::SetupValues() {

		I_FlagManager::SetupValues();

	}

}