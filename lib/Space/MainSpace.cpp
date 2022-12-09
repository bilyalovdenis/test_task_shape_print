#include "MainSpace.h"
#include <fstream>
using namespace ts;


MainSpace::MainSpace(sf::RenderWindow *window):_window(window){
    //create_toolbar();
    creat_workspace();
    toolbar = std::make_shared<Toolbar>(    curr_workspace);
}
MainSpace::~MainSpace(){
    
}
void MainSpace::creat_workspace(){
    workspaces.push_back(std::make_shared<WorkSpace>());
    curr_workspace = *workspaces.rbegin();
}
void MainSpace::delete_workspace(int number){
    workspaces.erase(workspaces.begin()+(--number));//не будет ли утечки
    curr_workspace = *workspaces.rbegin();
}
void MainSpace::select_workspace(int number){
     curr_workspace=*(workspaces.begin()+(--number));
}
void MainSpace::click_handler(sf::Vector2i &position){
  
    if (position.x <=192 && position.y <= 64){
        toolbar->mause_click(position);
    }
}
void MainSpace::draw(){
    curr_workspace->draw();
    _window->pushGLStates();
    toolbar->draw(_window);
    _window->popGLStates();
  
    _window->display();
}
// void Mainspace::creat_toolbar(){
    
// }