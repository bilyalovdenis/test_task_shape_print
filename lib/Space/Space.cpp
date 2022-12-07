#include "Space.h"

using namespace ts;
Space::~Space(){}
void Space::mause_click(sf::Vector2i &position){
    click_handler(position);
}
void Space::click_handler(sf::Vector2i &position){}