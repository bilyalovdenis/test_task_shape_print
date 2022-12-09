#include "WorkSpace.h"

using namespace ts;

WorkSpace::WorkSpace(){
   shapes.reserve(1);
}
WorkSpace::~WorkSpace(){
  
}
void WorkSpace::add_shape(std::shared_ptr<Shape> s){
   shapes.push_back(s);
  
}
void WorkSpace::draw(){

    for (auto s : shapes){
        
        s->draw();
    }
}
void WorkSpace::click_handler(sf::Vector2i &position){}

