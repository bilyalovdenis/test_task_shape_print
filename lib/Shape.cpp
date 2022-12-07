#include "Shape.h"
    using namespace ts;
    
    Coordinates::Coordinates(){}
    Coordinates::Coordinates(float x, float y) : _x(x), _y(y){}
    float Coordinates::get_x(){return _x;}
    float Coordinates::get_y(){return _y;}
    void  Coordinates::set_x(float x){_x=x;}
    void  Coordinates::set_y(float y){_y=y;}
    
    
   
