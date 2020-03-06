#include "CommandHandler.h"

#include <iostream>

CommandHandler::CommandHandler()
{}

void CommandHandler::run()
{
    std::cout << "CommandHandler::run()" << std::endl;
    //do nothing
}

void CommandHandler::stop()
{
    std::cout << "CommandHandler::stop()" << std::endl;
    //do nothing
}

void CommandHandler::addCommand(std::shared_ptr<ICommand> command)
{
    _commands.push_back(command);
}
