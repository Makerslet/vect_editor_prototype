#include "Document.h"

#include <iostream>

Document::Document()
{}

void Document::show() const
{
    std::cout << "show document specific" << std::endl;
    for(const auto& shape : _shapes)
        shape.second->show();
}

void Document::addShape(std::shared_ptr<IShape> shape)
{
    std::size_t id = shape->id();
    _shapes.try_emplace(id, shape);
}

void Document::removeShape(ShapeId id)
{
    const auto& iter = _shapes.find(id);
    if(iter != _shapes.end())
        _shapes.erase(iter);
}
