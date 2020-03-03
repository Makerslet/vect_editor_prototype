#ifndef IDOCUMENT_H
#define IDOCUMENT_H

#include "../../shapes/base/IShape.h"

#include <cstddef>
#include <memory>

struct IDocument {
    virtual ~IDocument() = default;
    virtual void show() const = 0;

    virtual void addShape(std::unique_ptr<IShape>&&) = 0;
    virtual void removeShape(std::size_t) = 0;
};

#endif // IDOCUMENT_H
