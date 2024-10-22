/********************************************************************************
** Form generated from reading UI file 'qvboxlayouttest.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QVBOXLAYOUTTEST_H
#define UI_QVBOXLAYOUTTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QVBoxLayoutTest
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *QVBoxLayoutTest)
    {
        if (QVBoxLayoutTest->objectName().isEmpty())
            QVBoxLayoutTest->setObjectName("QVBoxLayoutTest");
        QVBoxLayoutTest->resize(800, 600);
        centralwidget = new QWidget(QVBoxLayoutTest);
        centralwidget->setObjectName("centralwidget");
        QVBoxLayoutTest->setCentralWidget(centralwidget);
        menubar = new QMenuBar(QVBoxLayoutTest);
        menubar->setObjectName("menubar");
        QVBoxLayoutTest->setMenuBar(menubar);
        statusbar = new QStatusBar(QVBoxLayoutTest);
        statusbar->setObjectName("statusbar");
        QVBoxLayoutTest->setStatusBar(statusbar);

        retranslateUi(QVBoxLayoutTest);

        QMetaObject::connectSlotsByName(QVBoxLayoutTest);
    } // setupUi

    void retranslateUi(QMainWindow *QVBoxLayoutTest)
    {
        QVBoxLayoutTest->setWindowTitle(QCoreApplication::translate("QVBoxLayoutTest", "QVBoxLayoutTest", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QVBoxLayoutTest: public Ui_QVBoxLayoutTest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QVBOXLAYOUTTEST_H
