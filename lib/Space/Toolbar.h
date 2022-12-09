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
        Toolbar(std::shared_ptr<WorkSpace> curr_workspace);
        ~Toolbar();
        void draw( sf::RenderWindow *_window);

    private:
        void intialization_buttons();
        void click_handler(sf::Vector2i &position);
        std::vector <std::shared_ptr<ToolButton>> buttons; 
         std::shared_ptr<WorkSpace> _curr_workspace;
    };
     class ToolButton : public Button{
        friend Toolbar;
        public:
        ToolButton(std::string name, std::shared_ptr<WorkSpace>  curr_workspace);
        ~ToolButton();
        private:
        void set_texture(std::basic_string<char> &path);
        void set_position(int x, int y);
        void click_handler();
        sf::Sprite* get_sprite();
        std::string _name;
        std::shared_ptr<WorkSpace> _curr_workspace;
    };
}