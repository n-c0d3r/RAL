#pragma once

#include <RAL/BuildInfo.h>
#include <RAL/EntryPoint.h>

#include <RAL/Utils/Utils.h>
#include <RAL/API.h>



namespace RAL {

	namespace DirectX11 {

		class RAL_API C_API :
			public Utils::I_AbstractObject,
			public I_API
		{

		public:
			C_API();

			virtual void Release() override;

		};

	}

}