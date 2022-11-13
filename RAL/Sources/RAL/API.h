#pragma once

#include <RAL/.BuildInfo>
#include <RAL/Utils.h>

#include "AbstractObject.h"
#include "Singleton.h"



namespace RAL {

	class I_API :
		public I_AbstractObject,
		public TC_Singleton<I_API>
	{

	protected:
		I_API() : 
			TC_Singleton()
		{



		}



	public:
		static I_API* Create(const std::string& APIName);
		virtual void Release() override;

		virtual std::string GetName() { return ""; }

	};

}