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
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>
#include "MeuPainelOpenGL.h"

QT_BEGIN_NAMESPACE

class Ui_JanelaPrincipal
{
public:
    QHBoxLayout *horizontalLayout;
    MeuPainelOpenGL *painelGL;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QCheckBox *checkBox;
    QPushButton *bt_sair;
    QSpacerItem *verticalSpacer_3;
    QSpinBox *x2_spinBox;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label;
    QSpinBox *malha_spinBox;
    QCheckBox *showGrid_checkbox;
    QRadioButton *pixelCentrado_radiob;
    QSpinBox *y1_spinBox;
    QSpinBox *x1_spinBox;
    QSpinBox *y2_spinBox;
    QRadioButton *pixelQuadrado_radiob;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *labelOctanteValue;

    void setupUi(QWidget *JanelaPrincipal)
    {
        if (JanelaPrincipal->objectName().isEmpty())
            JanelaPrincipal->setObjectName(QString::fromUtf8("JanelaPrincipal"));
        JanelaPrincipal->setEnabled(true);
        JanelaPrincipal->resize(1005, 617);
        horizontalLayout = new QHBoxLayout(JanelaPrincipal);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        painelGL = new MeuPainelOpenGL(JanelaPrincipal);
        painelGL->setObjectName(QString::fromUtf8("painelGL"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(painelGL->sizePolicy().hasHeightForWidth());
        painelGL->setSizePolicy(sizePolicy);
        painelGL->setMouseTracking(false);
        painelGL->setLayoutDirection(Qt::RightToLeft);
        painelGL->setAutoFillBackground(true);

        horizontalLayout->addWidget(painelGL);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(120, 350, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 9, 0, 1, 2);

        checkBox = new QCheckBox(JanelaPrincipal);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setChecked(true);

        gridLayout->addWidget(checkBox, 16, 0, 1, 2);

        bt_sair = new QPushButton(JanelaPrincipal);
        bt_sair->setObjectName(QString::fromUtf8("bt_sair"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(bt_sair->sizePolicy().hasHeightForWidth());
        bt_sair->setSizePolicy(sizePolicy1);
        bt_sair->setDefault(false);
        bt_sair->setFlat(false);

        gridLayout->addWidget(bt_sair, 17, 0, 1, 2);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_3, 4, 1, 1, 1);

        x2_spinBox = new QSpinBox(JanelaPrincipal);
        x2_spinBox->setObjectName(QString::fromUtf8("x2_spinBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(x2_spinBox->sizePolicy().hasHeightForWidth());
        x2_spinBox->setSizePolicy(sizePolicy2);
        x2_spinBox->setMinimum(-1000);
        x2_spinBox->setMaximum(1000);
        x2_spinBox->setValue(0);

        gridLayout->addWidget(x2_spinBox, 7, 0, 1, 1);

        label_2 = new QLabel(JanelaPrincipal);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 6, 0, 1, 1);

        label_4 = new QLabel(JanelaPrincipal);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 1, 1, 1);

        label = new QLabel(JanelaPrincipal);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 6, 1, 1, 1);

        malha_spinBox = new QSpinBox(JanelaPrincipal);
        malha_spinBox->setObjectName(QString::fromUtf8("malha_spinBox"));
        malha_spinBox->setMinimum(1);
        malha_spinBox->setMaximum(100);
        malha_spinBox->setValue(20);

        gridLayout->addWidget(malha_spinBox, 14, 1, 1, 1);

        showGrid_checkbox = new QCheckBox(JanelaPrincipal);
        showGrid_checkbox->setObjectName(QString::fromUtf8("showGrid_checkbox"));
        showGrid_checkbox->setLayoutDirection(Qt::LeftToRight);
        showGrid_checkbox->setChecked(true);

        gridLayout->addWidget(showGrid_checkbox, 15, 0, 1, 2);

        pixelCentrado_radiob = new QRadioButton(JanelaPrincipal);
        pixelCentrado_radiob->setObjectName(QString::fromUtf8("pixelCentrado_radiob"));
        pixelCentrado_radiob->setChecked(true);

        gridLayout->addWidget(pixelCentrado_radiob, 12, 0, 1, 2);

        y1_spinBox = new QSpinBox(JanelaPrincipal);
        y1_spinBox->setObjectName(QString::fromUtf8("y1_spinBox"));
        sizePolicy2.setHeightForWidth(y1_spinBox->sizePolicy().hasHeightForWidth());
        y1_spinBox->setSizePolicy(sizePolicy2);
        y1_spinBox->setMinimum(-1000);
        y1_spinBox->setMaximum(1000);
        y1_spinBox->setValue(0);

        gridLayout->addWidget(y1_spinBox, 3, 1, 1, 1);

        x1_spinBox = new QSpinBox(JanelaPrincipal);
        x1_spinBox->setObjectName(QString::fromUtf8("x1_spinBox"));
        sizePolicy2.setHeightForWidth(x1_spinBox->sizePolicy().hasHeightForWidth());
        x1_spinBox->setSizePolicy(sizePolicy2);
        x1_spinBox->setMinimum(-1000);
        x1_spinBox->setMaximum(1000);

        gridLayout->addWidget(x1_spinBox, 3, 0, 1, 1);

        y2_spinBox = new QSpinBox(JanelaPrincipal);
        y2_spinBox->setObjectName(QString::fromUtf8("y2_spinBox"));
        sizePolicy2.setHeightForWidth(y2_spinBox->sizePolicy().hasHeightForWidth());
        y2_spinBox->setSizePolicy(sizePolicy2);
        y2_spinBox->setMinimum(-1000);
        y2_spinBox->setMaximum(1000);
        y2_spinBox->setValue(0);

        gridLayout->addWidget(y2_spinBox, 7, 1, 1, 1);

        pixelQuadrado_radiob = new QRadioButton(JanelaPrincipal);
        pixelQuadrado_radiob->setObjectName(QString::fromUtf8("pixelQuadrado_radiob"));

        gridLayout->addWidget(pixelQuadrado_radiob, 13, 0, 1, 2);

        label_3 = new QLabel(JanelaPrincipal);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_5 = new QLabel(JanelaPrincipal);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 14, 0, 1, 1);

        label_6 = new QLabel(JanelaPrincipal);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 8, 0, 1, 1);

        labelOctanteValue = new QLabel(JanelaPrincipal);
        labelOctanteValue->setObjectName(QString::fromUtf8("labelOctanteValue"));

        gridLayout->addWidget(labelOctanteValue, 8, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        horizontalLayout->setStretch(0, 5);
        horizontalLayout->setStretch(1, 1);

        retranslateUi(JanelaPrincipal);
        QObject::connect(bt_sair, SIGNAL(clicked()), JanelaPrincipal, SLOT(close()));
        QObject::connect(showGrid_checkbox, SIGNAL(toggled(bool)), painelGL, SLOT(showMalhaToggle()));
        QObject::connect(x1_spinBox, SIGNAL(valueChanged(int)), painelGL, SLOT(setX1(int)));
        QObject::connect(x2_spinBox, SIGNAL(valueChanged(int)), painelGL, SLOT(setX2(int)));
        QObject::connect(y1_spinBox, SIGNAL(valueChanged(int)), painelGL, SLOT(setY1(int)));
        QObject::connect(y2_spinBox, SIGNAL(valueChanged(int)), painelGL, SLOT(setY2(int)));
        QObject::connect(painelGL, SIGNAL(setMalhaSignal(int)), malha_spinBox, SLOT(setValue(int)));
        QObject::connect(malha_spinBox, SIGNAL(valueChanged(int)), painelGL, SLOT(updateMalha(int)));
        QObject::connect(checkBox, SIGNAL(toggled(bool)), painelGL, SLOT(showLinhaOriginalToggle()));
        QObject::connect(pixelCentrado_radiob, SIGNAL(pressed()), painelGL, SLOT(setPixelCentrado()));
        QObject::connect(pixelQuadrado_radiob, SIGNAL(pressed()), painelGL, SLOT(setPixelQuadrado()));
        QObject::connect(painelGL, SIGNAL(sendOctante(int)), labelOctanteValue, SLOT(setNum(int)));

        QMetaObject::connectSlotsByName(JanelaPrincipal);
    } // setupUi

    void retranslateUi(QWidget *JanelaPrincipal)
    {
        JanelaPrincipal->setWindowTitle(QApplication::translate("JanelaPrincipal", "Projeto OpenGL", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("JanelaPrincipal", "Mostrar linha original", 0, QApplication::UnicodeUTF8));
        bt_sair->setText(QApplication::translate("JanelaPrincipal", "Sair", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("JanelaPrincipal", "X2", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("JanelaPrincipal", "Y1", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("JanelaPrincipal", "Y2", 0, QApplication::UnicodeUTF8));
        showGrid_checkbox->setText(QApplication::translate("JanelaPrincipal", "Mostrar malha", 0, QApplication::UnicodeUTF8));
        pixelCentrado_radiob->setText(QApplication::translate("JanelaPrincipal", "Pixel centrado", 0, QApplication::UnicodeUTF8));
        pixelQuadrado_radiob->setText(QApplication::translate("JanelaPrincipal", "Pixel quadrado", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("JanelaPrincipal", "X1", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("JanelaPrincipal", "Malha:", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("JanelaPrincipal", "Octante:", 0, QApplication::UnicodeUTF8));
        labelOctanteValue->setText(QApplication::translate("JanelaPrincipal", "0", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class JanelaPrincipal: public Ui_JanelaPrincipal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JANELAPRINCIPAL_H