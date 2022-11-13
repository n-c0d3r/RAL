#include <RAL/RAL.h>
#include <RAL/.BuildInfo>

#include "RAL/Format.h"



int main() {

	RAL::I_API::Create("DirectX11");

	std::cout << RAL::Format.R16G16_Float << std::endl;

	return 0;
}