#include "Configurator.h"

#include <iostream>

Configurator::Configurator()
{}

std::string Configurator::defaultPath() const
{
    std::cout<< "Configurator::defaultPath()" << std::endl;
    return std::string();
}
