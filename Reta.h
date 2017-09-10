#ifndef RETA_H
#define RETA_H

#include <string.h>

enum Algoritmo {explicita, dda, pontoMedio, openGl};
enum PixelModo {centrado, quadrado};

class Reta {

public:
    Reta();
    Reta(int x1, int y1, int x2, int y2);
    void draw(Algoritmo algoritmo);
    void setX1(int n);
    void setX2(int n);
    void setY1(int n);
    void setY2(int n);
    int getX1();
    int getY1();
    int getX2();
    int getY2();
    int getOctante();
    void setPixelModo(PixelModo pixelModo);

private:
    int x1, y1, x2, y2, octante;
    PixelModo pixelModo;

    void drawRetaExplicita();
    void drawRetaDDA();
    void drawRetaPontoMedio();
    void drawRetaOpenGL();
    void drawPixelQuadrado(int x, int y);
    void drawPixelCentrado(int x, int y);
    void drawPixel(int x, int y);
    void inverterPontos();
    void checkOctante();
    void drawRetaPontoMedioOct1();
    void drawRetaPontoMedioOct3();

};

#endif // RETA_H
