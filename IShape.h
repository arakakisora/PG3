#ifndef ISHAPE_H
#define ISHAPE_H

class IShape {
public:
    virtual void Size() = 0;
    virtual void Draw() = 0;
    virtual ~IShape() = default; // 仮想デストラクタ
};

#endif // ISHAPE_H
