#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "IShape.h"

class Rectangle : public IShape {
private:
    float width;
    float height;
    float area;

public:
    Rectangle(float w, float h);
    void Size() override;
    void Draw() override;
};

#endif // RECTANGLE_H
