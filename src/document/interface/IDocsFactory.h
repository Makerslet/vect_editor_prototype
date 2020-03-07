#ifndef IDOCSFACTORY_H
#define IDOCSFACTORY_H

#include "interface/IDocument.h"

class IDocsFactory
{
public:
    virtual ~IDocsFactory() = default;
    virtual std::unique_ptr<IDocument> createEmptyDocument() = 0;
    virtual std::unique_ptr<IDocument> createFilledDocument(const std::string&) = 0;
};

#endif // IDOCSFACTORY_H
