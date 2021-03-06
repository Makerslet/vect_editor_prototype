#ifndef CONFIGURATOR_H
#define CONFIGURATOR_H

#include "interface/IConfiguration.h"

/**
 * @brief Реализация конфигурации
 */


class Configurator : public IConfiguration
{
public:
    Configurator();

    std::string defaultPath() const override;
};

#endif // CONFIGURATOR_H
