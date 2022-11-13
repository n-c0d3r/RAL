#include "InitRAL.h"

#include <RAL/RAL.h>
#include <RAL/API.h>



int main() {

	HN_RAL::InitRAL(RAL::InitFlag::DirectX11, "../../RAL");

	RAL::HN_API::Create();



	return 0;
}