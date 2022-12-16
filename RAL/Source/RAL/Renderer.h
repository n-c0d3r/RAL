#pragma once

#include <RAL/.BuildInfo>
#include <RAL/Utils.h>



namespace RAL {

	class I_API;



	class I_Renderer :
		public UL::I_AbstractObject
	{

	protected:
		I_Renderer();



	public:
		virtual void Release() override;

	};

}