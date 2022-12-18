#include "FormatManager.h"



namespace RAL {

	namespace DirectX11 {

		C_FormatManager::C_FormatManager() {



		}
		void C_FormatManager::Release() {

			I_FormatManager::Release();

		}

		void C_FormatManager::SetupValues() {

			I_FormatManager::SetupValues();



			UL::HN_Log::Info("<RAL> Start setting up DirectX11 Formats");

			Format.UNKNOWN = 0;
			Format.R32G32B32A32_TYPELESS = 1;
			Format.R32G32B32A32_FLOAT = 2;
			Format.R32G32B32A32_UINT = 3;
			Format.R32G32B32A32_SINT = 4;
			Format.R32G32B32_TYPELESS = 5;
			Format.R32G32B32_FLOAT = 6;
			Format.R32G32B32_UINT = 7;
			Format.R32G32B32_SINT = 8;
			Format.R16G16B16A16_TYPELESS = 9;
			Format.R16G16B16A16_FLOAT = 10;
			Format.R16G16B16A16_UNORM = 11;
			Format.R16G16B16A16_UINT = 12;
			Format.R16G16B16A16_SNORM = 13;
			Format.R16G16B16A16_SINT = 14;
			Format.R32G32_TYPELESS = 15;
			Format.R32G32_FLOAT = 16;
			Format.R32G32_UINT = 17;
			Format.R32G32_SINT = 18;
			Format.R32G8X24_TYPELESS = 19;
			Format.D32_FLOAT_S8X24_UINT = 20;
			Format.R32_FLOAT_X8X24_TYPELESS = 21;
			Format.X32_TYPELESS_G8X24_UINT = 22;
			Format.R10G10B10A2_TYPELESS = 23;
			Format.R10G10B10A2_UNORM = 24;
			Format.R10G10B10A2_UINT = 25;
			Format.R11G11B10_FLOAT = 26;
			Format.R8G8B8A8_TYPELESS = 27;
			Format.R8G8B8A8_UNORM = 28;
			Format.R8G8B8A8_UNORM_SRGB = 29;
			Format.R8G8B8A8_UINT = 30;
			Format.R8G8B8A8_SNORM = 31;
			Format.R8G8B8A8_SINT = 32;
			Format.R16G16_TYPELESS = 33;
			Format.R16G16_FLOAT = 34;
			Format.R16G16_UNORM = 35;
			Format.R16G16_UINT = 36;
			Format.R16G16_SNORM = 37;
			Format.R16G16_SINT = 38;
			Format.R32_TYPELESS = 39;
			Format.D32_FLOAT = 40;
			Format.R32_FLOAT = 41;
			Format.R32_UINT = 42;
			Format.R32_SINT = 43;
			Format.R24G8_TYPELESS = 44;
			Format.D24_UNORM_S8_UINT = 45;
			Format.R24_UNORM_X8_TYPELESS = 46;
			Format.X24_TYPELESS_G8_UINT = 47;
			Format.R8G8_TYPELESS = 48;
			Format.R8G8_UNORM = 49;
			Format.R8G8_UINT = 50;
			Format.R8G8_SNORM = 51;
			Format.R8G8_SINT = 52;
			Format.R16_TYPELESS = 53;
			Format.R16_FLOAT = 54;
			Format.D16_UNORM = 55;
			Format.R16_UNORM = 56;
			Format.R16_UINT = 57;
			Format.R16_SNORM = 58;
			Format.R16_SINT = 59;
			Format.R8_TYPELESS = 60;
			Format.R8_UNORM = 61;
			Format.R8_UINT = 62;
			Format.R8_SNORM = 63;
			Format.R8_SINT = 64;
			Format.A8_UNORM = 65;
			Format.R1_UNORM = 66;
			Format.R9G9B9E5_SHAREDEXP = 67;
			Format.R8G8_B8G8_UNORM = 68;
			Format.G8R8_G8B8_UNORM = 69;
			Format.BC1_TYPELESS = 70;
			Format.BC1_UNORM = 71;
			Format.BC1_UNORM_SRGB = 72;
			Format.BC2_TYPELESS = 73;
			Format.BC2_UNORM = 74;
			Format.BC2_UNORM_SRGB = 75;
			Format.BC3_TYPELESS = 76;
			Format.BC3_UNORM = 77;
			Format.BC3_UNORM_SRGB = 78;
			Format.BC4_TYPELESS = 79;
			Format.BC4_UNORM = 80;
			Format.BC4_SNORM = 81;
			Format.BC5_TYPELESS = 82;
			Format.BC5_UNORM = 83;
			Format.BC5_SNORM = 84;
			Format.B5G6R5_UNORM = 85;
			Format.B5G5R5A1_UNORM = 86;
			Format.B8G8R8A8_UNORM = 87;
			Format.B8G8R8X8_UNORM = 88;
			Format.R10G10B10_XR_BIAS_A2_UNORM = 89;
			Format.B8G8R8A8_TYPELESS = 90;
			Format.B8G8R8A8_UNORM_SRGB = 91;
			Format.B8G8R8X8_TYPELESS = 92;
			Format.B8G8R8X8_UNORM_SRGB = 93;
			Format.BC6H_TYPELESS = 94;
			Format.BC6H_UF16 = 95;
			Format.BC6H_SF16 = 96;
			Format.BC7_TYPELESS = 97;
			Format.BC7_UNORM = 98;
			Format.BC7_UNORM_SRGB = 99;
			Format.AYUV = 100;
			Format.Y410 = 101;
			Format.Y416 = 102;
			Format.NV12 = 103;
			Format.P010 = 104;
			Format.P016 = 105;
			Format._420_OPAQUE = 106;
			Format.YUY2 = 107;
			Format.Y210 = 108;
			Format.Y216 = 109;
			Format.NV11 = 110;
			Format.AI44 = 111;
			Format.IA44 = 112;
			Format.P8 = 113;
			Format.A8P8 = 114;
			Format.B4G4R4A4_UNORM = 115;
			Format.P208 = 130;
			Format.V208 = 131;
			Format.V408 = 132;
			Format.SAMPLER_FEEDBACK_MIN_MIP_OPAQUE;
			Format.SAMPLER_FEEDBACK_MIP_REGION_USED_OPAQUE;
			Format.FORCE_UINT = 0xffffffff;

			UL::HN_Log::Info("<RAL> Setting up DirectX11 Format done");

		}

	}

}