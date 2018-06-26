#include <iostream>
#include <lib.h>

auto main(int argc, char* const argv[]) -> int {
    std::cout << "Hello, World!" << std::endl;
    std::cout << "Version " << version() << std::endl;
    return 0;
}

