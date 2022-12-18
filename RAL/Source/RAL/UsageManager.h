#pragma once

#include <RAL/.BuildInfo>
#include <RAL/Utils.h>

#include <RAL/Usage.h>



namespace RAL {

	class I_UsageManager :
		public UL::I_FlagManager,
		public UL::TC_Singleton<I_UsageManager>
	{

	protected:
		I_UsageManager();

	public:
		virtual void Release() override;

		virtual void SetupValues() override;

	};

}