/********************************************************************************
** Form generated from reading UI file 'youtube.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_YOUTUBE_H
#define UI_YOUTUBE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_youtube
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_3;
    QFormLayout *formLayout;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *youtube)
    {
        if (youtube->objectName().isEmpty())
            youtube->setObjectName("youtube");
        youtube->resize(1085, 565);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(youtube->sizePolicy().hasHeightForWidth());
        youtube->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(youtube);
        centralwidget->setObjectName("centralwidget");
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy1);
        pushButton_3->setMaximumSize(QSize(16777215, 20));

        gridLayout->addWidget(pushButton_3, 2, 2, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMaximumSize(QSize(16777215, 30));

        formLayout->setWidget(0, QFormLayout::LabelRole, pushButton_2);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMaximumSize(QSize(16777215, 30));

        formLayout->setWidget(0, QFormLayout::FieldRole, label);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setMaximumSize(QSize(16777215, 30));
        label_2->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        lineEdit->setMaximumSize(QSize(16777215, 30));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName("lineEdit_2");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy2);

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_2);


        gridLayout->addLayout(formLayout, 1, 0, 2, 1);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setMaximumSize(QSize(16777215, 20));

        gridLayout->addWidget(pushButton_4, 1, 3, 1, 1);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMaximumSize(QSize(16777215, 20));

        gridLayout->addWidget(pushButton, 2, 3, 1, 1);

        youtube->setCentralWidget(centralwidget);
        menubar = new QMenuBar(youtube);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1085, 22));
        youtube->setMenuBar(menubar);
        statusbar = new QStatusBar(youtube);
        statusbar->setObjectName("statusbar");
        youtube->setStatusBar(statusbar);

        retranslateUi(youtube);
        QObject::connect(pushButton, &QPushButton::clicked, youtube, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(youtube);
    } // setupUi

    void retranslateUi(QMainWindow *youtube)
    {
        youtube->setWindowTitle(QCoreApplication::translate("youtube", "youtube", nullptr));
        pushButton_3->setText(QCoreApplication::translate("youtube", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \320\264\320\270\320\260\320\273\320\276\320\263\320\276\320\262\320\276\320\265 \320\276\320\272\320\275\320\276", nullptr));
        pushButton_2->setText(QCoreApplication::translate("youtube", "\320\241\320\274\320\265\320\275\320\270\321\202\321\214 \321\202\320\265\320\272\321\201\321\202", nullptr));
        label->setText(QCoreApplication::translate("youtube", "\320\237\321\200\320\270\320\262\320\265\321\202", nullptr));
        label_2->setText(QCoreApplication::translate("youtube", "Ntrcn", nullptr));
        label_3->setText(QCoreApplication::translate("youtube", "TextLabel", nullptr));
        pushButton_4->setText(QCoreApplication::translate("youtube", "PushButton", nullptr));
        pushButton->setText(QCoreApplication::translate("youtube", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class youtube: public Ui_youtube {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_YOUTUBE_H
