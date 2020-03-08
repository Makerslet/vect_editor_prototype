#ifndef ICOMMANDHANDLER_H
#define ICOMMANDHANDLER_H

#include "interface/ICommand.h"

#include <memory>

/**
 * @brief Интерфейс обработчика комманд.
 * Позволяет запускать, останавливать обработку комманд
 * и добавлять комманды
 */

class ICommandHandler
{
public:
    virtual ~ICommandHandler() = default;

    /**
     * @brief Метод запуска обработки комманд
     */
    virtual void run() = 0;

    /**
     * @brief Метод остановки обработки комманд
     */
    virtual void stop() = 0;

    /**
     * @brief Метод добавления команды
     */
    virtual void addCommand(std::shared_ptr<ICommand>) = 0;
};

#endif // ICOMMANDHANDLER_H
