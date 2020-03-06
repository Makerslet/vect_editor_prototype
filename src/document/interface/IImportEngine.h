#ifndef IIMPORTENGINE_H
#define IIMPORTENGINE_H

#include "interface/IDocument.h"

class IImportEngine
{
public:
    virtual ~IImportEngine() = default;
    virtual std::shared_ptr<IDocument> importDocument(const std::string&) = 0;
};


#endif // IIMPORTENGINE_H
