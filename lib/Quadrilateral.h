#pragma once
#include "Shape.h"


namespace ts{

    class Quadrilateral : public Shape {
    public:    
        Quadrilateral(Coordinates c1, Coordinates c2, Coordinates c3, Coordinates c4);
        void draw();
    private:
    Coordinates _c1, _c2, _c3, _c4;    
    };

}