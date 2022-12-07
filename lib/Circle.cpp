 #include "Circle.h"
using namespace ts;
 Circle::Circle(Coordinates centre, float radius):_centre(centre), _radius(radius){}
    void Circle::draw  (){
        GLfloat twice_Pi = 2.0f * M_PI;
        glBegin(GL_LINE_LOOP);
            for(int i = 0; i < 100; i++){
                glVertex2f(
                    _centre.get_x()+(_radius * cos(i * twice_Pi / 100)),
                    _centre.get_y()+(_radius * sin(i * twice_Pi / 100))
                );
            }
        glEnd();    
    }
    void Circle::resize (float radius) {_radius = radius;} 
