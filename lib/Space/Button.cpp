#include "Button.h"
using namespace ts;

Button::Button(){}
Button::~Button(){
    close_space();
}
void Button::set_texture(std::basic_string<char> &path){
    texture->loadFromFile(path);
}
void Button::close_space(){

}
void Button::click_handler(sf::Vector2i &position){}