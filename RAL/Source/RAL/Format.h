#pragma once

#include <RAL/.BuildInfo>
#include <RAL/Utils.h>



namespace RAL {

	UL_BEGIN_FLAGS(Format)

		UL_FLAG32(UNKNOWN);//0,
		UL_FLAG32(R32G32B32A32_TYPELESS);//1,
		UL_FLAG32(R32G32B32A32_FLOAT);//2,
		UL_FLAG32(R32G32B32A32_UINT);//3,
		UL_FLAG32(R32G32B32A32_SINT);//4,
		UL_FLAG32(R32G32B32_TYPELESS);//5,
		UL_FLAG32(R32G32B32_FLOAT);//6,
		UL_FLAG32(R32G32B32_UINT);//7,
		UL_FLAG32(R32G32B32_SINT);//8,
		UL_FLAG32(R16G16B16A16_TYPELESS);//9,
		UL_FLAG32(R16G16B16A16_FLOAT);//10,
		UL_FLAG32(R16G16B16A16_UNORM);//11,
		UL_FLAG32(R16G16B16A16_UINT);//12,
		UL_FLAG32(R16G16B16A16_SNORM);//13,
		UL_FLAG32(R16G16B16A16_SINT);//14,
		UL_FLAG32(R32G32_TYPELESS);//15,
		UL_FLAG32(R32G32_FLOAT);//16,
		UL_FLAG32(R32G32_UINT);//17,
		UL_FLAG32(R32G32_SINT);//18,
		UL_FLAG32(R32G8X24_TYPELESS);//19,
		UL_FLAG32(D32_FLOAT_S8X24_UINT);//20,
		UL_FLAG32(R32_FLOAT_X8X24_TYPELESS);//21,
		UL_FLAG32(X32_TYPELESS_G8X24_UINT);//22,
		UL_FLAG32(R10G10B10A2_TYPELESS);//23,
		UL_FLAG32(R10G10B10A2_UNORM);//24,
		UL_FLAG32(R10G10B10A2_UINT);//25,
		UL_FLAG32(R11G11B10_FLOAT);//26,
		UL_FLAG32(R8G8B8A8_TYPELESS);//27,
		UL_FLAG32(R8G8B8A8_UNORM);//28,
		UL_FLAG32(R8G8B8A8_UNORM_SRGB);//29,
		UL_FLAG32(R8G8B8A8_UINT);//30,
		UL_FLAG32(R8G8B8A8_SNORM);//31,
		UL_FLAG32(R8G8B8A8_SINT);//32,
		UL_FLAG32(R16G16_TYPELESS);//33,
		UL_FLAG32(R16G16_FLOAT);//34,
		UL_FLAG32(R16G16_UNORM);//35,
		UL_FLAG32(R16G16_UINT);//36,
		UL_FLAG32(R16G16_SNORM);//37,
		UL_FLAG32(R16G16_SINT);//38,
		UL_FLAG32(R32_TYPELESS);//39,
		UL_FLAG32(D32_FLOAT);//40,
		UL_FLAG32(R32_FLOAT);//41,
		UL_FLAG32(R32_UINT);//42,
		UL_FLAG32(R32_SINT);//43,
		UL_FLAG32(R24G8_TYPELESS);//44,
		UL_FLAG32(D24_UNORM_S8_UINT);//45,
		UL_FLAG32(R24_UNORM_X8_TYPELESS);//46,
		UL_FLAG32(X24_TYPELESS_G8_UINT);//47,
		UL_FLAG32(R8G8_TYPELESS);//48,
		UL_FLAG32(R8G8_UNORM);//49,
		UL_FLAG32(R8G8_UINT);//50,
		UL_FLAG32(R8G8_SNORM);//51,
		UL_FLAG32(R8G8_SINT);//52,
		UL_FLAG32(R16_TYPELESS);//53,
		UL_FLAG32(R16_FLOAT);//54,
		UL_FLAG32(D16_UNORM);//55,
		UL_FLAG32(R16_UNORM);//56,
		UL_FLAG32(R16_UINT);//57,
		UL_FLAG32(R16_SNORM);//58,
		UL_FLAG32(R16_SINT);//59,
		UL_FLAG32(R8_TYPELESS);//60,
		UL_FLAG32(R8_UNORM);//61,
		UL_FLAG32(R8_UINT);//62,
		UL_FLAG32(R8_SNORM);//63,
		UL_FLAG32(R8_SINT);//64,
		UL_FLAG32(A8_UNORM);//65,
		UL_FLAG32(R1_UNORM);//66,
		UL_FLAG32(R9G9B9E5_SHAREDEXP);//67,
		UL_FLAG32(R8G8_B8G8_UNORM);//68,
		UL_FLAG32(G8R8_G8B8_UNORM);//69,
		UL_FLAG32(BC1_TYPELESS);//70,
		UL_FLAG32(BC1_UNORM);//71,
		UL_FLAG32(BC1_UNORM_SRGB);//72,
		UL_FLAG32(BC2_TYPELESS);//73,
		UL_FLAG32(BC2_UNORM);//74,
		UL_FLAG32(BC2_UNORM_SRGB);//75,
		UL_FLAG32(BC3_TYPELESS);//76,
		UL_FLAG32(BC3_UNORM);//77,
		UL_FLAG32(BC3_UNORM_SRGB);//78,
		UL_FLAG32(BC4_TYPELESS);//79,
		UL_FLAG32(BC4_UNORM);//80,
		UL_FLAG32(BC4_SNORM);//81,
		UL_FLAG32(BC5_TYPELESS);//82,
		UL_FLAG32(BC5_UNORM);//83,
		UL_FLAG32(BC5_SNORM);//84,
		UL_FLAG32(B5G6R5_UNORM);//85,
		UL_FLAG32(B5G5R5A1_UNORM);//86,
		UL_FLAG32(B8G8R8A8_UNORM);//87,
		UL_FLAG32(B8G8R8X8_UNORM);//88,
		UL_FLAG32(R10G10B10_XR_BIAS_A2_UNORM);//89,
		UL_FLAG32(B8G8R8A8_TYPELESS);//90,
		UL_FLAG32(B8G8R8A8_UNORM_SRGB);//91,
		UL_FLAG32(B8G8R8X8_TYPELESS);//92,
		UL_FLAG32(B8G8R8X8_UNORM_SRGB);//93,
		UL_FLAG32(BC6H_TYPELESS);//94,
		UL_FLAG32(BC6H_UF16);//95,
		UL_FLAG32(BC6H_SF16);//96,
		UL_FLAG32(BC7_TYPELESS);//97,
		UL_FLAG32(BC7_UNORM);//98,
		UL_FLAG32(BC7_UNORM_SRGB);//99,
		UL_FLAG32(AYUV);//100,
		UL_FLAG32(Y410);//101,
		UL_FLAG32(Y416);//102,
		UL_FLAG32(NV12);//103,
		UL_FLAG32(P010);//104,
		UL_FLAG32(P016);//105,
		UL_FLAG32(_420_OPAQUE);//106,
		UL_FLAG32(YUY2);//107,
		UL_FLAG32(Y210);//108,
		UL_FLAG32(Y216);//109,
		UL_FLAG32(NV11);//110,
		UL_FLAG32(AI44);//111,
		UL_FLAG32(IA44);//112,
		UL_FLAG32(P8);//113,
		UL_FLAG32(A8P8);//114,
		UL_FLAG32(B4G4R4A4_UNORM);//115,
		UL_FLAG32(P208);//130,
		UL_FLAG32(V208);//131,
		UL_FLAG32(V408);//132,
		UL_FLAG32(SAMPLER_FEEDBACK_MIN_MIP_OPAQUE);
		UL_FLAG32(SAMPLER_FEEDBACK_MIP_REGION_USED_OPAQUE);
		UL_FLAG32(FORCE_UINT);//0xffffffff

	UL_END_FLAGS(Format)

}