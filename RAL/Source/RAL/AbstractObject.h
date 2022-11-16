#pragma once

#include <RAL/.BuildInfo>



namespace RAL {

	class I_AbstractObject {

	public:
		virtual void Release() { delete this; }

	};

}