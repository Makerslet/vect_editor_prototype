#ifndef IFSMANAGER_H
#define IFSMANAGER_H

#include <string>

class IFSManager
{
public:
    virtual ~IFSManager() = default;

    virtual std::string readFile(const std::string&) = 0;
    virtual void writeFile(const std::string&, const std::string&) = 0;
};

#endif // IFSMANAGER_H
