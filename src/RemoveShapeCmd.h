#ifndef REMOVESHAPECMD_H
#define REMOVESHAPECMD_H

#include "interfaces/ICommand.h"
#include "interfaces/IIdCreator.h"
#include "documents/base/IDocument.h"

#include <memory>

class RemoveShapeCmd : public ICommand
{
public:
    RemoveShapeCmd(std::shared_ptr<IDocument>, ShapeId);
    void execute() override;

private:
    std::shared_ptr<IDocument> _doc;
    ShapeId _id;
};

#endif // REMOVESHAPECMD_H
