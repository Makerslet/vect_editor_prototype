#ifndef REMOVESHAPECMD_H
#define REMOVESHAPECMD_H

#include "interface/ICommand.h"

#include "interface/IIdCreator.h"
#include "interface/IDocument.h"

#include <memory>

class RemoveShapeCmd : public ICommand
{
public:
    RemoveShapeCmd(std::shared_ptr<IDocument>, ShapeId);
    ~RemoveShapeCmd() override;
    void execute() override;

private:
    std::shared_ptr<IDocument> _doc;
    ShapeId _id;
};

#endif // REMOVESHAPECMD_H
