#include "Controller.h"

Controller::Controller(std::shared_ptr<ICommandHandler> cmdHandler) :
    _handler(cmdHandler)
{}

std::shared_ptr<ICommandHandler> Controller::commandHandler()
{
    return _handler;
}
