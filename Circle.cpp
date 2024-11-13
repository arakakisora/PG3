#include <cstdio>
#include "Circle.h"

Circle::Circle(float r) : radius(r), area(0) {}

void Circle::Size() {
    area = 3.14159f * radius * radius;
}

void Circle::Draw() {
    printf("Circle Area: %.2f\n", area);
}
