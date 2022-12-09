#pragma once
#include "SFML/Graphics.hpp"
#include "SFML/OpenGL.hpp"
#include <iostream>
#include <GL/freeglut.h>
#include <math.h>
#include <memory>


void HelloFunc();
namespace ts{

class Coordinates{
public:    
    Coordinates();
    Coordinates(float x, float y);
    float get_x();
    float get_y();
    void  set_x(float x);
    void  set_y(float y);
private:
    float _x;
    float _y;    
};

class Shape{
public:
virtual void draw() = 0;
};

}
