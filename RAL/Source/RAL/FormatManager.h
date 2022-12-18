#pragma once

#include <RAL/.BuildInfo>
#include <RAL/Utils.h>

#include <RAL/Format.h>



namespace RAL {

	class I_FormatManager :
		public UL::I_FlagManager,
		public UL::TC_Singleton<I_FormatManager>
	{

	protected:
		I_FormatManager();

	public:
		virtual void Release() override;

		virtual void SetupValues() override;

	};

}