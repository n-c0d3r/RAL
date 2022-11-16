#pragma once

#include <RAL/.BuildInfo>
#include <RAL/Utils.h>

#include <RAL/FlagManager.h>
#include <RAL/Flag.h>
#include <RAL/FormatManager.h>



namespace RAL {

	namespace DirectX11 {

		class C_FormatManager :
			public I_FormatManager
		{

		public:
			C_FormatManager();
			virtual void Release() override;

			virtual void SetupValues() override;

		};

	}

}