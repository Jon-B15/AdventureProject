#include <iostream>
#include "Dog.h"

int main()
{
    Dog archie("Archie", "Golden Doodle");
    std::cout << archie.getName() << " the " << archie.getBreed() << "\n";
    return 0;
}

