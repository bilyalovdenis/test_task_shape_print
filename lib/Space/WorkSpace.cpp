#include "WorkSpace.h"

using namespace ts;

WorkSpace::WorkSpace(){
   shapes.reserve(1);
}
WorkSpace::~WorkSpace(){
    close_space();
}
void WorkSpace::add_shape(Shape *s){
   shapes.push_back(s);
  
}
void WorkSpace::draw(){

    for (auto s : shapes){
        
        s->draw();
    }
}
void WorkSpace::close_space(){
    for (auto it = shapes.begin(); it!=shapes.end(); it++){
        delete *it;
    }
}
void WorkSpace::click_handler(sf::Vector2i &position){}

