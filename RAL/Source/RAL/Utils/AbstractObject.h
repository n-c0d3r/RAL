#pragma once

#include <RAL/BuildInfo.h>
#include <RAL/EntryPoint.h>



namespace RAL {

	namespace Utils {

		class I_AbstractObject {

		public:
			virtual void Release() { delete this; }

		};
		
	}

}