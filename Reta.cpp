#include "Reta.h"
#include "GL/glu.h"
#include "Util.h"
#include "math.h"

Reta::Reta(){
    x1 = 0;
    y1 = 0;
    x2 = 0;
    y2 = 0;
    pixelModo = centrado;
    width = 1;
}

Reta::Reta(int x1, int y1, int x2, int y2) {
    this->x1 = x1;
    this->y1 = y1;
    this->x2 = x2;
    this->y2 = y2;
    pixelModo = centrado;
    width = 1.5;
}

void Reta::draw(Algoritmo algoritmo) {
    if(x1 != x2 || y1 != y2){
        switch (algoritmo) {
        case explicita:
            drawRetaExplicita();
            break;
        case dda:
            drawRetaDDA();
            break;
        case pontoMedio:
            drawRetaPontoMedio();
            break;
        default:
            drawRetaOpenGL();
            break;
        }
    }
}

void Reta::drawRetaDDA() {
    float x, y, dX, dY, incX, incY;
    int length, i;

    dX = x2 - x1;
    dY = y2 - y1;

    length = Util::maior(abs(dX), abs(dY));

    if(length == 0) length = 1;

    incY = dY/length;
    incX = dX/length;

    x = x1;
    y = y1;

    for(i = 0; i <= length; i++){
        drawPixel(Util::round(x), Util::round(y));
        x += incX;
        y += incY;
    }
}

void Reta::drawRetaPontoMedio(){
    int a, b, d, x, y, incE, incNE, dx, dy, temp, x1, x2, y1, y2, xDraw, yDraw;
    bool declive, simetrico;

    x1 = this->x1;
    x2 = this->x2;
    y1 = this->y1;
    y2 = this->y2;

    dx = x2 - x1;
    dy = y2 - y1;


    //inicio do processo de conversão de qualquer octante para o primeiro octante
    declive = false;
    simetrico = false;

    if(dx * dy < 0){
        y1 = -y1;
        y2 = -y2;
        dy = -dy;
        simetrico = true;
    }

    if(abs(dx) < abs(dy)){
        temp = x1;
        x1 = y1;
        y1 = temp;

        temp = x2;
        x2 = y2;
        y2 = temp;

        temp = dx;
        dx = dy;
        dy = temp;
        declive = true;
    }

    if(x1 > x2){
        temp = x1;
        x1 = x2;
        x2 = temp;

        temp = y1;
        y1 = y2;
        y2 = temp;
        dx = -dx;
        dy = -dy;
    }
    //fim do processo de conversão de octantes

    a = y2 - y1;
    b = -x2 + x1;

    x = x1;
    y = y1;
    xDraw = x1;
    yDraw = y1;

    incE = a;
    incNE = a + b;

    //verifica e converte de volta ao primeiro octante
    if(declive){
        temp = xDraw;
        xDraw = yDraw;
        yDraw = temp;
    }
    if(simetrico){
        yDraw = -yDraw;
    }
    //fim de verificacao de octante

    drawPixel(xDraw,yDraw);
    d = 2*a + b;
    while(x < x2){
        if(d <= 0){
            d += incE;
            x++;
        } else{
            d += incNE;
            x++;
            y++;
        }
        xDraw = x;
        yDraw = y;

        //verifica e converte de volta ao primeiro octante
        if(declive){
            temp = xDraw;
            xDraw = yDraw;
            yDraw = temp;
        }
        if(simetrico){
            yDraw = -yDraw;
        }
        //fim de verificacao de octante
        drawPixel(xDraw,yDraw);
    }
}

void Reta::drawRetaOpenGL(){
    glBegin(GL_LINES);
        glVertex2f(x1, y1);
        glVertex2f(x2, y2);
    glEnd();
}

void Reta::drawRetaExplicita() {
    float x, y, dX, dY, m, B, absDy, absDx, menorX, maiorX, menorY, maiorY;
    dX = x2 - x1;
    dY = y2 - y1;
    menorX = Util::menor(x1, x2);
    maiorX = Util::maior(x1, x2);
    menorY = Util::menor(y1, y2);
    maiorY = Util::maior(y1, y2);
    absDy = abs(dY);
    absDx = abs(dX);

    if(dX == 0) m = dY;
    else m = dY/dX;

    B = y1 - (x1 * m);

    if(dX == 0){ //retas verticais (alfa = 90)
        x = x1;
        for(y = menorY; y <= maiorY; y++){
            drawPixel(x, y);
        }
    }else if (absDx >= absDy) { //retas mais horixontais que verticais (alfa <= 45)
        for(x = menorX; x <= maiorX; x++) {
            y = Util::round(m*x + B);
            drawPixel(x, y);
        }
    } else if(absDx < absDy) { //retas mais verticais que horizontais (alfa > 45)
        for(y = menorY ; y <= maiorY; y++) {
            x = Util::round((y - B)/m);
            drawPixel(x, y);
        }
    }
}

void Reta::drawPixel(int x, int y){
    if(pixelModo == centrado){
        drawPixelCentrado(x, y);
    } else{
        drawPixelQuadrado(x, y);
    }
}

void Reta::drawPixelQuadrado(int x, int y) {
    glBegin(GL_POLYGON);
        glVertex2f(x, y);
        glVertex2f(x+width, y);
        glVertex2f(x+width, y+width);
        glVertex2f(x, y+width);
    glEnd();
}

void Reta::drawPixelCentrado(int x, int y) {
    int lados = 40;
    float raio = width/2;
    float PI = 3.14159265;
    glBegin(GL_POLYGON);
        for (int i = 0; i < lados; ++i) {
            glVertex2f(x + raio*cos(i*2*PI/lados), y + raio*sin(i*2*PI/lados));
        }
    glEnd();
}

void Reta::setPixelModo(PixelModo pixel){
    pixelModo = pixel;
}


void Reta::setX1(int n) {
    x1 = n;
}

void Reta::setX2(int n) {
    x2 = n;
}

void Reta::setY1(int n) {
    y1 = n;
}

void Reta::setY2(int n) {
    y2 = n;
}

void Reta::setWidth(float width){
    this->width = width;
}

int Reta::getX1() {
    return x1;
}

int Reta::getY1() {
    return y1;
}

int Reta::getX2() {
    return x2;
}

int Reta::getY2() {
    return y2;
}

