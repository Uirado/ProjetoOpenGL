/********************************************************************************
** Form generated from reading UI file 'JanelaPrincipal.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JANELAPRINCIPAL_H
#define UI_JANELAPRINCIPAL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSlider>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "MeuPainelOpenGL.h"

QT_BEGIN_NAMESPACE

class Ui_JanelaPrincipal
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QLabel *label_3;
    QSpinBox *x1_spinBox;
    QSpinBox *y1_spinBox;
    QLabel *label_4;
    QLabel *label_2;
    QSpinBox *x2_spinBox;
    QLabel *label;
    QSpinBox *y2_spinBox;
    QGroupBox *groupBox_2;
    QLabel *label_5;
    QSpinBox *malha_spinBox;
    QCheckBox *showGrid_checkbox;
    QSlider *horizontalSlider;
    QGroupBox *groupBox_3;
    QCheckBox *dda_checkbox;
    QCheckBox *pontoMedio_checkBox;
    QCheckBox *explicita_checkBox;
    QCheckBox *retaOpenGL_checkbox;
    QGroupBox *groupBox_4;
    QRadioButton *pixelCentrado_radiob;
    QRadioButton *pixelQuadrado_radiob;
    QLabel *label_6;
    QSpinBox *spinBox_espessura;
    QSlider *horizontalSlider_2;
    QPushButton *bt_sair;
    MeuPainelOpenGL *painelGL;

    void setupUi(QWidget *JanelaPrincipal)
    {
        if (JanelaPrincipal->objectName().isEmpty())
            JanelaPrincipal->setObjectName(QString::fromUtf8("JanelaPrincipal"));
        JanelaPrincipal->setEnabled(true);
        JanelaPrincipal->resize(734, 592);
        horizontalLayout = new QHBoxLayout(JanelaPrincipal);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(JanelaPrincipal);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setBaseSize(QSize(0, 0));
        groupBox->setAutoFillBackground(false);
        groupBox->setFlat(false);
        groupBox->setCheckable(false);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(11, 21, 16, 16));
        x1_spinBox = new QSpinBox(groupBox);
        x1_spinBox->setObjectName(QString::fromUtf8("x1_spinBox"));
        x1_spinBox->setGeometry(QRect(11, 40, 53, 20));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(x1_spinBox->sizePolicy().hasHeightForWidth());
        x1_spinBox->setSizePolicy(sizePolicy1);
        x1_spinBox->setMinimum(-1000);
        x1_spinBox->setMaximum(1000);
        y1_spinBox = new QSpinBox(groupBox);
        y1_spinBox->setObjectName(QString::fromUtf8("y1_spinBox"));
        y1_spinBox->setGeometry(QRect(70, 40, 53, 20));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(y1_spinBox->sizePolicy().hasHeightForWidth());
        y1_spinBox->setSizePolicy(sizePolicy2);
        y1_spinBox->setFrame(true);
        y1_spinBox->setProperty("showGroupSeparator", QVariant(false));
        y1_spinBox->setMinimum(-1000);
        y1_spinBox->setMaximum(1000);
        y1_spinBox->setValue(0);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(70, 21, 16, 16));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(11, 66, 16, 16));
        x2_spinBox = new QSpinBox(groupBox);
        x2_spinBox->setObjectName(QString::fromUtf8("x2_spinBox"));
        x2_spinBox->setGeometry(QRect(11, 85, 53, 20));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(x2_spinBox->sizePolicy().hasHeightForWidth());
        x2_spinBox->setSizePolicy(sizePolicy3);
        x2_spinBox->setMinimum(-1000);
        x2_spinBox->setMaximum(1000);
        x2_spinBox->setValue(0);
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 66, 16, 16));
        y2_spinBox = new QSpinBox(groupBox);
        y2_spinBox->setObjectName(QString::fromUtf8("y2_spinBox"));
        y2_spinBox->setGeometry(QRect(70, 85, 53, 20));
        sizePolicy3.setHeightForWidth(y2_spinBox->sizePolicy().hasHeightForWidth());
        y2_spinBox->setSizePolicy(sizePolicy3);
        y2_spinBox->setMinimum(-1000);
        y2_spinBox->setMaximum(1000);
        y2_spinBox->setValue(0);
        label_3->raise();
        x1_spinBox->raise();
        label_3->raise();
        x1_spinBox->raise();
        y1_spinBox->raise();
        label_4->raise();
        label_2->raise();
        x2_spinBox->raise();
        label->raise();
        y2_spinBox->raise();

        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(JanelaPrincipal);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 50, 51, 16));
        malha_spinBox = new QSpinBox(groupBox_2);
        malha_spinBox->setObjectName(QString::fromUtf8("malha_spinBox"));
        malha_spinBox->setGeometry(QRect(70, 50, 51, 20));
        malha_spinBox->setMinimum(1);
        malha_spinBox->setMaximum(100);
        malha_spinBox->setValue(20);
        showGrid_checkbox = new QCheckBox(groupBox_2);
        showGrid_checkbox->setObjectName(QString::fromUtf8("showGrid_checkbox"));
        showGrid_checkbox->setGeometry(QRect(10, 20, 91, 17));
        showGrid_checkbox->setLayoutDirection(Qt::LeftToRight);
        showGrid_checkbox->setChecked(true);
        horizontalSlider = new QSlider(groupBox_2);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(10, 90, 121, 19));
        horizontalSlider->setMinimum(1);
        horizontalSlider->setMaximum(100);
        horizontalSlider->setValue(20);
        horizontalSlider->setOrientation(Qt::Horizontal);
        label_5->raise();
        malha_spinBox->raise();
        showGrid_checkbox->raise();
        horizontalSlider->raise();
        groupBox->raise();
        groupBox->raise();

        verticalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(JanelaPrincipal);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        dda_checkbox = new QCheckBox(groupBox_3);
        dda_checkbox->setObjectName(QString::fromUtf8("dda_checkbox"));
        dda_checkbox->setGeometry(QRect(10, 20, 44, 17));
        dda_checkbox->setChecked(false);
        pontoMedio_checkBox = new QCheckBox(groupBox_3);
        pontoMedio_checkBox->setObjectName(QString::fromUtf8("pontoMedio_checkBox"));
        pontoMedio_checkBox->setGeometry(QRect(10, 40, 82, 17));
        pontoMedio_checkBox->setChecked(false);
        explicita_checkBox = new QCheckBox(groupBox_3);
        explicita_checkBox->setObjectName(QString::fromUtf8("explicita_checkBox"));
        explicita_checkBox->setGeometry(QRect(10, 60, 62, 17));
        explicita_checkBox->setChecked(false);
        retaOpenGL_checkbox = new QCheckBox(groupBox_3);
        retaOpenGL_checkbox->setObjectName(QString::fromUtf8("retaOpenGL_checkbox"));
        retaOpenGL_checkbox->setGeometry(QRect(10, 80, 101, 17));
        retaOpenGL_checkbox->setChecked(true);

        verticalLayout->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(JanelaPrincipal);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        pixelCentrado_radiob = new QRadioButton(groupBox_4);
        pixelCentrado_radiob->setObjectName(QString::fromUtf8("pixelCentrado_radiob"));
        pixelCentrado_radiob->setGeometry(QRect(10, 20, 91, 17));
        pixelCentrado_radiob->setChecked(true);
        pixelQuadrado_radiob = new QRadioButton(groupBox_4);
        pixelQuadrado_radiob->setObjectName(QString::fromUtf8("pixelQuadrado_radiob"));
        pixelQuadrado_radiob->setGeometry(QRect(10, 40, 94, 17));
        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 70, 49, 16));
        spinBox_espessura = new QSpinBox(groupBox_4);
        spinBox_espessura->setObjectName(QString::fromUtf8("spinBox_espessura"));
        spinBox_espessura->setGeometry(QRect(70, 70, 51, 22));
        spinBox_espessura->setMinimum(1);
        spinBox_espessura->setMaximum(7);
        horizontalSlider_2 = new QSlider(groupBox_4);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setGeometry(QRect(10, 100, 121, 19));
        horizontalSlider_2->setMinimum(1);
        horizontalSlider_2->setMaximum(7);
        horizontalSlider_2->setValue(1);
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(groupBox_4);

        bt_sair = new QPushButton(JanelaPrincipal);
        bt_sair->setObjectName(QString::fromUtf8("bt_sair"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(bt_sair->sizePolicy().hasHeightForWidth());
        bt_sair->setSizePolicy(sizePolicy4);
        bt_sair->setDefault(false);
        bt_sair->setFlat(false);

        verticalLayout->addWidget(bt_sair);


        horizontalLayout->addLayout(verticalLayout);

        painelGL = new MeuPainelOpenGL(JanelaPrincipal);
        painelGL->setObjectName(QString::fromUtf8("painelGL"));
        QSizePolicy sizePolicy5(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(painelGL->sizePolicy().hasHeightForWidth());
        painelGL->setSizePolicy(sizePolicy5);
        painelGL->setMouseTracking(false);
        painelGL->setLayoutDirection(Qt::RightToLeft);
        painelGL->setAutoFillBackground(false);

        horizontalLayout->addWidget(painelGL);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 4);
        QWidget::setTabOrder(x1_spinBox, y1_spinBox);
        QWidget::setTabOrder(y1_spinBox, x2_spinBox);
        QWidget::setTabOrder(x2_spinBox, y2_spinBox);
        QWidget::setTabOrder(y2_spinBox, showGrid_checkbox);
        QWidget::setTabOrder(showGrid_checkbox, malha_spinBox);
        QWidget::setTabOrder(malha_spinBox, dda_checkbox);
        QWidget::setTabOrder(dda_checkbox, pontoMedio_checkBox);
        QWidget::setTabOrder(pontoMedio_checkBox, explicita_checkBox);
        QWidget::setTabOrder(explicita_checkBox, retaOpenGL_checkbox);
        QWidget::setTabOrder(retaOpenGL_checkbox, pixelCentrado_radiob);
        QWidget::setTabOrder(pixelCentrado_radiob, pixelQuadrado_radiob);
        QWidget::setTabOrder(pixelQuadrado_radiob, bt_sair);

        retranslateUi(JanelaPrincipal);
        QObject::connect(bt_sair, SIGNAL(clicked()), JanelaPrincipal, SLOT(close()));
        QObject::connect(showGrid_checkbox, SIGNAL(toggled(bool)), painelGL, SLOT(showMalhaToggle()));
        QObject::connect(x1_spinBox, SIGNAL(valueChanged(int)), painelGL, SLOT(setX1(int)));
        QObject::connect(x2_spinBox, SIGNAL(valueChanged(int)), painelGL, SLOT(setX2(int)));
        QObject::connect(y1_spinBox, SIGNAL(valueChanged(int)), painelGL, SLOT(setY1(int)));
        QObject::connect(y2_spinBox, SIGNAL(valueChanged(int)), painelGL, SLOT(setY2(int)));
        QObject::connect(painelGL, SIGNAL(setMalhaSignal(int)), malha_spinBox, SLOT(setValue(int)));
        QObject::connect(malha_spinBox, SIGNAL(valueChanged(int)), painelGL, SLOT(updateMalha(int)));
        QObject::connect(retaOpenGL_checkbox, SIGNAL(toggled(bool)), painelGL, SLOT(showRetaOpenGLToggle()));
        QObject::connect(pixelCentrado_radiob, SIGNAL(pressed()), painelGL, SLOT(setPixelCentrado()));
        QObject::connect(pixelQuadrado_radiob, SIGNAL(pressed()), painelGL, SLOT(setPixelQuadrado()));
        QObject::connect(explicita_checkBox, SIGNAL(toggled(bool)), painelGL, SLOT(showRetaExplicitaToggle()));
        QObject::connect(dda_checkbox, SIGNAL(toggled(bool)), painelGL, SLOT(showRetaDDAToggle()));
        QObject::connect(pontoMedio_checkBox, SIGNAL(toggled(bool)), painelGL, SLOT(showRetaPontoMedioToggle()));
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), malha_spinBox, SLOT(setValue(int)));
        QObject::connect(malha_spinBox, SIGNAL(valueChanged(int)), horizontalSlider, SLOT(setValue(int)));
        QObject::connect(spinBox_espessura, SIGNAL(valueChanged(int)), painelGL, SLOT(setEspessura(int)));
        QObject::connect(horizontalSlider_2, SIGNAL(valueChanged(int)), spinBox_espessura, SLOT(setValue(int)));
        QObject::connect(spinBox_espessura, SIGNAL(valueChanged(int)), horizontalSlider_2, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(JanelaPrincipal);
    } // setupUi

    void retranslateUi(QWidget *JanelaPrincipal)
    {
        JanelaPrincipal->setWindowTitle(QApplication::translate("JanelaPrincipal", "Projeto OpenGL", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("JanelaPrincipal", "Pontos", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("JanelaPrincipal", "X1", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("JanelaPrincipal", "Y1", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("JanelaPrincipal", "X2", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("JanelaPrincipal", "Y2", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("JanelaPrincipal", "Malha", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("JanelaPrincipal", "Tamanho:", 0, QApplication::UnicodeUTF8));
        showGrid_checkbox->setText(QApplication::translate("JanelaPrincipal", "Exibir", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("JanelaPrincipal", "Retas", 0, QApplication::UnicodeUTF8));
        dda_checkbox->setText(QApplication::translate("JanelaPrincipal", "DDA", 0, QApplication::UnicodeUTF8));
        pontoMedio_checkBox->setText(QApplication::translate("JanelaPrincipal", "Ponto m\303\251dio", 0, QApplication::UnicodeUTF8));
        explicita_checkBox->setText(QApplication::translate("JanelaPrincipal", "Expl\303\255cita", 0, QApplication::UnicodeUTF8));
        retaOpenGL_checkbox->setText(QApplication::translate("JanelaPrincipal", "Original OpenGL", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("JanelaPrincipal", "Pixel", 0, QApplication::UnicodeUTF8));
        pixelCentrado_radiob->setText(QApplication::translate("JanelaPrincipal", "Centrado", 0, QApplication::UnicodeUTF8));
        pixelQuadrado_radiob->setText(QApplication::translate("JanelaPrincipal", "Quadrado", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("JanelaPrincipal", "Espessura", 0, QApplication::UnicodeUTF8));
        bt_sair->setText(QApplication::translate("JanelaPrincipal", "Sair", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class JanelaPrincipal: public Ui_JanelaPrincipal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JANELAPRINCIPAL_H
