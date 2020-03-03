#ifndef ISHAPE_H
#define ISHAPE_H

#include <cstddef>
#include <memory>

struct IShape {
    virtual ~IShape() = default;
    virtual std::size_t id() const = 0;
    virtual void show() const = 0;
    virtual std::unique_ptr<IShape> clone() const = 0;
};

#endif // ISHAPE_H
