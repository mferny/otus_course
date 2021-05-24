#include "lib.h"

#include <iostream>

int main (int, char **)
{
    std::cout << "Build: " << version() << "\n"
	<< "Hello, World!" << std::endl;

    return 0;
}
