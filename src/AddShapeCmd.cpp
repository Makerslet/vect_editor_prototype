#include "AddShapeCmd.h"

AddShapeCmd::AddShapeCmd(std::shared_ptr<IShape> shape, std::shared_ptr<IDocument> doc) :
    _shape(shape), _doc(doc)
{}

void AddShapeCmd::execute()
{
    _doc->addShape(_shape);
}

