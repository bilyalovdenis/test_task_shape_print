#pragma once
#include "Space.h"


namespace ts{
    class Button : public Space{
    public:
        Button();
        ~Button();
        virtual void close_space();
        virtual void set_texture(std::basic_string<char> &path);
        virtual void click_handler(sf::Vector2i &position);
    protected:
        
      //  virtual void click_handler();
        sf::Texture* texture;
        sf::Sprite* sprite;
    };
}