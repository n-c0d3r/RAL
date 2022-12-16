#pragma once

#include <RAL/.BuildInfo>
#include <RAL/Utils.h>

#include <RAL/UsageManager.h>



namespace RAL {

	namespace DirectX11 {

		class C_UsageManager :
			public I_UsageManager,

			public UL::I_AbstractObject
		{

		public:
			C_UsageManager();
			virtual void Release() override;

			virtual void SetupValues() override;

		};

	}

}