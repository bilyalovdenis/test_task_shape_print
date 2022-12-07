#pragma once

#include <utility>
#include "SFML/Graphics.hpp"
#include "SFML/OpenGL.hpp"
#include "SFML/Window.hpp"
#include <iostream>
#include <GL/freeglut.h>


namespace ts{
    class Space{
    public:
        virtual ~Space()=0;
        virtual void close_space()=0;
        void mause_click(sf::Vector2i &position);
       // virtual void draw()=0;
        //virtual set_position_on_screen();

    private:
        virtual void click_handler(sf::Vector2i &position);

    };
}