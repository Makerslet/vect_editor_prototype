#ifndef CONFIGURATOR_H
#define CONFIGURATOR_H

#include "interfaces/IConfiguration.h"

class Configurator : public IConfiguration
{
public:
    Configurator();

    std::string importPath() const override;
    std::string exportPath() const override;
};

#endif // CONFIGURATOR_H
