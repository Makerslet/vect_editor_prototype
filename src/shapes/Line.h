#ifndef LINE_H
#define LINE_H

#include "base/IShape.h"
#include "../interfaces/IIdCreator.h"

class Line : public IShape
{
public:
    Line(std::shared_ptr<IIdCreator>);

    std::size_t id() const override;
    void show() const override;
    std::unique_ptr<IShape> clone() const override;

private:
    std::shared_ptr<IIdCreator> _idCreator;

    std::size_t _id;
};

#endif // LINE_H
