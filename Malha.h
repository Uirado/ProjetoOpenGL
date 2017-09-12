#ifndef MALHA_H
#define MALHA_H


class Malha
{
public:
    Malha();
    void setSize(int size);
    void draw();
    int getSize();
    void drawPontosMedios();
    void drawCentros();

private:
    int size;
};

#endif // MALHA_H
