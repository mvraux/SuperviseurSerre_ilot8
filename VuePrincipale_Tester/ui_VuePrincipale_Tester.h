/********************************************************************************
** Form generated from reading UI file 'VuePrincipale_Tester.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VUEPRINCIPALE_TESTER_H
#define UI_VUEPRINCIPALE_TESTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VuePrincipale_Tester
{
public:
    QLabel *label;

    void setupUi(QWidget *VuePrincipale_Tester)
    {
        if (VuePrincipale_Tester->objectName().isEmpty())
            VuePrincipale_Tester->setObjectName(QStringLiteral("VuePrincipale_Tester"));
        VuePrincipale_Tester->resize(400, 300);
        label = new QLabel(VuePrincipale_Tester);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 40, 131, 16));

        retranslateUi(VuePrincipale_Tester);

        QMetaObject::connectSlotsByName(VuePrincipale_Tester);
    } // setupUi

    void retranslateUi(QWidget *VuePrincipale_Tester)
    {
        VuePrincipale_Tester->setWindowTitle(QApplication::translate("VuePrincipale_Tester", "VuePrincipale_Tester", 0));
        label->setText(QApplication::translate("VuePrincipale_Tester", "Surveillance Serre", 0));
    } // retranslateUi

};

namespace Ui {
    class VuePrincipale_Tester: public Ui_VuePrincipale_Tester {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VUEPRINCIPALE_TESTER_H
