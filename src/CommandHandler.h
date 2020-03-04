#ifndef COMMANDHANDLER_H
#define COMMANDHANDLER_H

#include "interfaces/ICommandHandler.h"
#include "interfaces/ICommand.h"

#include <vector>

class CommandHandler : public ICommandHandler
{
public:
    CommandHandler();

    void run() override;
    void stop() override;
    void addCommand(std::shared_ptr<ICommand>) override;

private:
    std::vector<std::shared_ptr<ICommand>> _commands;
};

#endif // COMMANDHANDLER_H
