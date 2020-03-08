#ifndef ICONFIGURATION_H
#define ICONFIGURATION_H

#include <string>


/**
 * @brief Интерфейс конфигурации приложения.
 */

class IConfiguration
{
public:
    virtual ~IConfiguration() = default;

    /**
     * @brief Метод получения пути к каталогу, хранящему данные
     * приложения
     *
     * @return путь к каталогу с данными приложения
     */
    virtual std::string defaultPath() const = 0;
};

#endif // ICONFIGURATION_H
