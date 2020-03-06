#include "RemoveShapeCmd.h"

RemoveShapeCmd::RemoveShapeCmd(std::shared_ptr<IDocument> doc, ShapeId id) :
    _doc(doc), _id(id)
{}

RemoveShapeCmd::~RemoveShapeCmd()
{}

void RemoveShapeCmd::execute()
{
    _doc->removeShape(_id);
}
