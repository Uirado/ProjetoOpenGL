#ifndef RETA_H
#define RETA_H

#include <string.h>

enum Algoritmo {explicita, dda, pontoMedio, openGl};

class Reta {

public:
    Reta();
    Reta(int x1, int y1, int x2, int y2);
    void draw(Algoritmo algoritmo);
    void setX1(int n);
    void setX2(int n);
    void setY1(int n);
    void setY2(int n);
    void setWidth(float width);
    int getX1();
    int getY1();
    int getX2();
    int getY2();

private:
    int x1, y1, x2, y2, octante;
    float width;

    void drawRetaExplicita();
    void drawRetaDDA();
    void drawRetaPontoMedio();
    void drawRetaOpenGL();
    void drawPixelCentrado(int x, int y);
    void drawPixel(int x, int y);
    void updateOctante();

};

#endif // RETA_H
