#pragma once

#include <RAL/.BuildInfo>
#include <RAL/Utils.h>

#include <RAL/FlagManager.h>
#include <RAL/Flag.h>
#include <RAL/Usage.h>
#include <RAL/Singleton.h>



namespace RAL {

	class I_UsageManager :
		public I_FlagManager,
		public TC_Singleton<I_UsageManager>
	{

	protected:
		I_UsageManager();

	public:
		virtual void Release() override;

		virtual void SetupValues() override;

	};

}