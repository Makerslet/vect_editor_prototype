#ifndef ICONFIGURATION_H
#define ICONFIGURATION_H

#include <string>

class IConfiguration
{
public:
    virtual ~IConfiguration() = default;

    virtual std::string importPath() const = 0;
    virtual std::string exportPath() const = 0;
};

#endif // ICONFIGURATION_H
