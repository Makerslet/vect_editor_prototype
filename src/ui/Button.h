#ifndef BUTTON_H
#define BUTTON_H

#include "interface/IButton.h"

#include "interface/IController.h"

#include <functional>

/**
 * @brief Реализация кнопки
 */

class Button : public IButton
{
public:
    /**
     * @brief Конструктор кнопки
     *
     * @param callback - функтор, выполняющийся при нажатии
     */
    Button(const std::function<void()>& callback);
    void press() override;

private:
    std::function<void()> _callback;
};

#endif // BUTTON_H
