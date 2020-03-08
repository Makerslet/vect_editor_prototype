#ifndef ICOMMAND_H
#define ICOMMAND_H

/**
 * @brief Интерфейс комманды.
 * Позволяет запустить команду на выполнение
 */

class ICommand
{
public:
    virtual ~ICommand() = default;

    /**
     * @brief Метод запуска команды на выполнение
     */
    virtual void execute() = 0;
};

#endif // ICOMMAND_H
