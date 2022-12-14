#pragma once

#include <RAL/.BuildInfo>
#include <RAL/Utils.h>



namespace RAL {

	class I_API;



#ifdef WIN32
	using WindowHandle = HWND;
#endif



	class I_Screen :
		public UL::I_AbstractObject
	{

	protected:
		I_Screen();



	public:
		static I_Screen* Create(WindowHandle windowHandle);
		virtual void Release() override;

	};

}