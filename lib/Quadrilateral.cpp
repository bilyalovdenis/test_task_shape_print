#include "Quadrilateral.h"

using namespace ts;

Quadrilateral::Quadrilateral(Coordinates c1, Coordinates c2, Coordinates c3, Coordinates c4)
: _c1(c1), _c2(c2), _c3(c3), _c4(c4){}

void Quadrilateral::draw(){
    glBegin(GL_LINE_LOOP);
        glVertex2f(_c1.get_x(), _c1.get_y());
        glVertex2f(_c2.get_x(), _c2.get_y());
        glVertex2f(_c3.get_x(), _c3.get_y());
        glVertex2f(_c4.get_x(), _c4.get_y());
    glEnd();
}
