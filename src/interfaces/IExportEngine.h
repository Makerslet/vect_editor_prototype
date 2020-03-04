#ifndef IEXPORTENGINE_H
#define IEXPORTENGINE_H

#include "../documents/base/IDocument.h"

#include <string>
#include <memory>

class IExportEngine
{
public:
    virtual ~IExportEngine() = default;
    virtual std::string exportDocument(std::shared_ptr<IDocument> document) = 0;
};

#endif // IEXPORTENGINE_H
