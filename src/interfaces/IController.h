#ifndef ICONTROLLER_H
#define ICONTROLLER_H

#include "ICommandHandler.h"
#include <memory>

class IController
{
public:
    virtual ~IController() = default;
    virtual std::shared_ptr<ICommandHandler> commandHandler() = 0;
};

#endif // ICONTROLLER_H
