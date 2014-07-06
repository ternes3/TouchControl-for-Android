#include "about.h"
#include "ui_about.h"

About::About(QWidget *parent) : QWidget(parent), ui(new Ui::About) {
    ui->setupUi(this);

    //img
    ui->img->setBackgroundRole(QPalette::Base);
    ui->img->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
    ui->img->setScaledContents(true);
    ui->img->setPixmap(QPixmap::fromImage(QImage(":/img/phone.png")));

    //buttons
    connect(ui->github, SIGNAL(clicked()), this, SLOT(github()));
    connect(ui->github_orginal, SIGNAL(clicked()), this, SLOT(github_orginal()));
    connect(ui->rebtsoft, SIGNAL(clicked()), this, SLOT(rebtsoft()));
    connect(ui->droid_website, SIGNAL(clicked()), this, SLOT(droid_website()));
    connect(ui->github_droid, SIGNAL(clicked()), this, SLOT(gitgub_droid()));
}

About::~About()
{
    delete ui;
}

void About::github() {
    system("firefox https://github.com/ternes3/TouchControl-for-Android");
}

void About::github_orginal() {
    system("firefox https://github.com/kjanku1/WindowsApplication1");
}

void About::rebtsoft() {
    system("firefox https://git.rebtsoft.de/open-source/touchcontrol-for-android");
}

void About::droid_website() {
    system("firefox http://droid-at-screen.ribomation.com/");
}

void About::gitgub_droid() {
    system("firefox https://github.com/ribomation/DroidAtScreen1");
}
