#include "Malha.h"
#include "GL/glu.h"

Malha::Malha()
{
    size = 10;
}

void Malha::setSize(int size){
    this->size = size;
}

int Malha::getSize(){
    return size;
}

void Malha::draw(){
    glColor3f(.7f, .7f, .7f);
    glLineWidth(1.0f);

    glBegin(GL_LINES);
        float temp;
        for(temp = 1; temp < size; temp++) {
            glVertex2i(temp, size);
            glVertex2i(temp, 0);
            glVertex2i(0, temp);
            glVertex2i(size, temp);
        }
    glEnd();
}
