#pragma once
#include "../Shape.h"
#include <vector>
#include "Space.h"



namespace ts{

    class WorkSpace : public Space{
    public:
        WorkSpace();
        ~WorkSpace();
        void add_shape(std::shared_ptr<Shape> s);
        void draw();

    private:

      void click_handler(sf::Vector2i &position);
           
        

        std::vector<std::shared_ptr<Shape>> shapes; 
    };

}
