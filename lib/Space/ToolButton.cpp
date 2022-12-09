#include "Toolbar.h"

using namespace ts;

ToolButton::ToolButton(std::string name, std::shared_ptr<WorkSpace> curr_workspace):
_curr_workspace(std::move(curr_workspace))
{
    _name = name;;
    texture = new sf::Texture; 
    sprite  = new sf::Sprite;
}
ToolButton::~ToolButton(){
 
}
void ToolButton::set_texture(std::basic_string<char> &path){
    texture->loadFromFile(path);
    sprite->setTexture(*texture);
}
void ToolButton::set_position(int x, int y){
    sprite->setPosition(x,y);
}
void ToolButton::click_handler(){
    if(_name=="Triangle"){
        static Coordinates coor{0.0,0.0}; 
        static Coordinates coor2{0.5,0.0}; 
        static Coordinates coor3{0.0,0.5}; 
        std::shared_ptr<Triangle> triangle ( new Triangle {coor,coor2,coor3});
        _curr_workspace->add_shape(triangle);
         coor.set_x(coor.get_x()-0.05);
         coor.set_y(coor.get_y()-0.05);
         coor2.set_x(coor2.get_x()+0.05);
         coor3.set_y(coor3.get_y()+0.05);

    }   
    else if(_name=="Circle"){
         static Coordinates coor{0.0,0.0}; 
         std::shared_ptr<Circle> circle ( new Circle {coor, 0.5f});
        _curr_workspace->add_shape(circle);
        coor.set_x(coor.get_x()+0.05);
    }
    else if(_name=="Quadrilateral"){
         std::shared_ptr<Quadrilateral> quadarit (new Quadrilateral {Coordinates{0,0.1},Coordinates{0,0},
                                            Coordinates{0.1,0},Coordinates{0.1, 0.1} });
        _curr_workspace->add_shape(quadarit);                                         

    }
    else{}
 }
 sf::Sprite* ToolButton::get_sprite(){
    return sprite;
 }