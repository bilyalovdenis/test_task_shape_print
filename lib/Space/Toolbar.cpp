#include "Toolbar.h"

using namespace ts;

Toolbar::Toolbar(std::shared_ptr<WorkSpace> curr_workspace):_curr_workspace(std::move(curr_workspace)){
    intialization_buttons();
}
Toolbar::~Toolbar(){
    
}

void Toolbar::click_handler(sf::Vector2i &position){
    std::string s;
    for (auto it : buttons){
        if(it->sprite->getGlobalBounds().contains(position.x, position.y)) it->click_handler();
    }
    
}
void Toolbar::intialization_buttons(){
    std::shared_ptr<ToolButton> triangle (new ToolButton("Triangle",_curr_workspace)); 
    triangle->set_position(0,0);
    std::basic_string<char> path{"../../images/triangle.png"}; 
    triangle->set_texture(path);
    std::shared_ptr<ToolButton> quadrilateral (new ToolButton("Quadrilateral",_curr_workspace));
    quadrilateral->set_position(64,0); 
    std::basic_string<char> path2{"../../images/quadrilateral.png"}; 
    quadrilateral->set_texture(path2);
    std::shared_ptr<ToolButton> circle (new ToolButton("Circle",_curr_workspace)); 
    circle->set_position(128,0);
    std::basic_string<char> path3{"../../images/circle.png"}; 
    circle->set_texture(path3);
    buttons.push_back(triangle);
    buttons.push_back(quadrilateral);
    buttons.push_back(circle);
}
void Toolbar::draw( sf::RenderWindow *_window){
    for (auto it : buttons){
        _window->draw(*(it->get_sprite()));
    }
}