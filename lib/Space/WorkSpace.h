#pragma once
#include "../Shape.h"
#include <vector>
#include "Space.h"



namespace ts{

    class WorkSpace : public Space{
    public:
        WorkSpace();
        ~WorkSpace();
        WorkSpace(const WorkSpace &);
        WorkSpace& operator=(WorkSpace&);
        void add_shape(Shape *s);
        void draw();
        void close_space(); 

    private:

      void click_handler(sf::Vector2i &position);
           
        

        std::vector<Shape*> shapes; 
    };

}
