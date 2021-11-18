#pragma once
#include <iostream>
#include "Animal.h"
class Dog :
    public Animal
{
public:
    void Speak() { std::cout << "Ruff Ruff!!!!\n\n"; }
};

