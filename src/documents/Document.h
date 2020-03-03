#ifndef DOCUMENT_H
#define DOCUMENT_H

#include "base/IDocument.h"
#include <unordered_map>

class Document : public IDocument
{
public:
    Document();
    void show() const override;

    void addShape(std::unique_ptr<IShape>&&) override;
    void removeShape(std::size_t) override;

private:
    std::unordered_map<std::size_t, std::unique_ptr<IShape>> _shapes;
};

#endif // DOCUMENT_H
