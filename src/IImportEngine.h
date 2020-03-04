#ifndef IIMPORTENGINE_H
#define IIMPORTENGINE_H

#include "documents/base/IDocument.h"

class IImportEngine
{
public:
    virtual ~IImportEngine() = default;
    virtual std::shared_ptr<IDocument> importDocument(const std::string& path) = 0;
};


#endif // IIMPORTENGINE_H
