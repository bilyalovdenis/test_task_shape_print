#pragma once
#include "Shape.h"



namespace ts{
    class Triangle : public Shape{
    public:
    Triangle(Coordinates c1, Coordinates c2, Coordinates c3);
    void draw();
    private:
    Coordinates _c1, _c2, _c3;
    };
}