#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "interfaces/IController.h"
#include "interfaces/ICommandHandler.h"

class Controller : public IController
{
public:
    Controller(std::shared_ptr<ICommandHandler>);
    std::shared_ptr<ICommandHandler> commandHandler() override;

private:
    std::shared_ptr<ICommandHandler> _handler;
};

#endif // CONTROLLER_H
