#ifndef BUTTON_H
#define BUTTON_H

#include "interface/IButton.h"

#include "interface/IController.h"

#include <functional>

class Button : public IButton
{
public:
    Button(const std::function<void()>&);
    void press() override;

private:
    std::function<void()> _callback;
};

#endif // BUTTON_H
