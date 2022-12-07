
#include "SFML/Graphics.hpp"
#include "SFML/OpenGL.hpp"
#include <iostream>
#include <GL/freeglut.h>
#include "../lib/MyLib.h"
#include <vector>
#include <fstream>

//int SCREEN_HEIGHT = sf::VideoMode::getDesktopMode().height;
//int SCREEN_WIDTH = sf::VideoMode::getDesktopMode().width;
int SCREEN_HEIGHT = 800;
int SCREEN_WIDTH = 900;
void add_click_coordinat(sf::Vector2i &v){

  std::ofstream out;
  out.open ("/home/bloodyclaw/projects/github/test_task_shape_printer/build/log.txt", std::ios::app);
  if (out.is_open()){
    out << v.x<< " " << v.y <<std::endl;
  }

}
// int main()
// {
   
//   sf::RenderWindow window(sf::VideoMode(SCREEN_WIDTH, SCREEN_HEIGHT), "SFML WORK!");

//   //std::cout << "fsfsf" ;
//   glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
//   glMatrixMode(GL_PROJECTION);
//   glLoadIdentity();
//   sf::RectangleShape my_button (sf::Vector2f(100, 100));
//   my_button.setFillColor(sf::Color(0,255,0));
//   bool running = true;
//   sf::Vector2i mousePos = sf::Mouse::getPosition(window);
//   ts::Shape *circle = new ts::Circle {ts::Coordinates{0,0}, 0.5f};
//   ts::Shape *circle2 = new ts::Circle {ts::Coordinates{0,0}, 0.7f};
//   ts::Shape *triangle = new ts::Triangle {ts::Coordinates{0,0},ts::Coordinates{0.5,0},ts::Coordinates{0,0.5}};
//   ts::Shape *triangle2 = new ts::Triangle {ts::Coordinates{-0.8,0},ts::Coordinates{-0.5,-0.1},ts::Coordinates{-0.4,-0.3}};
//   ts::Shape *qudarit = new ts::Quadrilateral {ts::Coordinates{0,0.1},ts::Coordinates{0,0},
//                                                 ts::Coordinates{0.1, 0}, ts::Coordinates{0.1, 0.1} };
  
//   ts::WorkSpace *ws = new ts::WorkSpace;

  
//   ws->add_shape(circle2);
//   ws->add_shape(triangle);
//   ws->add_shape(triangle2);
 
//   sf::Image im;
//   im.loadFromFile("images/test.png");
//   sf::Texture texture;
//   texture.loadFromImage(im);
//   sf::Sprite herosprite;
//   herosprite.setTexture(texture);
//   herosprite.setPosition(0,0);
//   while (running)
//   {
//     sf::Event event;
//     sf::Event toolbar_event;

//     while (window.pollEvent(event))
//     {
    
//       bool lock_click = false;

//       switch (event.type)
//       {
//       case sf::Event::Closed:
//         running = false;

//         break;
//       case sf::Event::MouseButtonPressed:
//       mousePos = sf::Mouse::getPosition(window);
//       add_click_coordinat(mousePos);
//         if(event.mouseButton.button==sf::Mouse::Left && !lock_click){
//            if(my_button.getGlobalBounds().contains(mousePos.x, mousePos.y)){
//               ws->add_shape(circle);
//            }
//            ws->add_shape(qudarit);
         
           
//         }  
//         break;
//       case sf::Event::MouseButtonReleased:
//         if(event.mouseButton.button==sf::Mouse::Left){
//           lock_click = false;
//         }  
//       }
    
//     }
    
//     // glMatrixMode(GL_MODELVIEW);
//     glViewport(200,0, SCREEN_WIDTH-400 ,SCREEN_HEIGHT-300);
//     // glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//    // glTranslatef(-0.1, -0.1, 0.0);
     
//     window.pushGLStates();
   
//     window.draw(my_button);
//     window.draw(herosprite);
//     // window.draw(sfml item to draw);

//     window.popGLStates();

//     window.display();
//   }
// }
int main(){
  sf::Vector2i v (666, 666);
	sf::RenderWindow window (sf::VideoMode(SCREEN_WIDTH, SCREEN_HEIGHT), "Draw figure");
	ts::MainSpace mainSpace(&window);
  
  bool running = true;
   while (running)
  {
    
  //  sf::Texture tx;
  //   if(!tx.loadFromFile ("../images/circle.png")){
  //     return 0;
  //   }
  //   sf::Sprite sp;
  //   sp.setTexture(tx);
  //   sp.setPosition(0,0);
  //   window.draw(sp);
  //   window.display();

mainSpace.draw();
//window.display();
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
           std::ofstream out;
  out.open ("/home/bloodyclaw/projects/github/test_task_shape_printer/build/log.txt", std::ios::app);
  if (out.is_open()){
    out << "main"<<std::endl;
  }
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
 
    //mainSpace.draw();
}
