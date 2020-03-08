#ifndef IFSMANAGER_H
#define IFSMANAGER_H

#include <string>

/**
 * @brief Воркера файловой системы.
 * Позволяет читать и писать данные из/ф файловой системы
 */


class IFSManager
{
public:
    virtual ~IFSManager() = default;

    /**
     * @brief Метод чтения файла
     *
     * @param name имя файла
     * @return прочитанные данные
     */
    virtual std::string readFile(const std::string& name) = 0;

    /**
     * @brief Метод записи файла в ФС
     *
     * @param name имя файла
     * @param data данные
     */
    virtual void writeFile(const std::string& name, const std::string& data) = 0;
};

#endif // IFSMANAGER_H
