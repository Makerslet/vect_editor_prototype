#include "DocsFactory.h"
#include "Document.h"

DocsFactory::DocsFactory()
{}

std::unique_ptr<IDocument> DocsFactory::createEmptyDocument()
{
    return std::unique_ptr<Document>();
}

std::unique_ptr<IDocument> DocsFactory::createFilledDocument(const std::string&)
{
    return std::unique_ptr<Document>();
}
