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
        int i;
        for(i = 1; i < size; i++) {
            glVertex2i(i, size);
            glVertex2i(i, 0);
            glVertex2i(0, i);
            glVertex2i(size, i);
        }
    glEnd();
}


void Malha::drawPontosMedios(){
    float i, j;
    glColor3f(1,0,0);
    for (i = -0.5; i < size; i++){
        glBegin(GL_LINES);
        for(j = 1; j < size; j++){
            glVertex2f(j-0.05, i);
            glVertex2f(j+0.05, i);
            glVertex2f(i, j-0.05);
            glVertex2f(i, j+0.05);
        }
        glEnd();
    }
}


void Malha::drawCentros(){
    float i, j;
    glColor3f(0.7f,.7f,.7f);
    for (i = 1; i < size; i++){
        glBegin(GL_LINES);
        for(j = 1; j < size; j++){
            glVertex2f(j-0.05, i);
            glVertex2f(j+0.05, i);
            glVertex2f(i, j-0.05);
            glVertex2f(i, j+0.05);
        }
        glEnd();
    }
}
