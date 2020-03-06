#ifndef FSMANAGER_H
#define FSMANAGER_H

#include "interface/IFSManager.h"

class FSManager : public IFSManager
{
public:
    FSManager();

    std::string readFile(const std::string&);
    void writeFile(const std::string&, const std::string&);
};

#endif // FSMANAGER_H
