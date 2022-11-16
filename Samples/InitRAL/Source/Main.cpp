#include <RAL/RAL.h>
#include <RAL/.BuildInfo>

#include <RAL/Format.h>
#include <RAL/Usage.h>



int main() {

	RAL::I_API::Create("DirectX11");

	try
	{

		throw RAL::S_ErrorException("Error");

	}
	catch (const std::exception& e)
	{

		RAL::HN_Log::Exception(e);

	}

	return 0;
}