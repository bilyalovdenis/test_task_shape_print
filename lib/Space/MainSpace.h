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
      //Для возможной реализации нескольких workspace
      void delete_workspace(int number); 
      void select_workspace(int number);
      void draw();
    private:
     void click_handler(sf::Vector2i &position);
     sf::RenderWindow *_window;
     int _height;
     int _width;
     std::shared_ptr<WorkSpace> curr_workspace;
     std::vector <std::shared_ptr<WorkSpace>> workspaces; //Для возможной реализации нескольких workspace
     std::shared_ptr<Toolbar> toolbar;
     std::pair<std::pair<int,int>, std::pair<int,int>> tool_area;
     std::pair<std::pair<int,int>, std::pair<int,int>> work_area;

    };

}