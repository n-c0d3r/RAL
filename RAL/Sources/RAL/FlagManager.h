#pragma once

#include <RAL/.BuildInfo>
#include <RAL/Utils.h>

#include <RAL/AbstractObject.h>
#include <RAL/Singleton.h>



namespace RAL {

	class I_FlagManager :
		public I_AbstractObject
	{

	public:
		virtual void Release();

		virtual void SetupValues() {}

	};

}