#pragma once
#include "Animal.h"
#include <iostream>
class Horse :
    public Animal
{
public:
    void Speak() { std::cout << "Neighh Neighhhh!!!!\n\n"; }
};

