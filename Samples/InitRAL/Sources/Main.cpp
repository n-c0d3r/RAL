#include <RAL/RAL.h>
#include <RAL/.BuildInfo>

#include <RAL/Format.h>
#include <RAL/Usage.h>



int main() {

	RAL::I_API::Create("DirectX11");

	std::cout << RAL::Usage.DYNAMIC << std::endl;

	return 0;
}