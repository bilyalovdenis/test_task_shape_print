#pragma once
#include "Space.h"
#include "WorkSpace.h"
#include "Toolbar.h"



namespace ts{
  
   
    class MainSpace : public Space{
      
    public:
     
      MainSpace(sf::RenderWindow *window);
      ~MainSpace();
      void creat_workspace();
      void add_shape(Shape *s);
      //Для возможной реализации нескольких workspace
      void delete_workspace(int number); 
      void select_workspace(int number);
      void close_space();
      void draw();
    private:
     void click_handler(sf::Vector2i &position);
     sf::RenderWindow *_window;
     int _height;
     int _width;
     WorkSpace* curr_workspace;
     std::vector <WorkSpace*> workspaces; //Для возможной реализации нескольких workspace
     Toolbar *toolbar;
     std::pair<std::pair<int,int>, std::pair<int,int>> tool_area;
     std::pair<std::pair<int,int>, std::pair<int,int>> work_area;

    };

}