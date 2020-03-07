#ifndef FSMANAGER_H
#define FSMANAGER_H

#include "interface/IFSManager.h"
#include "interface/IConfiguration.h"

#include <memory>

class FSManager : public IFSManager
{
public:
    FSManager(std::shared_ptr<IConfiguration>);

    std::string readFile(const std::string&name);
    void writeFile(const std::string&name, const std::string&data);
private:
    std::shared_ptr<IConfiguration> _configuration;
};

#endif // FSMANAGER_H
