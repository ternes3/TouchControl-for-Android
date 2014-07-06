#include "specialcharacter.h"
#include "ui_specialcharacter.h"

using namespace std;
SpecialCharacter::SpecialCharacter(QWidget *parent) : QWidget(parent), ui(new Ui::SpecialCharacter) {
        ui->setupUi(this);

        //buttons
        connect(ui->ok, SIGNAL(clicked()), this, SLOT(push_button_ok()));
        connect(ui->button_at, SIGNAL(clicked()), this, SLOT(push_at()));
        connect(ui->button_1, SIGNAL(clicked()), this, SLOT(push_1()));
        connect(ui->button_dollar, SIGNAL(clicked()), this, SLOT(push_dollar()));
        connect(ui->button_euro, SIGNAL(clicked()), this, SLOT(push_euro()));
        connect(ui->button_procent, SIGNAL(clicked()), this, SLOT(push_procnet()));
        connect(ui->button_bslash, SIGNAL(clicked()), this, SLOT(push_bslash()));
        connect(ui->button_minus, SIGNAL(clicked()), this, SLOT(push_minus()));
        connect(ui->button_equal, SIGNAL(clicked()), this, SLOT(push_equal()));
        connect(ui->button_2, SIGNAL(clicked()), this, SLOT(push_2()));
        connect(ui->button_3, SIGNAL(clicked()), this, SLOT(push_3()));
        connect(ui->button_star, SIGNAL(clicked()), this, SLOT(push_star()));
        connect(ui->button_4, SIGNAL(clicked()), this, SLOT(push_4()));
        connect(ui->button_5, SIGNAL(clicked()), this, SLOT(push_5()));
        connect(ui->button_6, SIGNAL(clicked()), this, SLOT(push_6()));
        connect(ui->button_dpoint, SIGNAL(clicked()), this, SLOT(push_dpoint()));
        connect(ui->button_7, SIGNAL(clicked()), this, SLOT(push_7()));
        connect(ui->button_8, SIGNAL(clicked()), this, SLOT(push_8()));
        connect(ui->button_ue, SIGNAL(clicked()), this, SLOT(push_ue()));
        connect(ui->button_UE, SIGNAL(clicked()), this, SLOT(push_UE()));
        connect(ui->button_AE, SIGNAL(clicked()), this, SLOT(push_AE()));
        connect(ui->button_ae, SIGNAL(clicked()), this, SLOT(push_ae()));
        connect(ui->button_OE, SIGNAL(clicked()), this, SLOT(push_OE()));
        connect(ui->button_oe, SIGNAL(clicked()), this, SLOT(push_oe()));
        connect(ui->button_10, SIGNAL(clicked()), this, SLOT(push_10()));
        connect(ui->button_plus, SIGNAL(clicked()), this, SLOT(push_plus()));
        connect(ui->button_9, SIGNAL(clicked()), this, SLOT(push_9()));
}

SpecialCharacter::~SpecialCharacter()
{
    delete ui;
}

void SpecialCharacter::push_button_ok() {
    close();
}

void SpecialCharacter::push_1() {
    string command;
    command = "./tools/adb shell input text '#'&";
    const char * cs = command.c_str();
    system(cs);
}

void SpecialCharacter::push_oe() {
    string command;
    command = "./tools/adb shell input text 'ö'&";
    const char * cs = command.c_str();
    system(cs);
}

void SpecialCharacter::push_ue() {
    string command;
    command = "./tools/adb shell input text 'ü'&";
    const char * cs = command.c_str();
    system(cs);
}

void SpecialCharacter::push_equal() {
    string command;
    command = "./tools/adb shell input text '='&";
    const char * cs = command.c_str();
    system(cs);
}

void SpecialCharacter::push_star() {
    string command;
    command = "./tools/adb shell input text '*'&";
    const char * cs = command.c_str();
    system(cs);
}

void SpecialCharacter::push_2() {
    string command;
    command = "./tools/adb shell input text '('&";
    const char * cs = command.c_str();
    system(cs);
}

void SpecialCharacter::push_3() {
    string command;
    command = "./tools/adb shell input text ')'&";
    const char * cs = command.c_str();
    system(cs);
}

void SpecialCharacter::push_4() {
    string command;
    command = "./tools/adb shell input text '\"'&";
    const char * cs = command.c_str();
    system(cs);
}

void SpecialCharacter::push_5() {
    string command;
    command = "./tools/adb shell input text '\''&";
    const char * cs = command.c_str();
    system(cs);
}

void SpecialCharacter::push_6() {
    string command;
    command = "./tools/adb shell input text ';'&";
    const char * cs = command.c_str();
    system(cs);
}

void SpecialCharacter::push_7() {
    string command;
    command = "./tools/adb shell input text '!'&";
    const char * cs = command.c_str();
    system(cs);
}

void SpecialCharacter::push_8() {
    string command;
    command = "./tools/adb shell input text '?' &";
    const char * cs = command.c_str();
    system(cs);
}

void SpecialCharacter::push_9() {
    string command;
    command = "./tools/adb shell input text '~'&";
    const char * cs = command.c_str();
    system(cs);
}

void SpecialCharacter::push_10() {
    string command;
    command = "./tools/adb shell input text '_'&";
    const char * cs = command.c_str();
    system(cs);
}

void SpecialCharacter::push_AE() {
    string command;
    command = "./tools/adb shell input text 'Ä'&";
    const char * cs = command.c_str();
    system(cs);
}

void SpecialCharacter::push_ae() {
    string command;
    command = "./tools/adb shell input text 'ä'&";
    const char * cs = command.c_str();
    system(cs);
}

void SpecialCharacter::push_at() {
    string command;
    command = "./tools/adb shell input text '@'&";
    const char * cs = command.c_str();
    system(cs);
}

void SpecialCharacter::push_bslash() {
    string command;
    command = "./tools/adb shell input text '\\'&";
    const char * cs = command.c_str();
    system(cs);
}

void SpecialCharacter::push_dollar() {
    string command;
    command = "./tools/adb shell input text '$'&";
    const char * cs = command.c_str();
    system(cs);
}

void SpecialCharacter::push_dpoint() {
    string command;
    command = "./tools/adb shell input text ':'&";
    const char * cs = command.c_str();
    system(cs);
}


void SpecialCharacter::push_euro() {
    string command;
    command = "./tools/adb shell input text '€'&";
    const char * cs = command.c_str();
    system(cs);
}

void SpecialCharacter::push_minus() {
    string command;
    command = "./tools/adb shell input text '-'&";
    const char * cs = command.c_str();
    system(cs);
}

void SpecialCharacter::push_OE() {
    string command;
    command = "./tools/adb shell input text 'Ö'&";
    const char * cs = command.c_str();
    system(cs);
}

void SpecialCharacter::push_plus() {
    string command;
    command = "./tools/adb shell input text '+'&";
    const char * cs = command.c_str();
    system(cs);
}

void SpecialCharacter::push_procnet() {
    string command;
    command = "./tools/adb shell input text '%'&";
    const char * cs = command.c_str();
    system(cs);
}

void SpecialCharacter::push_UE() {
    string command;
    command = "./tools/adb shell input text 'Ü'&";
    const char * cs = command.c_str();
    system(cs);
}
