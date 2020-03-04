#ifndef IBUTTON_H
#define IBUTTON_H

class IButton
{
public:
    virtual ~IButton() = default;
    virtual void press() = 0;
};

#endif // IBUTTON_H
