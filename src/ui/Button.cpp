#include "Button.h"

Button::Button(const std::function<void()>& callback) :
    _callback(callback)
{}

void Button::press()
{
    _callback();
}
