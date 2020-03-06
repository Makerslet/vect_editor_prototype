#ifndef IDOCUMENT_H
#define IDOCUMENT_H

#include "interface/IShape.h"
#include "interface/IIdCreator.h"

#include <cstddef>
#include <memory>

struct IDocument {
    virtual ~IDocument() = default;
    virtual void show() const = 0;

    virtual void addShape(std::shared_ptr<IShape>) = 0;
    virtual void removeShape(ShapeId) = 0;
};

#endif // IDOCUMENT_H
