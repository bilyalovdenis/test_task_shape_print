#pragma once
#include "Shape.h"



namespace ts{
class Circle : public Shape {
public:
    Circle(Coordinates centre, float radius);
    void draw();
    void resize(float radius);
private:
    Coordinates _centre;
    float       _radius;

};
}
