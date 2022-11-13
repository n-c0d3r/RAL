#pragma once

#include <RAL/BuildInfo.h>
#include <RAL/EntryPoint.h>

#include <iostream>

#ifdef _WIN32
#include <Windows.h>
#endif



namespace RAL {

	enum class InitFlag {

		DirectX11,
		DirectX12

	};

}



namespace HN_RAL {
	
	void InitRAL(RAL::InitFlag flag, const std::string& RALBinaryDir) {

		std::string implementDir = RALBinaryDir + "/Implements/DirectX11/";

		switch (flag)
		{
		case RAL::InitFlag::DirectX11:

#if (RAL_CONFIG==Debug)
			implementDir += "Debug/";
#endif

			std::cout << implementDir << std::endl;

			SetDllDirectory(implementDir.c_str());

			return;

		case RAL::InitFlag::DirectX12:
			return;

		default:
			return;
		}

	}

}