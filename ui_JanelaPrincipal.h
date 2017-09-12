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
    MeuPainelOpenGL *painelGL;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
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
    QSlider *x1_slider;
    QSlider *y1_slider;
    QSlider *x2_slider;
    QSlider *y2_slider;
    QGroupBox *groupBox_3;
    QCheckBox *dda_checkbox;
    QCheckBox *pontoMedio_checkBox;
    QCheckBox *explicita_checkBox;
    QCheckBox *retaOpenGL_checkbox;
    QGroupBox *groupBox_2;
    QLabel *label_5;
    QSpinBox *malha_spinBox;
    QCheckBox *showGrid_checkbox;
    QSlider *horizontalSlider;
    QCheckBox *checkBox_pontosM;
    QCheckBox *checkBox_centros;
    QGroupBox *groupBox_4;
    QLabel *label_6;
    QSpinBox *spinBox_espessura;
    QSlider *horizontalSlider_2;
    QPushButton *bt_sair;

    void setupUi(QWidget *JanelaPrincipal)
    {
        if (JanelaPrincipal->objectName().isEmpty())
            JanelaPrincipal->setObjectName(QString::fromUtf8("JanelaPrincipal"));
        JanelaPrincipal->setEnabled(true);
        JanelaPrincipal->resize(890, 580);
        horizontalLayout = new QHBoxLayout(JanelaPrincipal);
        horizontalLayout->setSpacing(10);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(10, 10, 10, 10);
        painelGL = new MeuPainelOpenGL(JanelaPrincipal);
        painelGL->setObjectName(QString::fromUtf8("painelGL"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(painelGL->sizePolicy().hasHeightForWidth());
        painelGL->setSizePolicy(sizePolicy);
        painelGL->setSizeIncrement(QSize(0, 0));
        painelGL->setBaseSize(QSize(0, 0));
        painelGL->setMouseTracking(false);
        painelGL->setLayoutDirection(Qt::RightToLeft);
        painelGL->setAutoFillBackground(false);

        horizontalLayout->addWidget(painelGL);

        widget = new QWidget(JanelaPrincipal);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        widget->setMinimumSize(QSize(300, 0));
        widget->setMaximumSize(QSize(300, 16777215));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        groupBox = new QGroupBox(widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy2);
        groupBox->setBaseSize(QSize(0, 0));
        groupBox->setAutoFillBackground(false);
        groupBox->setFlat(false);
        groupBox->setCheckable(false);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(11, 21, 16, 16));
        x1_spinBox = new QSpinBox(groupBox);
        x1_spinBox->setObjectName(QString::fromUtf8("x1_spinBox"));
        x1_spinBox->setGeometry(QRect(11, 40, 130, 20));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(x1_spinBox->sizePolicy().hasHeightForWidth());
        x1_spinBox->setSizePolicy(sizePolicy3);
        x1_spinBox->setMinimum(-1000);
        x1_spinBox->setMaximum(1000);
        y1_spinBox = new QSpinBox(groupBox);
        y1_spinBox->setObjectName(QString::fromUtf8("y1_spinBox"));
        y1_spinBox->setGeometry(QRect(160, 40, 130, 20));
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(y1_spinBox->sizePolicy().hasHeightForWidth());
        y1_spinBox->setSizePolicy(sizePolicy4);
        y1_spinBox->setFrame(true);
        y1_spinBox->setProperty("showGroupSeparator", QVariant(false));
        y1_spinBox->setMinimum(-1000);
        y1_spinBox->setMaximum(1000);
        y1_spinBox->setValue(0);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(160, 21, 16, 16));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(11, 100, 16, 16));
        x2_spinBox = new QSpinBox(groupBox);
        x2_spinBox->setObjectName(QString::fromUtf8("x2_spinBox"));
        x2_spinBox->setGeometry(QRect(11, 119, 130, 20));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(x2_spinBox->sizePolicy().hasHeightForWidth());
        x2_spinBox->setSizePolicy(sizePolicy5);
        x2_spinBox->setMinimum(-1000);
        x2_spinBox->setMaximum(1000);
        x2_spinBox->setValue(0);
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 100, 16, 16));
        y2_spinBox = new QSpinBox(groupBox);
        y2_spinBox->setObjectName(QString::fromUtf8("y2_spinBox"));
        y2_spinBox->setGeometry(QRect(160, 119, 130, 20));
        sizePolicy5.setHeightForWidth(y2_spinBox->sizePolicy().hasHeightForWidth());
        y2_spinBox->setSizePolicy(sizePolicy5);
        y2_spinBox->setMinimum(-1000);
        y2_spinBox->setMaximum(1000);
        y2_spinBox->setValue(0);
        x1_slider = new QSlider(groupBox);
        x1_slider->setObjectName(QString::fromUtf8("x1_slider"));
        x1_slider->setGeometry(QRect(10, 70, 130, 10));
        x1_slider->setMinimum(-100);
        x1_slider->setMaximum(100);
        x1_slider->setOrientation(Qt::Horizontal);
        y1_slider = new QSlider(groupBox);
        y1_slider->setObjectName(QString::fromUtf8("y1_slider"));
        y1_slider->setGeometry(QRect(160, 70, 130, 10));
        y1_slider->setMinimum(-100);
        y1_slider->setMaximum(100);
        y1_slider->setOrientation(Qt::Horizontal);
        x2_slider = new QSlider(groupBox);
        x2_slider->setObjectName(QString::fromUtf8("x2_slider"));
        x2_slider->setGeometry(QRect(10, 150, 130, 10));
        x2_slider->setMinimum(-100);
        x2_slider->setMaximum(100);
        x2_slider->setOrientation(Qt::Horizontal);
        y2_slider = new QSlider(groupBox);
        y2_slider->setObjectName(QString::fromUtf8("y2_slider"));
        y2_slider->setGeometry(QRect(160, 150, 130, 10));
        y2_slider->setMinimum(-100);
        y2_slider->setMaximum(100);
        y2_slider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(groupBox);

        groupBox_3 = new QGroupBox(widget);
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

        groupBox_2 = new QGroupBox(widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 89, 51, 16));
        malha_spinBox = new QSpinBox(groupBox_2);
        malha_spinBox->setObjectName(QString::fromUtf8("malha_spinBox"));
        malha_spinBox->setGeometry(QRect(69, 87, 221, 20));
        malha_spinBox->setMinimum(1);
        malha_spinBox->setMaximum(100);
        malha_spinBox->setValue(10);
        showGrid_checkbox = new QCheckBox(groupBox_2);
        showGrid_checkbox->setObjectName(QString::fromUtf8("showGrid_checkbox"));
        showGrid_checkbox->setGeometry(QRect(10, 20, 91, 17));
        showGrid_checkbox->setLayoutDirection(Qt::LeftToRight);
        showGrid_checkbox->setChecked(true);
        horizontalSlider = new QSlider(groupBox_2);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(10, 113, 281, 19));
        horizontalSlider->setMinimum(1);
        horizontalSlider->setMaximum(100);
        horizontalSlider->setValue(10);
        horizontalSlider->setOrientation(Qt::Horizontal);
        checkBox_pontosM = new QCheckBox(groupBox_2);
        checkBox_pontosM->setObjectName(QString::fromUtf8("checkBox_pontosM"));
        checkBox_pontosM->setGeometry(QRect(10, 40, 121, 17));
        checkBox_centros = new QCheckBox(groupBox_2);
        checkBox_centros->setObjectName(QString::fromUtf8("checkBox_centros"));
        checkBox_centros->setGeometry(QRect(10, 60, 121, 17));
        label_5->raise();
        malha_spinBox->raise();
        showGrid_checkbox->raise();
        horizontalSlider->raise();
        checkBox_pontosM->raise();
        checkBox_centros->raise();
        groupBox->raise();

        verticalLayout->addWidget(groupBox_2);

        groupBox_4 = new QGroupBox(widget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 23, 61, 16));
        spinBox_espessura = new QSpinBox(groupBox_4);
        spinBox_espessura->setObjectName(QString::fromUtf8("spinBox_espessura"));
        spinBox_espessura->setGeometry(QRect(70, 20, 221, 22));
        spinBox_espessura->setMinimum(1);
        spinBox_espessura->setMaximum(7);
        horizontalSlider_2 = new QSlider(groupBox_4);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setGeometry(QRect(10, 50, 281, 19));
        horizontalSlider_2->setMinimum(1);
        horizontalSlider_2->setMaximum(7);
        horizontalSlider_2->setValue(1);
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(groupBox_4);

        bt_sair = new QPushButton(widget);
        bt_sair->setObjectName(QString::fromUtf8("bt_sair"));
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(bt_sair->sizePolicy().hasHeightForWidth());
        bt_sair->setSizePolicy(sizePolicy6);
        bt_sair->setMinimumSize(QSize(0, 0));
        bt_sair->setCheckable(false);
        bt_sair->setAutoDefault(false);
        bt_sair->setDefault(false);
        bt_sair->setFlat(false);

        verticalLayout->addWidget(bt_sair);

        verticalLayout->setStretch(0, 16);
        verticalLayout->setStretch(1, 10);
        verticalLayout->setStretch(2, 13);
        verticalLayout->setStretch(3, 7);
        verticalLayout->setStretch(4, 1);

        verticalLayout_2->addLayout(verticalLayout);


        horizontalLayout->addWidget(widget);

        horizontalLayout->setStretch(0, 4);
        painelGL->raise();
        widget->raise();
        QWidget::setTabOrder(x1_spinBox, y1_spinBox);
        QWidget::setTabOrder(y1_spinBox, x2_spinBox);
        QWidget::setTabOrder(x2_spinBox, y2_spinBox);
        QWidget::setTabOrder(y2_spinBox, showGrid_checkbox);
        QWidget::setTabOrder(showGrid_checkbox, malha_spinBox);
        QWidget::setTabOrder(malha_spinBox, dda_checkbox);
        QWidget::setTabOrder(dda_checkbox, pontoMedio_checkBox);
        QWidget::setTabOrder(pontoMedio_checkBox, explicita_checkBox);
        QWidget::setTabOrder(explicita_checkBox, retaOpenGL_checkbox);
        QWidget::setTabOrder(retaOpenGL_checkbox, bt_sair);

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
        QObject::connect(explicita_checkBox, SIGNAL(toggled(bool)), painelGL, SLOT(showRetaExplicitaToggle()));
        QObject::connect(dda_checkbox, SIGNAL(toggled(bool)), painelGL, SLOT(showRetaDDAToggle()));
        QObject::connect(pontoMedio_checkBox, SIGNAL(toggled(bool)), painelGL, SLOT(showRetaPontoMedioToggle()));
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), malha_spinBox, SLOT(setValue(int)));
        QObject::connect(malha_spinBox, SIGNAL(valueChanged(int)), horizontalSlider, SLOT(setValue(int)));
        QObject::connect(spinBox_espessura, SIGNAL(valueChanged(int)), horizontalSlider_2, SLOT(setValue(int)));
        QObject::connect(spinBox_espessura, SIGNAL(valueChanged(int)), painelGL, SLOT(setEspessura(int)));
        QObject::connect(horizontalSlider_2, SIGNAL(valueChanged(int)), spinBox_espessura, SLOT(setValue(int)));
        QObject::connect(checkBox_centros, SIGNAL(toggled(bool)), painelGL, SLOT(showMalhaCentrosToggle()));
        QObject::connect(checkBox_pontosM, SIGNAL(toggled(bool)), painelGL, SLOT(showMalhaPontosMToggle()));
        QObject::connect(x1_slider, SIGNAL(valueChanged(int)), x1_spinBox, SLOT(setValue(int)));
        QObject::connect(x1_spinBox, SIGNAL(valueChanged(int)), x1_slider, SLOT(setValue(int)));
        QObject::connect(x2_slider, SIGNAL(valueChanged(int)), x2_spinBox, SLOT(setValue(int)));
        QObject::connect(x2_spinBox, SIGNAL(valueChanged(int)), x2_slider, SLOT(setValue(int)));
        QObject::connect(y1_slider, SIGNAL(valueChanged(int)), y1_spinBox, SLOT(setValue(int)));
        QObject::connect(y1_spinBox, SIGNAL(valueChanged(int)), y1_slider, SLOT(setValue(int)));
        QObject::connect(y2_slider, SIGNAL(valueChanged(int)), y2_spinBox, SLOT(setValue(int)));
        QObject::connect(y2_spinBox, SIGNAL(valueChanged(int)), y2_slider, SLOT(setValue(int)));

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
        groupBox_3->setTitle(QApplication::translate("JanelaPrincipal", "Algoritmos de rasteriza\303\247\303\243o", 0, QApplication::UnicodeUTF8));
        dda_checkbox->setText(QApplication::translate("JanelaPrincipal", "DDA", 0, QApplication::UnicodeUTF8));
        pontoMedio_checkBox->setText(QApplication::translate("JanelaPrincipal", "Ponto m\303\251dio", 0, QApplication::UnicodeUTF8));
        explicita_checkBox->setText(QApplication::translate("JanelaPrincipal", "Expl\303\255cita", 0, QApplication::UnicodeUTF8));
        retaOpenGL_checkbox->setText(QApplication::translate("JanelaPrincipal", "Original OpenGL", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("JanelaPrincipal", "Malha", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("JanelaPrincipal", "Tamanho:", 0, QApplication::UnicodeUTF8));
        showGrid_checkbox->setText(QApplication::translate("JanelaPrincipal", "Exibir malha", 0, QApplication::UnicodeUTF8));
        checkBox_pontosM->setText(QApplication::translate("JanelaPrincipal", "Exibir pontos m\303\251dios", 0, QApplication::UnicodeUTF8));
        checkBox_centros->setText(QApplication::translate("JanelaPrincipal", "Sobrepor interse\303\247\303\265es", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("JanelaPrincipal", "Pixel centrado", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("JanelaPrincipal", "Espessura:", 0, QApplication::UnicodeUTF8));
        bt_sair->setText(QApplication::translate("JanelaPrincipal", "Sair", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class JanelaPrincipal: public Ui_JanelaPrincipal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JANELAPRINCIPAL_H
