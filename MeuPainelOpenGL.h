#ifndef MEUPAINELOPENGL_H
#define MEUPAINELOPENGL_H

#include <GL/glu.h>
#include <QGLWidget>
#include <Reta.h>
#include <Malha.h>

class MeuPainelOpenGL : public QGLWidget {

Q_OBJECT
public:
    explicit MeuPainelOpenGL(QWidget *parent = 0);

signals:
    void setMalhaSignal(int n);

public slots:
    void showMalhaToggle();
    void showMalhaPontosMToggle();
    void showMalhaCentrosToggle();
    void showRetaOpenGLToggle();
    void showRetaDDAToggle();
    void showRetaExplicitaToggle();
    void showRetaPontoMedioToggle();
    void setX1(int n);
    void setX2(int n);
    void setY1(int n);
    void setY2(int n);
    void updateMalha(int valor);
    void setEspessura(int width);

protected:
    void initializeGL();
    void resizeGL(int width, int height);
    void paintGL();

private:
    Malha malha;
    Reta reta;
    bool showMalhaFlag, showRetaOpenGL, showRetaDDA, showRetaPontoMedio, showRetaExplicita, showMalhaPontosM, showMalhaCentros;
    double menorX, maiorX, menorY, maiorY;
};

#endif // MEUPAINELOPENGL_H
