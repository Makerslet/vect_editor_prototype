#ifndef IGUICONTEXT_H
#define IGUICONTEXT_H

#include "interface/IDocument.h"
#include "interface/IIdCreator.h"

#include <string>

/**
 * @brief Интерфейс графической составляющей приложения
 */

class IGuiContext
{
public:
    virtual ~IGuiContext() = default;

    /**
     * @brief Метод установки текущего документа
     *
     * @param document - текущий документ
     */
    virtual void setCurrentDocument(std::shared_ptr<IDocument> document) = 0;

    /**
     * @brief Метод получения текущего документа
     *
     * @return указатель на текущий документ
     */
    virtual std::shared_ptr<IDocument> currentDocument() = 0;

    /**
     * @brief Метод индикации - выбрана ли какая-либо фигура
     *
     * @return выбрана ли фигура
     */
    virtual bool isShapeChoosen() = 0;

    /**
     * @brief Метод получения идентификатора выбранной фигуры
     *
     * @return идентификатор выбранной фигуры
     */
    virtual ShapeId choosenShapeId() = 0;

    /**
     * @brief Метод получения имени для экспортируемого документа
     *
     * @return имя для экспорта
     */
    virtual std::string exportedFileName() = 0;

    /**
     * @brief Метод получения имени импортируемого файла
     *
     * @return имя для импорта
     */
    virtual std::string importedFileName() = 0;
};

#endif // IGUICONTEXT_H
