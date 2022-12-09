
#include "SFML/Graphics.hpp"
#include "SFML/OpenGL.hpp"
#include <iostream>
#include <GL/freeglut.h>
#include "../lib/MyLib.h"
#include <vector>
#include <fstream>
#include <memory>

int main(){
 
	sf::RenderWindow window (sf::VideoMode(800, 800), "Draw figure");
	ts::MainSpace mainSpace(&window);

  bool running = true;
   while (running)
  {

mainSpace.draw();

    sf::Event event;
    while (window.pollEvent(event))
    {
      bool lock_click = false;
      switch (event.type)
      {
      case sf::Event::Closed:
        running = false;
        break;
        case sf::Event::MouseButtonPressed:
        if(event.mouseButton.button==sf::Mouse::Left && !lock_click){

          sf::Vector2i v = sf::Mouse::getPosition(window);
          mainSpace.mause_click(v);
        }
        break;
      case sf::Event::MouseButtonReleased:
        if(event.mouseButton.button==sf::Mouse::Left){
          lock_click = false;
        }
        break;
      }
    }

    }
}
