#pragma once

#include <RAL/.BuildInfo>
#include <RAL/Utils.h>



namespace RAL {

	class I_AbstractObject {

	public:
		virtual void Release() { delete this; }

	};

}