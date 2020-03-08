#ifndef IBUTTON_H
#define IBUTTON_H

/**
 * @brief Интерфейс кнопки интерфейса
 */

class IButton
{
public:
    virtual ~IButton() = default;

    /**
     * @brief Метод обработки нажатия на клавишу
     */
    virtual void press() = 0;
};

#endif // IBUTTON_H
