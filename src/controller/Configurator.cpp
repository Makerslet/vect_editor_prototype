#include "Configurator.h"

#include <iostream>

Configurator::Configurator()
{}

std::string Configurator::importPath() const
{
    std::cout<< "Configurator::importPath()" << std::endl;
    return std::string();
}

std::string Configurator::exportPath() const
{
    std::cout << "Configurator::exportPath()" << std::endl;
    return std::string();
}
