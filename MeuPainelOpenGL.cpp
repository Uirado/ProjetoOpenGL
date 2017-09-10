#include "MeuPainelOpenGL.h"
#include <cmath>
#include "Util.h"
#include "GL/glu.h"
#include "Reta.h"
#include "Malha.h"

MeuPainelOpenGL::MeuPainelOpenGL(QWidget *parent) :
    QGLWidget(parent)
{
    setFormat(QGL::DoubleBuffer | QGL::DepthBuffer);
    showMalhaFlag = true;
    showLinhaOriginal = true;
    updateMalha(20);
}

void MeuPainelOpenGL::updateMalha(int valor){
    malha.setSize(valor);
    resizeGL(this->width(), this->height());
    updateGL();
}

void MeuPainelOpenGL::showMalhaToggle() {
    showMalhaFlag = !showMalhaFlag;
    updateGL();
}
void MeuPainelOpenGL::showLinhaOriginalToggle(){
    showLinhaOriginal = !showLinhaOriginal;
    updateGL();
}

void MeuPainelOpenGL::initializeGL()
{
    glShadeModel(GL_SMOOTH);

    glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
    glClearDepth(1.0f);

    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LEQUAL);

    glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
}

void MeuPainelOpenGL::resizeGL(int width, int height) {
    int menorLado = Util::menor(width, height);
    int marginLeft = (width - menorLado)/2;
    int marginBottom = (height - menorLado)/2;
    int malhaSize = malha.getSize();

    glViewport(marginLeft, marginBottom, (GLint)menorLado, (GLint)menorLado);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-malhaSize, malhaSize, -malhaSize, malhaSize);
    glMatrixMode(GL_MODELVIEW);
}

void MeuPainelOpenGL::paintGL() {
    // Limpa a janela de visualização com a cor branca
    // e Limpa o buffer de teste de profundidade
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity(); // limpa todas as transformações


//    reta.setX1(11);
//    reta.setY1(5);
//    reta.setX2(8);
//    reta.setY2(9);

    if(showMalhaFlag) malha.draw();

    glColor3f(0, 0, 1); //cor azul
    reta.draw(dda);

    glColor3f(0, 0, 0); //cor preta
    reta.draw(pontoMedio);

    glColor3f(0, 0.7f, 0); //cor verde
    reta.draw(explicita);

    glColor3f(1, 0, 0); //cor vermelha
    if(showLinhaOriginal) reta.draw(openGl);

}

void MeuPainelOpenGL::setPixelCentrado(){
    reta.setPixelModo(centrado);
    updateGL();
}

void MeuPainelOpenGL:: setPixelQuadrado(){
    reta.setPixelModo(quadrado);
    updateGL();
}

void MeuPainelOpenGL::setX1(int n) {
    reta.setX1(n);
    emit sendOctante(reta.getOctante());
    updateGL();
}

void MeuPainelOpenGL::setX2(int n) {
    reta.setX2(n);
    emit sendOctante(reta.getOctante());
    updateGL();
}

void MeuPainelOpenGL::setY1(int n) {
    reta.setY1(n);
    emit sendOctante(reta.getOctante());
    updateGL();
}

void MeuPainelOpenGL::setY2(int n) {
    reta.setY2(n);
    emit sendOctante(reta.getOctante());
    updateGL();
}


void MeuPainelOpenGL::roundFloat(double n){
    emit sendInt(Util::round((float) n));
}
