#pragma once

#include <RAL/BuildInfo.h>
#include <RAL/EntryPoint.h>

#include <RAL/Utils/AbstractObject.h>



namespace RAL {

	class RAL_API I_API :
		public Utils::I_AbstractObject
	{

	public:
		virtual void Release() override;

	};



	namespace HN_API {

		RAL_API I_API* Create();

	}

}