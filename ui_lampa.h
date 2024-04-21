/********************************************************************************
** Form generated from reading UI file 'lampa.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAMPA_H
#define UI_LAMPA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Lampa
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *light;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Lampa)
    {
        if (Lampa->objectName().isEmpty())
            Lampa->setObjectName("Lampa");
        Lampa->resize(800, 600);
        Lampa->setStyleSheet(QString::fromUtf8("background-color: rgb(100,100,100)"));
        centralwidget = new QWidget(Lampa);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        light = new QLabel(centralwidget);
        light->setObjectName("light");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(light->sizePolicy().hasHeightForWidth());
        light->setSizePolicy(sizePolicy);
        light->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(light);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout_2->addItem(verticalSpacer_2);


        verticalLayout->addLayout(verticalLayout_2);

        Lampa->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Lampa);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        Lampa->setMenuBar(menubar);
        statusbar = new QStatusBar(Lampa);
        statusbar->setObjectName("statusbar");
        Lampa->setStatusBar(statusbar);

        retranslateUi(Lampa);

        QMetaObject::connectSlotsByName(Lampa);
    } // setupUi

    void retranslateUi(QMainWindow *Lampa)
    {
        Lampa->setWindowTitle(QCoreApplication::translate("Lampa", "Lampa", nullptr));
        light->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Lampa: public Ui_Lampa {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAMPA_H
