#ifndef DOCUMENT_H
#define DOCUMENT_H

#include "interface/IDocument.h"

#include <unordered_map>

/**
 * @brief Реализация документа
 */

class Document : public IDocument
{
public:
    Document();
    void show() const override;

    void addShape(std::shared_ptr<IShape> shape) override;
    void removeShape(ShapeId shapeId) override;

private:
    std::unordered_map<ShapeId, std::shared_ptr<IShape>> _shapes;
};

#endif // DOCUMENT_H
