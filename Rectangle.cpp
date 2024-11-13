#include <cstdio>
#include "Rectangle.h"

Rectangle::Rectangle(float w, float h) : width(w), height(h), area(0) {}

void Rectangle::Size() {
    area = width * height;
}

void Rectangle::Draw() {
    printf("Rectangle Area: %.2f\n", area);
}
