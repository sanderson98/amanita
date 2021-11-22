#include <iostream>
#include <AMANITAConfig.h>

int main(int argc, char* argv[])
{
	std::cout << argv[0] << "---VERSION--- " << AMANITA_VERSION_MAJOR << "." << AMANITA_VERSION_MINOR << '\n';
	return 0; 
} 
