#include "FSManager.h"

#include <iostream>

FSManager::FSManager(){}

std::string FSManager::readFile(const std::string& path)
{
    std::cout << "read file from " << path;
    return std::string();
}

void FSManager::writeFile(const std::string& path, const std::string&)
{
    std::cout << "write file to " << path;
}
