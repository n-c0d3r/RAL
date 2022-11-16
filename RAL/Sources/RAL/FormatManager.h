#pragma once

#include <RAL/.BuildInfo>
#include <RAL/Utils.h>

#include <RAL/FlagManager.h>
#include <RAL/Flag.h>
#include <RAL/Format.h>
#include <RAL/Singleton.h>



namespace RAL {

	class I_FormatManager :
		public I_FlagManager,
		public TC_Singleton<I_FormatManager>
	{

	protected:
		I_FormatManager();

	public:
		virtual void Release() override;

		virtual void SetupValues() override;

	};

}