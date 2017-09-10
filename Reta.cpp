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
    octante = 0;
}

Reta::Reta(int x1, int y1, int x2, int y2) {
    this->x1 = x1;
    this->y1 = y1;
    this->x2 = x2;
    this->y2 = y2;
    pixelModo = centrado;
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

    if(pixelModo == quadrado) length--;

    for(i = 0; i <= length; i++){
        drawPixel(Util::round(x), Util::round(y));
        x += incX;
        y += incY;
    }
}

void Reta::inverterPontos(){
    int temp;
    temp = x1;
    setX1(x2);
    setX2(temp);
    temp = y1;
    setY1(y2);
    setY2(temp);
}

void Reta::checkOctante(){
    int absDx, absDy, dX, dY;
    //if octante == 3,4,5,6 => converte para 7,8,1,2

    dX = x2 - x1;
    dY = y2 - y1;
    absDx = abs(dX);
    absDy = abs(dY);
    if(dX == 0 && dY == 0){
        octante = 0;
    } else

    if(absDx >= absDy){ //mais horizontal que vertical
        if(dX >= 0 && dY >= 0) { //primeiro octante (E-NE)
            octante = 1;
        } else if(dX <= 0 && dY >= 0){ //quarto octante (NW - W) => inverte para oitavo octante
//            inverterPontos();
//            return 8;
            octante = 4;
        } else if (dX <= 0 && dY <= 0){ //quinto octante (W - SW) => inverte para primeiro octante
//            inverterPontos();
//            return 1;
            octante = 5;
        } else{ // oitavo octante  (E - SE)
            octante = 8;
        }
    } else{ //mais vertical que horizontal
        if(dX >= 0 && dY >= 0) { //segundo octante (N - NE)
            octante = 2;
        } else if(dX <= 0 && dY >= 0){ //terceiro octante => inverte para setimo octante
//            inverterPontos();
//            return 7;
            octante = 3;
        } else if(dX <= 0 && dY <= 0){ //sexto octante => inverte para segundo octante
//            inverterPontos();
//            return 2;
             octante = 6;
        } else { //setimo octante (S - SE)
            octante = 7;
        }
    }
}

void Reta::drawRetaPontoMedio(){
    int a, b, d, x, y, incE, incNE, dx, dy, temp, xDraw, yDraw;
    bool declive, simetrico;

    declive = false;
    simetrico = false;

    dx = x2 - x1;
    dy = y2 - y1;

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

    a = y2 - y1;
    b = -x2 + x1;

    x = x1;
    y = y1;

    incE = a;
    incNE = a + b;

    drawPixel(x,y);

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

        if(declive){
            temp = xDraw;
            xDraw = yDraw;
            yDraw = temp;
        }
        if(simetrico){
            yDraw = -yDraw;
        }

        drawPixel(xDraw,yDraw);
    }
}


//void Reta::drawRetaPontoMedio() {
//    switch (octante) {
//    case 1:
//        drawRetaPontoMedioOct1();
//        break;
//    case 2:

//        break;
//    case 3:
//        drawRetaPontoMedioOct3();
//        break;
//    case 4:

//        break;
//    case 5:
//        //inverterPontos();
//        //drawRetaPontoMedioOct1();
//        break;
//    case 6:

//        break;
//    case 7:

//        break;
//    case 8:

//        break;
//    default:

//        break;
//    }

//}

void Reta::drawRetaPontoMedioOct1(){
    int a, b, d, x, y, incE, incNE;

    a = y2 - y1;
    b = -x2 + x1;

    x = x1;
    y = y1;

    incE = a;
    incNE = a + b;

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
        drawPixel(x,y);
    }
}

//void Reta::drawRetaPontoMedioOct3(){
//    int a, b, d, x, y, incN, incNW;

//    a = y2 - y1;
//    b = -x2 + x1;

//    x = x1;
//    y = y1;

//    incN = b;
//    incNW = -a + b;

//    d = -a + 2*b;
//    while(x < y2){
//        if(d <= 0){
//            d += incNW;
//            x--;
//            y++;
//        } else{
//            d += incN;
//            y++;
//        }
//        drawPixel(x, y);
//    }
//}

//void Reta::drawRetaPontoMedio() {
//    int incE, incNE, incN, incNW, incW, incSW, incS, incSE, d, x, y, a, b, octante;

//    octante = checkOctante();

//    a = y2 - y1;
//    b = -x2 + x1;

//    incE = a;
//    incNE = a + b;
//    incN = b;
//    incNW = -a + b;
//    incW = -a;
//    incSW = -a - b;
//    incS = -b;
//    incSE = a - b;

//    x = x1;
//    y = y1;

//    drawPixel(x,y);

//    switch (octante){
//    case 1:
//        d = 2*a + b;
//        while(x != x2 || y != y2){
//            if(d <= 0){
//                d += incE;
//                x++;
//            } else{
//                d += incNE;
//                x++;
//                y++;
//            }
//            drawPixel(x,y);
//        }
//        break;
//    case 2:
//        d = a + 2*b;
//        while(x != x2 || y != y2){
//            if(d <= 0){
//                d += incNE;
//                x++;
//                y++;
//            } else{
//                d += incN;
//                y++;
//            }
//            drawPixel(x,y);
//        }
//        break;
//    case 3:
//        d = -a + 2*b;
//        while(x != x2 || y != y2){
//            if(d <= 0){
//                d += incNW;
//                x--;
//                y++;
//            } else{
//                d += incN;
//                y++;
//            }
//            drawPixel(x,y);
//        }
//        break;
//    case 4:
//        d = -2*a + b;
//        while(x != x2 || y != y2){
//            if(d <= 0){
//                d += incW;
//                x--;
//            } else{
//                d += incNW;
//                x--;
//                y++;
//            }
//            drawPixel(x,y);
//        }
//        break;
//    case 5:
//        d = -2*a -b;
//        while(x != x2 || y != y2){
//            if(d <= 0){
//                d += incSW;
//                x--;
//                y--;
//            } else{
//                d += incW;
//                x--;
//            }
//            drawPixel(x,y);
//        }
//        break;
//    case 6:
//        d = -a -2*b;
//        while(x != x2 || y != y2){
//            if(d <= 0){
//                d += incS;
//                y--;
//            } else{
//                d += incSW;
//                x--;
//                y--;
//            }
//            drawPixel(x,y);
//        }
//        break;
//    case 7:
//        d = a - 2*b;
//        while(x != x2 || y != y2){
//            if(d <= 0){
//                d += incS;
//                y--;
//            } else{
//                d += incSE;
//                x++;
//                y--;
//            }
//            drawPixel(x,y);
//        }
//        break;
//    case 8:
//        d = 2*a - b;
//        while(x != x2 || y != y2){
//            if(d <= 0){
//                d += incSE;
//                x++;
//                y--;
//            } else{
//                d += incE;
//                x++;
//            }
//            drawPixel(x,y);
//        }
//        break;
//    default:
//        glBegin(GL_POLYGON);
//            glVertex2i(0,0);
//            glVertex2i(0,10);
//            glVertex2i(10,10);
//            glVertex2i(10,0);
//        glEnd();
//        break;
//    }

//}

//void Reta::drawRetaPontoMedio() {
//    int absDx, absDy, dX, dY, incE, incNE, incN, incNW, incW, incSW, incS, incSE, d, x, y, a, b;

//    dX = x2 - x1;
//    dY = y2 - y1;
//    a = dY;
//    b = -dX;
//    absDx = abs(dX);
//    absDy = abs(dY);

//    incE = a;
//    incNE = a + b;
//    incN = b;
//    incNW = -a + b;
//    incW = -a;
//    incSW = -a - b;
//    incS = -b;
//    incSE = a - b;

//    x = x1;
//    y = y1;
//    drawPixel(x,y);

//    if(absDx >= absDy){ //mais horizontal que vertical
//        if(dX > 0 && dY > 0) { //primeiro octante (E-NE)
//            d = 2*a + b;
//            while(x != x2){
//                if(d <= 0){
//                    d += incE;
//                    x++;
//                } else{
//                    d += incNE;
//                    x++;
//                    y++;
//                }
//                drawPixel(x,y);
//            }
//        } else if(dX > 0 && dY < 0){ //oitavo octante (E - SE)
//            d = 2 * a - b;
//            while(x != x2){
//                if(d <= 0){
//                    d += incSE;
//                    y--;
//                    x++;
//                } else{
//                    d += incE;
//                    x++;
//                }
//                drawPixel(x,y);
//            }
//        } else if(dX < 0 && dY > 0){ //quarto octante (NW - W)
//            d = -2 * a + b;
//            while(x != x2){
//                if(d <= 0){
//                    d += incNW;
//                    x--;
//                    y++;
//                } else{
//                    d += incW;
//                    x--;
//                }
//                drawPixel(x,y);
//            }
//        } else{ //quinto octante (W - SW)
//            d = -2 * a - b;
//            while(x != x2){
//                if(d <= 0){
//                    d += incW;
//                    x--;
//                } else{
//                    d += incSW;
//                    x--;
//                    y--;
//                }
//                drawPixel(x,y);
//            }
//        }
//    } else{ //mais vertical que horizontal
//        if(dX > 0 && dY > 0) { //segundo octante (N - NE)

//        } else if(dX > 0 && dY < 0){ //sentimo octante

//        } else if(dX < 0 && dY > 0){ //terceiro octante

//        } else{ //sexto octante

//        }
//    }
//}

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

    if(dX == 0) dX = 1;

    m = dY/dX;
    B = y1 - (x1 * m);

    glColor3f(0, 0.5f, 0); //cor verde

    if(pixelModo == centrado){
        maiorX++;
        maiorY++;
    }

    if(dX == 0){ //retas verticais (alfa = 90)
        x = x1;
        for(y = menorY; y < maiorY; y++){
            drawPixel(x, y);
        }
    }else if (absDx >= absDy) { //retas mais horixontais que verticais (alfa <= 45)
        for(x = menorX; x < maiorX; x++) {
            y = Util::round(m*x + B);
            drawPixel(x, y);
        }
    } else if(absDx < absDy) { //retas mais verticais que horizontais (alfa > 45)
        for(y = menorY ; y < maiorY; y++) {
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
        glVertex2f(x+1, y);
        glVertex2f(x+1, y+1);
        glVertex2f(x, y+1);
    glEnd();
}

void Reta::drawPixelCentrado(int x, int y) {
    int lados = 40;
    float raio = 0.5;
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
    checkOctante();
}

void Reta::setX2(int n) {
    x2 = n;
    checkOctante();
}

void Reta::setY1(int n) {
    y1 = n;
    checkOctante();
}

void Reta::setY2(int n) {
    y2 = n;
    checkOctante();
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

int Reta::getOctante() {
    return octante;
}


