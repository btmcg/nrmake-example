#include "shared_library/shared_library.hpp"
#include "static_library/static_library.hpp"
#include <iostream>


int
main()
{
    static_library static_lib;
    std::cout << "statically linked: " << static_lib.id() << std::endl;

    shared_library shared_lib;
    std::cout << "dynamically linked: " << shared_lib.id() << std::endl;

    return 0;
}
