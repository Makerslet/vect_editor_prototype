#ifndef ICOMMANDHANDLER_H
#define ICOMMANDHANDLER_H

#include "ICommand.h"
#include <memory>

class ICommandHandler
{
public:
    virtual ~ICommandHandler() = default;
    virtual void run() = 0;
    virtual void stop() = 0;
    virtual void addCommand(std::shared_ptr<ICommand>) = 0;
};

#endif // ICOMMANDHANDLER_H
