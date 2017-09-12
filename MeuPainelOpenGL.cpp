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
    showRetaOpenGL = true;
    showRetaDDA = false;
    showRetaPontoMedio = false;
    showRetaExplicita = false;
    showMalhaPontosM = false;
    showMalhaCentros = false;
    updateMalha(10);
}

void MeuPainelOpenGL::updateMalha(int valor){
    malha.setSize(valor);
    resizeGL(this->width(), this->height());
    updateGL();
}

void MeuPainelOpenGL::showMalhaPontosMToggle() {
    showMalhaPontosM = !showMalhaPontosM;
    updateGL();
}

void MeuPainelOpenGL::showMalhaCentrosToggle() {
    showMalhaCentros = !showMalhaCentros;
    updateGL();
}

void MeuPainelOpenGL::showMalhaToggle() {
    showMalhaFlag = !showMalhaFlag;
    updateGL();
}
void MeuPainelOpenGL::showRetaOpenGLToggle(){
    showRetaOpenGL = !showRetaOpenGL;
    updateGL();
}
void MeuPainelOpenGL::showRetaDDAToggle(){
    showRetaDDA = !showRetaDDA;
    updateGL();
}
void MeuPainelOpenGL::showRetaExplicitaToggle(){
    showRetaExplicita = !showRetaExplicita;
    updateGL();
}
void MeuPainelOpenGL::showRetaPontoMedioToggle(){
    showRetaPontoMedio = !showRetaPontoMedio;
    updateGL();
}

void MeuPainelOpenGL::initializeGL()
{
    QColor cor = this->parentWidget()->palette().color(QPalette::Background); //pega cor de fundo da janela principal
    glShadeModel(GL_SMOOTH);

    //glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
    glClearColor(cor.redF(), cor.greenF(), cor.blueF(), cor.alphaF());

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
    gluOrtho2D(0, malhaSize, 0, malhaSize);
    glMatrixMode(GL_MODELVIEW);
}

void MeuPainelOpenGL::paintGL() {
    // Limpa a janela de visualização com a cor branca
    // e Limpa o buffer de teste de profundidade
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity(); // limpa todas as transformações


    //quadrado de fundo branco
    glColor3f(1,1,1); //cor branca
    glBegin(GL_POLYGON);
        glVertex2i(0,0);
        glVertex2i(0, malha.getSize());
        glVertex2i(malha.getSize(), malha.getSize());
        glVertex2i(malha.getSize(), 0);
    glEnd();

    if(showMalhaFlag) malha.draw();

    glColor3f(0, 0, 1); //cor azul
    if(showRetaDDA) reta.draw(dda);

    glColor3f(0, 0, 0); //cor preta
    if(showRetaPontoMedio) reta.draw(pontoMedio);

    glColor3f(0, 0.5f, 0); //cor verde
    if(showRetaExplicita) reta.draw(explicita);

    glColor3f(1, 0, 0); //cor vermelha
    if(showRetaOpenGL) reta.draw(openGl);

    if(showMalhaPontosM) malha.drawPontosMedios();
    if(showMalhaCentros) malha.drawCentros();

}

void MeuPainelOpenGL::setX1(int n) {
    reta.setX1(n);
    updateGL();
}

void MeuPainelOpenGL::setX2(int n) {
    reta.setX2(n);
    updateGL();
}

void MeuPainelOpenGL::setY1(int n) {
    reta.setY1(n);
    updateGL();
}

void MeuPainelOpenGL::setY2(int n) {
    reta.setY2(n);
    updateGL();
}

void MeuPainelOpenGL::setEspessura(int width){
    reta.setWidth((float) width);
    updateGL();
}
