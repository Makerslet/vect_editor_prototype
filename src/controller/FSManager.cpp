#include "FSManager.h"

#include <iostream>

FSManager::FSManager(std::shared_ptr<IConfiguration> config) :
    _configuration(config)
{}

std::string FSManager::readFile(const std::string& name)
{
    std::cout << "read file " << name
              << " from " << _configuration->defaultPath();
    return std::string();
}

void FSManager::writeFile(const std::string& name, const std::string&)
{
    std::cout << "write file " << name <<
                 " to " << _configuration->defaultPath();
}
