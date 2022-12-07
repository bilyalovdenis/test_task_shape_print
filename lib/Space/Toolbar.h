#pragma once
#include"Space.h"
#include "Button.h"
#include "Shapes.h"
#include "WorkSpace.h"
#include <fstream>




namespace ts{
    class ToolButton;
    class Toolbar : public Space{
    public:    
        Toolbar(WorkSpace* curr_workspace);
        ~Toolbar();
        void close_space();
        void draw( sf::RenderWindow *_window);

    private:
        void intialization_buttons();
        void click_handler(sf::Vector2i &position);
        std::vector <ToolButton*> buttons; 
         WorkSpace* _curr_workspace;
    };
     class ToolButton : public Button{
        friend Toolbar;
        ToolButton(std::string name, WorkSpace* curr_workspace);
        ~ToolButton();
        void close_space();
        void set_texture(std::basic_string<char> &path);
        void set_position(int x, int y);
        void click_handler();
        sf::Sprite* get_sprite();
        std::string _name;
        WorkSpace* _curr_workspace;
    };
}