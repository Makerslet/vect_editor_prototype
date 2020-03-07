#ifndef ICONFIGURATION_H
#define ICONFIGURATION_H

#include <string>

class IConfiguration
{
public:
    virtual ~IConfiguration() = default;

    virtual std::string defaultPath() const = 0;
};

#endif // ICONFIGURATION_H
