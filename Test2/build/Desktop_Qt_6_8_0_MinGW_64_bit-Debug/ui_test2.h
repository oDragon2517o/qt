/********************************************************************************
** Form generated from reading UI file 'test2.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST2_H
#define UI_TEST2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Test2
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Test2)
    {
        if (Test2->objectName().isEmpty())
            Test2->setObjectName("Test2");
        Test2->resize(800, 600);
        centralwidget = new QWidget(Test2);
        centralwidget->setObjectName("centralwidget");
        Test2->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Test2);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        Test2->setMenuBar(menubar);
        statusbar = new QStatusBar(Test2);
        statusbar->setObjectName("statusbar");
        Test2->setStatusBar(statusbar);

        retranslateUi(Test2);

        QMetaObject::connectSlotsByName(Test2);
    } // setupUi

    void retranslateUi(QMainWindow *Test2)
    {
        Test2->setWindowTitle(QCoreApplication::translate("Test2", "Test2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Test2: public Ui_Test2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST2_H
