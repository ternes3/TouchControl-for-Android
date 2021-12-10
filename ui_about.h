/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_About
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *github;
    QPushButton *rebtsoft;
    QPushButton *github_orginal;
    QLabel *label_4;
    QPushButton *droid_website;
    QPushButton *github_droid;
    QLabel *img;

    void setupUi(QWidget *About)
    {
        if (About->objectName().isEmpty())
            About->setObjectName(QString::fromUtf8("About"));
        About->resize(579, 219);
        label = new QLabel(About);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(230, 10, 261, 20));
        label_2 = new QLabel(About);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(230, 30, 261, 16));
        label_3 = new QLabel(About);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(230, 80, 261, 16));
        github = new QPushButton(About);
        github->setObjectName(QString::fromUtf8("github"));
        github->setGeometry(QRect(230, 50, 81, 22));
        rebtsoft = new QPushButton(About);
        rebtsoft->setObjectName(QString::fromUtf8("rebtsoft"));
        rebtsoft->setGeometry(QRect(350, 50, 81, 22));
        github_orginal = new QPushButton(About);
        github_orginal->setObjectName(QString::fromUtf8("github_orginal"));
        github_orginal->setGeometry(QRect(230, 100, 81, 22));
        label_4 = new QLabel(About);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(230, 130, 341, 16));
        droid_website = new QPushButton(About);
        droid_website->setObjectName(QString::fromUtf8("droid_website"));
        droid_website->setGeometry(QRect(230, 150, 81, 22));
        github_droid = new QPushButton(About);
        github_droid->setObjectName(QString::fromUtf8("github_droid"));
        github_droid->setGeometry(QRect(350, 150, 81, 22));
        img = new QLabel(About);
        img->setObjectName(QString::fromUtf8("img"));
        img->setGeometry(QRect(10, 10, 201, 191));

        retranslateUi(About);

        QMetaObject::connectSlotsByName(About);
    } // setupUi

    void retranslateUi(QWidget *About)
    {
        About->setWindowTitle(QApplication::translate("About", "Form", 0));
        label->setText(QApplication::translate("About", "TouchControl for Android v1.0", 0));
        label_2->setText(QApplication::translate("About", "Ported to Linux by Bj\303\266rn Ternes", 0));
        label_3->setText(QApplication::translate("About", "Orginally written by k.janku1", 0));
        github->setText(QApplication::translate("About", "GitHub", 0));
        rebtsoft->setText(QApplication::translate("About", "reBT-SOFT", 0));
        github_orginal->setText(QApplication::translate("About", "GitHub", 0));
        label_4->setText(QApplication::translate("About", "This software use droidAtScreen written by Jens Riboe", 0));
        droid_website->setText(QApplication::translate("About", "Website", 0));
        github_droid->setText(QApplication::translate("About", "GitHub", 0));
        img->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class About: public Ui_About {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
