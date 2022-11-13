#include "API.h"

#include <RAL/Format.h>



namespace RAL {

	namespace DirectX11 {

		C_API::C_API() {

			SetupFormats();

			std::cout << "<RAL> DirectX11 API Created" << std::endl;

		}

		void C_API::Release() {

			I_API::Release();

			I_AbstractObject::Release();

		}

		std::string C_API::GetName() {

			return "DirectX11";
		}

		void C_API::SetupFormats() {

			Format.Unknown = 0;

			Format.R32G32B32A32_Typeless = 1;
			Format.R32G32B32A32_Float = 2;
			Format.R32G32B32A32_UInt = 3;
			Format.R32G32B32A32_SInt = 4;

			Format.R32G32B32_Typeless = 5;
			Format.R32G32B32_Float = 6;
			Format.R32G32B32_UInt = 7;
			Format.R32G32B32_SInt = 8;

			Format.R16G16B16A16_Typeless = 9;
			Format.R16G16B16A16_Float = 10;
			Format.R16G16B16A16_UNorm = 11;
			Format.R16G16B16A16_UInt = 12;
			Format.R16G16B16A16_SNorm = 13;
			Format.R16G16B16A16_SInt = 14;

			Format.R16G16_Typeless = 33;
			Format.R16G16_Float = 34;
			Format.R16G16_UNorm = 35;
			Format.R16G16_UInt = 36;
			Format.R16G16_SNorm = 37;
			Format.R16G16_SInt = 38;

			Format.R32G32_Typeless = 15;
			Format.R32G32_Float = 16;
			Format.R32G32_UInt = 17;
			Format.R32G32_SInt = 18;

			Format.R8G8B8A8_Typeless = 27;
			Format.R8G8B8A8_UNorm = 28;
			Format.R8G8B8A8_UNorm_SRGB = 29;
			Format.R8G8B8A8_UInt = 30;
			Format.R8G8B8A8_SNorm = 31;
			Format.R8G8B8A8_SInt = 32;

		}

	}

}