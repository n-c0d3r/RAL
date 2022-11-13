#include "API.h"



namespace RAL {

	namespace DirectX11 {

		C_API::C_API() {

			std::cout << "DirectX11 API Created" << std::endl;

		}

		void C_API::Release() {

			I_API::Release();

			Utils::I_AbstractObject::Release();

		}

	}



	namespace HN_API {

		I_API* Create() {

			return new DirectX11::C_API();
		}

	}

}