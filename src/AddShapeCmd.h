#ifndef ADDSHAPECMD_H
#define ADDSHAPECMD_H

#include "interfaces/ICommand.h"
#include "shapes/base/IShape.h"
#include "documents/base/IDocument.h"

#include <memory>

class AddShapeCmd : public ICommand
{
public:
    AddShapeCmd(std::shared_ptr<IShape>, std::shared_ptr<IDocument>);

    void execute() override;

private:
    std::shared_ptr<IShape> _shape;
    std::shared_ptr<IDocument> _doc;
};

#endif // ADDSHAPECMD_H
