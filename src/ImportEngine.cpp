#include "ImportEngine.h"
#include "documents/Document.h"

ImportEngine::ImportEngine(std::shared_ptr<IConfiguration> configuration) :
    _configuration(configuration)
{}

std::shared_ptr<IDocument> ImportEngine::importDocument(const std::string&)
{
    // обращаемся к _configuration чтобы получить полный путь
    return std::make_shared<Document>();
}
