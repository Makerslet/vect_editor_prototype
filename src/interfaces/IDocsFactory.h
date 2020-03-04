#ifndef IDOCSFACTORY_H
#define IDOCSFACTORY_H

#include "../documents/base/IDocument.h"

class IDocsFactory
{
public:
    virtual ~IDocsFactory() = default;
    virtual std::unique_ptr<IDocument> createDocument() = 0;
};

#endif // IDOCSFACTORY_H
