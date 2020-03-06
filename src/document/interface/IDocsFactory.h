#ifndef IDOCSFACTORY_H
#define IDOCSFACTORY_H

#include "interface/IDocument.h"

class IDocsFactory
{
public:
    virtual ~IDocsFactory() = default;
    virtual std::unique_ptr<IDocument> createDocument() = 0;
};

#endif // IDOCSFACTORY_H
