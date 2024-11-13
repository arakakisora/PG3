#include "Circle.h"
#include "Rectangle.h"

int main() {
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);

    circle.Size();
    circle.Draw();

    rectangle.Size();
    rectangle.Draw();

    return 0;
}
