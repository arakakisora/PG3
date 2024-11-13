#ifndef CIRCLE_H
#define CIRCLE_H

#include "IShape.h"

class Circle : public IShape {
private:
    float radius;
    float area;

public:
    Circle(float r);
    void Size() override;
    void Draw() override;
};

#endif // CIRCLE_H
