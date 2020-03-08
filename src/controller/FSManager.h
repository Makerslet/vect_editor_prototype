#ifndef FSMANAGER_H
#define FSMANAGER_H

#include "interface/IFSManager.h"
#include "interface/IConfiguration.h"

#include <memory>

/**
 * @brief Реализация воркера файловой системы.
 */

class FSManager : public IFSManager
{
public:
    /**
     * @brief Конструктор воркера ФС
     *
     * @param configuration - конфигурация приложения
     */
    FSManager(std::shared_ptr<IConfiguration> configuration);

    std::string readFile(const std::string& name);
    void writeFile(const std::string&name, const std::string&data);

private:
    std::shared_ptr<IConfiguration> _configuration;
};

#endif // FSMANAGER_H
