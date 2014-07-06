#include "touchcontrol.h"
#include <iostream>
#include <string>
#include <QComboBox>

using namespace std;

touchcontrol::touchcontrol(QMainWindow *parent) : QMainWindow(parent){
    setupUi(this);
	//check
	lock = false;
	//start droidAtScreen
	string startdroid;
	startdroid = "java -jar ./tools/droidAtScreen.jar &";
    const char * c = startdroid.c_str();
    system(c);

    //set icons
    button_a_h->setIcon(QIcon(":/img/home.png"));
    button_a_b->setIcon(QIcon(":/img/back.png"));
    button_a_o->setIcon(QIcon(":/img/apps.png"));

	//buttons
	connect(button_q, SIGNAL(clicked()), this, SLOT(push_q()));
	connect(button_w, SIGNAL(clicked()), this, SLOT(push_w()));
	connect(button_e, SIGNAL(clicked()), this, SLOT(push_e()));
	connect(button_r, SIGNAL(clicked()), this, SLOT(push_r()));
	connect(button_t, SIGNAL(clicked()), this, SLOT(push_t()));
	connect(button_z, SIGNAL(clicked()), this, SLOT(push_z()));
	connect(button_u, SIGNAL(clicked()), this, SLOT(push_u()));
	connect(button_i, SIGNAL(clicked()), this, SLOT(push_i()));
	connect(button_o, SIGNAL(clicked()), this, SLOT(push_o()));
	connect(button_p, SIGNAL(clicked()), this, SLOT(push_p()));
	connect(button_a, SIGNAL(clicked()), this, SLOT(push_a()));
	connect(button_s, SIGNAL(clicked()), this, SLOT(push_s()));
	connect(button_d, SIGNAL(clicked()), this, SLOT(push_d()));
	connect(button_f, SIGNAL(clicked()), this, SLOT(push_f()));
	connect(button_g, SIGNAL(clicked()), this, SLOT(push_g()));
	connect(button_h, SIGNAL(clicked()), this, SLOT(push_h()));
	connect(button_j, SIGNAL(clicked()), this, SLOT(push_j()));
	connect(button_k, SIGNAL(clicked()), this, SLOT(push_k()));
	connect(button_l, SIGNAL(clicked()), this, SLOT(push_l()));
	connect(button_y, SIGNAL(clicked()), this, SLOT(push_y()));
	connect(button_x, SIGNAL(clicked()), this, SLOT(push_x()));
	connect(button_c, SIGNAL(clicked()), this, SLOT(push_c()));
	connect(button_v, SIGNAL(clicked()), this, SLOT(push_v()));
	connect(button_b, SIGNAL(clicked()), this, SLOT(push_b()));
	connect(button_n, SIGNAL(clicked()), this, SLOT(push_n()));
	connect(button_m, SIGNAL(clicked()), this, SLOT(push_m()));
	connect(button_comma, SIGNAL(clicked()), this, SLOT(push_comma()));
	connect(button_dot, SIGNAL(clicked()), this, SLOT(push_dot()));
	connect(button_slash, SIGNAL(clicked()), this, SLOT(push_slash()));
	connect(button_enter, SIGNAL(clicked()), this, SLOT(push_enter()));
	connect(button_back, SIGNAL(clicked()), this, SLOT(push_back()));
	connect(button_space, SIGNAL(clicked()), this, SLOT(push_space()));
	connect(button_up, SIGNAL(clicked()), this, SLOT(push_up()));
	connect(button_left, SIGNAL(clicked()), this, SLOT(push_left()));
	connect(button_right, SIGNAL(clicked()), this, SLOT(push_right()));
	connect(button_down, SIGNAL(clicked()), this, SLOT(push_down()));
	connect(button_a_o, SIGNAL(clicked()), this, SLOT(push_a_o()));
	connect(button_a_h, SIGNAL(clicked()), this, SLOT(push_a_h()));
	connect(button_a_b, SIGNAL(clicked()), this, SLOT(push_a_b()));
	connect(button_1, SIGNAL(clicked()), this, SLOT(push_1()));
	connect(button_2, SIGNAL(clicked()), this, SLOT(push_2()));
	connect(button_3, SIGNAL(clicked()), this, SLOT(push_3()));
	connect(button_4, SIGNAL(clicked()), this, SLOT(push_4()));
	connect(button_5, SIGNAL(clicked()), this, SLOT(push_5()));
	connect(button_6, SIGNAL(clicked()), this, SLOT(push_6()));
	connect(button_7, SIGNAL(clicked()), this, SLOT(push_7()));
	connect(button_8, SIGNAL(clicked()), this, SLOT(push_8()));
	connect(button_9, SIGNAL(clicked()), this, SLOT(push_9()));
	connect(button_0, SIGNAL(clicked()), this, SLOT(push_0()));
	connect(button_11, SIGNAL(clicked()), this, SLOT(push_caselock()));
	connect(button_power, SIGNAL(clicked()), this, SLOT(push_power()));
	connect(button_text_enter, SIGNAL(clicked()), this, SLOT(push_text_enter()));
    connect(button_center, SIGNAL(clicked()), this, SLOT(push_center()));
    connect(button_12, SIGNAL(clicked()), this, SLOT(push_12()));
    connect(swipe, SIGNAL(clicked()), this, SLOT(push_swipe()));

    //menu
    connect(actionExit,SIGNAL (triggered()), this, SLOT(menuExit()));
    connect(actionAbout,SIGNAL (triggered()), this, SLOT(about()));
}
 
touchcontrol::~touchcontrol(){}

void touchcontrol::push_q() {
  string command;
  command = "echo his";      
  const char * c = command.c_str();  
  system(c);  
}

void touchcontrol::push_w() {
  if(lock == false)
  {
      string command;
      command = "./tools/adb shell input text 'w'&";
      const char * cs = command.c_str();
      system(cs);
  }
  else
  {
      string command;
      command = "./tools/adb shell input text 'W'&";
      const char * cs = command.c_str();
      system(cs);
  }
}

void touchcontrol::push_e() {
    if(lock == false)
    {
        string command;
        command = "./tools/adb shell input text 'e'&";
        const char * cs = command.c_str();
        system(cs);
    }
    else
    {
        string command;
        command = "./tools/adb shell input text 'E'&";
        const char * cs = command.c_str();
        system(cs);
    }
}

void touchcontrol::push_r() {
    if(lock == false)
    {
        string command;
        command = "./tools/adb shell input text 'r'&";
        const char * cs = command.c_str();
        system(cs);
    }
    else
    {
        string command;
        command = "./tools/adb shell input text 'R'&";
        const char * cs = command.c_str();
        system(cs);
    }
}

void touchcontrol::push_t() {
    if(lock == false)
    {
        string command;
        command = "./tools/adb shell input text 't'&";
        const char * cs = command.c_str();
        system(cs);
    }
    else
    {
        string command;
        command = "./tools/adb shell input text 'T'&";
        const char * cs = command.c_str();
        system(cs);
    }
}

void touchcontrol::push_z() {
    if(lock == false)
    {
        string command;
        command = "./tools/adb shell input text 'z'&";
        const char * cs = command.c_str();
        system(cs);
    }
    else
    {
        string command;
        command = "./tools/adb shell input text 'Z'&";
        const char * cs = command.c_str();
        system(cs);
    }
}

void touchcontrol::push_u() {
    if(lock == false)
    {
        string command;
        command = "./tools/adb shell input text 'u'&";
        const char * cs = command.c_str();
        system(cs);
    }
    else
    {
        string command;
        command = "./tools/adb shell input text 'U'&";
        const char * cs = command.c_str();
        system(cs);
    }
}

void touchcontrol::push_i() {
    if(lock == false)
    {
        string command;
        command = "./tools/adb shell input text 'i'&";
        const char * cs = command.c_str();
        system(cs);
    }
    else
    {
        string command;
        command = "./tools/adb shell input text 'I'&";
        const char * cs = command.c_str();
        system(cs);
    }
}

void touchcontrol::push_o() {
    if(lock == false)
    {
        string command;
        command = "./tools/adb shell input text 'o'&";
        const char * cs = command.c_str();
        system(cs);
    }
    else
    {
        string command;
        command = "./tools/adb shell input text 'O'&";
        const char * cs = command.c_str();
        system(cs);
    }
}

void touchcontrol::push_p() {
    if(lock == false)
    {
        string command;
        command = "./tools/adb shell input text 'p'&";
        const char * cs = command.c_str();
        system(cs);
    }
    else
    {
        string command;
        command = "./tools/adb shell input text 'P'&";
        const char * cs = command.c_str();
        system(cs);
    }
}

void touchcontrol::push_a() {
    if(lock == false)
    {
        string command;
        command = "./tools/adb shell input text 'a'&";
        const char * cs = command.c_str();
        system(cs);
    }
    else
    {
        string command;
        command = "./tools/adb shell input text 'A'&";
        const char * cs = command.c_str();
        system(cs);
    }
}

void touchcontrol::push_s() {
    if(lock == false)
    {
        string command;
        command = "./tools/adb shell input text 's'&";
        const char * cs = command.c_str();
        system(cs);
    }
    else
    {
        string command;
        command = "./tools/adb shell input text 'S'&";
        const char * cs = command.c_str();
        system(cs);
    }
}

void touchcontrol::push_d() {
    if(lock == false)
    {
        string command;
        command = "./tools/adb shell input text 'd'&";
        const char * cs = command.c_str();
        system(cs);
    }
    else
    {
        string command;
        command = "./tools/adb shell input text 'D'&";
        const char * cs = command.c_str();
        system(cs);
    }
}

void touchcontrol::push_f() {
    if(lock == false)
    {
        string command;
        command = "./tools/adb shell input text 'f'&";
        const char * cs = command.c_str();
        system(cs);
    }
    else
    {
        string command;
        command = "./tools/adb shell input text 'F'&";
        const char * cs = command.c_str();
        system(cs);
    }
}

void touchcontrol::push_g() {
    if(lock == false)
    {
        string command;
        command = "./tools/adb shell input text 'g'&";
        const char * cs = command.c_str();
        system(cs);
    }
    else
    {
        string command;
        command = "./tools/adb shell input text 'G'&";
        const char * cs = command.c_str();
        system(cs);
    }
}

void touchcontrol::push_h() {
    if(lock == false)
    {
        string command;
        command = "./tools/adb shell input text 'h'&";
        const char * cs = command.c_str();
        system(cs);
    }
    else
    {
        string command;
        command = "./tools/adb shell input text 'H'&";
        const char * cs = command.c_str();
        system(cs);
    }
}

void touchcontrol::push_j() {
    if(lock == false)
    {
        string command;
        command = "./tools/adb shell input text 'j'&";
        const char * cs = command.c_str();
        system(cs);
    }
    else
    {
        string command;
        command = "./tools/adb shell input text 'J'&";
        const char * cs = command.c_str();
        system(cs);
    }
}

void touchcontrol::push_k() {
    if(lock == false)
    {
        string command;
        command = "./tools/adb shell input text 'k'&";
        const char * cs = command.c_str();
        system(cs);
    }
    else
    {
        string command;
        command = "./tools/adb shell input text 'K'&";
        const char * cs = command.c_str();
        system(cs);
    }
}

void touchcontrol::push_l() {
    if(lock == false)
    {
        string command;
        command = "./tools/adb shell input text 'l'&";
        const char * cs = command.c_str();
        system(cs);
    }
    else
    {
        string command;
        command = "./tools/adb shell input text 'L'&";
        const char * cs = command.c_str();
        system(cs);
    }
}

void touchcontrol::push_y() {
    if(lock == false)
    {
        string command;
        command = "./tools/adb shell input text 'y'&";
        const char * cs = command.c_str();
        system(cs);
    }
    else
    {
        string command;
        command = "./tools/adb shell input text 'Y'&";
        const char * cs = command.c_str();
        system(cs);
    }
}

void touchcontrol::push_x() {
    if(lock == false)
    {
        string command;
        command = "./tools/adb shell input text 'x'&";
        const char * cs = command.c_str();
        system(cs);
    }
    else
    {
        string command;
        command = "./tools/adb shell input text 'X'&";
        const char * cs = command.c_str();
        system(cs);
    }
}

void touchcontrol::push_c() {
    if(lock == false)
    {
        string command;
        command = "./tools/adb shell input text 'c'&";
        const char * cs = command.c_str();
        system(cs);
    }
    else
    {
        string command;
        command = "./tools/adb shell input text 'C'&";
        const char * cs = command.c_str();
        system(cs);
    }
}

void touchcontrol::push_v() {
    if(lock == false)
    {
        string command;
        command = "./tools/adb shell input text 'v'&";
        const char * cs = command.c_str();
        system(cs);
    }
    else
    {
        string command;
        command = "./tools/adb shell input text 'V'&";
        const char * cs = command.c_str();
        system(cs);
    }
}

void touchcontrol::push_b() {
    if(lock == false)
    {
        string command;
        command = "./tools/adb shell input text 'b'&";
        const char * cs = command.c_str();
        system(cs);
    }
    else
    {
        string command;
        command = "./tools/adb shell input text 'B'&";
        const char * cs = command.c_str();
        system(cs);
    }
}

void touchcontrol::push_n() {
    if(lock == false)
    {
        string command;
        command = "./tools/adb shell input text 'n'&";
        const char * cs = command.c_str();
        system(cs);
    }
    else
    {
        string command;
        command = "./tools/adb shell input text 'N'&";
        const char * cs = command.c_str();
        system(cs);
    }
}

void touchcontrol::push_m() {
    if(lock == false)
    {
        string command;
        command = "./tools/adb shell input text 'm'&";
        const char * cs = command.c_str();
        system(cs);
    }
    else
    {
        string command;
        command = "./tools/adb shell input text 'M'&";
        const char * cs = command.c_str();
        system(cs);
    }
}

void touchcontrol::push_comma() {
    string command;
    command = "./tools/adb shell input keyevent KEYCODE_COMMA &";
    const char * cs = command.c_str();
    system(cs);
}

void touchcontrol::push_dot() {
    string command;
    command = "./tools/adb shell input keyevent KEYCODE_PERIOD &";
    const char * cs = command.c_str();
    system(cs);
}

void touchcontrol::push_slash() {
    string command;
    command = "./tools/adb shell input text '/'&";
    const char * cs = command.c_str();
    system(cs);
}


void touchcontrol::push_enter() {
    string command;
    command = "./tools/adb shell input keyevent KEYCODE_ENTER &";
    const char * cs = command.c_str();
    system(cs);
}


void touchcontrol::push_back() {
    string command;
    command = "./tools/adb shell input keyevent KEYCODE_DEL &";
    const char * cs = command.c_str();
    system(cs);
}


void touchcontrol::push_space() {
    string command;
    command = "./tools/adb shell input keyevent KEYCODE_SPACE &";
    const char * cs = command.c_str();
    system(cs);
}


void touchcontrol::push_up() {
    string command;
    command = "./tools/adb shell input keyevent KEYCODE_DPAD_UP &";
    const char * cs = command.c_str();
    system(cs);
}

void touchcontrol::push_left() {
    string command;
    command = "./tools/adb shell input keyevent KEYCODE_DPAD_LEFT &";
    const char * cs = command.c_str();
    system(cs);
}

void touchcontrol::push_right() {
    string command;
    command = "./tools/adb shell input keyevent KEYCODE_DPAD_RIGHT &";
    const char * cs = command.c_str();
    system(cs);
}

void touchcontrol::push_down() {
    string command;
    command = "./tools/adb shell input keyevent KEYCODE_DPAD_DOWN &";
    const char * cs = command.c_str();
    system(cs);
}

void touchcontrol::push_center() {
    string command;
    command = "./tools/adb shell input keyevent KEYCODE_DPAD_CENTER &";
    const char * cs = command.c_str();
    system(cs);
}

void touchcontrol::push_path() {
    string command;
    command = "./tools/adb shell input keyevent KEYCODE_DPAD_CENTER &";
    const char * cs = command.c_str();
    system(cs);
}


void touchcontrol::push_a_o() {
    string command;
    command = "./tools/adb shell input keyevent KEYCODE_APP_SWITCH &";
    const char * cs = command.c_str();
    system(cs);
}


void touchcontrol::push_a_h() {
    string command;
    command = "./tools/adb shell input keyevent KEYCODE_HOME &";
    const char * cs = command.c_str();
    system(cs);
}



void touchcontrol::push_a_b() {
    string command;
    command = "./tools/adb shell input keyevent KEYCODE_BACK &";
    const char * cs = command.c_str();
    system(cs);
}


void touchcontrol::push_1() {
    string command;
    command = "./tools/adb shell input text '1'&";
    const char * cs = command.c_str();
    system(cs);
}

void touchcontrol::push_2() {
    string command;
    command = "./tools/adb shell input text '2'&";
    const char * cs = command.c_str();
    system(cs);
}

void touchcontrol::push_3() {
    string command;
    command = "./tools/adb shell input text '3'&";
    const char * cs = command.c_str();
    system(cs);
}


void touchcontrol::push_4() {
    string command;
    command = "./tools/adb shell input text '4'&";
    const char * cs = command.c_str();
    system(cs);
}


void touchcontrol::push_5() {
    string command;
    command = "./tools/adb shell input text '5'&";
    const char * cs = command.c_str();
    system(cs);
}


void touchcontrol::push_6() {
    string command;
    command = "./tools/adb shell input text '6'&";
    const char * cs = command.c_str();
    system(cs);
}


void touchcontrol::push_7() {
    string command;
    command = "./tools/adb shell input text '7'&";
    const char * cs = command.c_str();
    system(cs);
}

void touchcontrol::push_8() {
    string command;
    command = "./tools/adb shell input text '8'&";
    const char * cs = command.c_str();
    system(cs);
}

void touchcontrol::push_9() {
    string command;
    command = "./tools/adb shell input text '9'&";
    const char * cs = command.c_str();
    system(cs);
}

void touchcontrol::push_0() {
    string command;
    command = "./tools/adb shell input text '0'&";
    const char * cs = command.c_str();
    system(cs);
}

void touchcontrol::push_power() {
    string command;
    command = "./tools/adb shell input keyevent KEYCODE_POWER &";
    const char * cs = command.c_str();
    system(cs);
}

void touchcontrol::push_caselock() {    
    if(lock == false)
    {
        lock = true;
        button_q->setText("Q");
        button_w->setText("W");
        button_e->setText("E");
        button_r->setText("R");
        button_z->setText("Z");
        button_t->setText("T");
        button_u->setText("U");
        button_i->setText("I");
        button_o->setText("O");
        button_p->setText("P");
        button_a->setText("A");
        button_s->setText("S");
        button_d->setText("D");
        button_f->setText("F");
        button_g->setText("G");
        button_h->setText("H");
        button_j->setText("J");
        button_k->setText("K");
        button_l->setText("L");
        button_y->setText("Y");
        button_x->setText("X");
        button_c->setText("C");
        button_v->setText("V");
        button_b->setText("B");
        button_n->setText("N");
        button_m->setText("M");
    } else {
        button_q->setText("q");
        button_w->setText("w");
        button_e->setText("e");
        button_r->setText("r");
        button_z->setText("t");
        button_t->setText("z");
        button_u->setText("u");
        button_i->setText("i");
        button_o->setText("o");
        button_p->setText("p");
        button_a->setText("a");
        button_s->setText("s");
        button_d->setText("d");
        button_f->setText("f");
        button_g->setText("g");
        button_h->setText("h");
        button_j->setText("j");
        button_k->setText("k");
        button_l->setText("l");
        button_y->setText("y");
        button_x->setText("x");
        button_c->setText("c");
        button_v->setText("v");
        button_b->setText("b");
        button_n->setText("n");
        button_m->setText("m");
        lock = false;
    }
}

void touchcontrol::push_text_enter() {
  QString text;
  text = plainTextEdit->toPlainText();

  string command;
  command = "./tools/adb shell input text '" + text.toStdString() + "'&";
  const char * cs = command.c_str();
  system(cs);
}

void touchcontrol::push_swipe() {
    dataExp = new QComboBox();
    dataExp->resize(400,100);
    dataExp->addItem("1440x2560", "0");
    dataExp->addItem("1080x1920", "1");
    dataExp->addItem("768x1280", "2");
    dataExp->addItem("720x1280", "3");
    dataExp->addItem("720x1200", "4");
    dataExp->addItem("540x960", "5");
    dataExp->addItem("480x800", "6");
    dataExp->addItem("240x320", "7");
    dataExp->setWindowTitle("Choose your screen resolution");

    connect(dataExp, SIGNAL(activated(QString)), this, SLOT(qcombo(QString)));


    dataExp->show();
}


void touchcontrol::menuExit() {
    QApplication::quit();
}

void touchcontrol::push_12() {
    newSCharacter = new SpecialCharacter();
    newSCharacter->show();
}

void touchcontrol::about() {
    newAbout = new About(0);
    newAbout->show();
}

void touchcontrol::qcombo(QString i) {
    if(i.toStdString() == "1440x2560")
    {
        string command;
        command = "./tools/adb shell input swipe 562 1800 1440 1800";
        const char * cs = command.c_str();
        system(cs);
    } else if (i.toStdString() == "1080x1920") {
        string command2;
        command2 = "./tools/adb shell input swipe 722 1390 1340 1390";
        const char * cs2 = command2.c_str();
        system(cs2);
    } else if (i.toStdString() == "768x1280") {
        string command3;
        command3 = "./tools/adb shell input swipe 300 900 720 900";
        const char * cs3 = command3.c_str();
        system(cs3);
    } else if (i.toStdString() == "720x1280") {
        string command4;
        command4 = "./tools/adb shell input swipe 359 907 660 907";
        const char * cs4 = command4.c_str();
        system(cs4);
    } else if (i.toStdString() == "540x960") {
        string command5;
        command5 = "./tools/adb shell input swipe 270 680 509 676";
        const char * cs5 = command5.c_str();
        system(cs5);
    } else if (i.toStdString() == "480x800") {
        string command6;
        command6 = "./tools/adb shell input swipe 240 570 560 570";
        const char * cs6 = command6.c_str();
        system(cs6);
    } else if (i.toStdString() == "240x320") {
        string command7;
        command7 = "./tools/adb shell input swipe 120 230 213 230";
        const char * cs7 = command7.c_str();
        system(cs7);
    }


    dataExp->close();
}

void touchcontrol::closeEvent(QCloseEvent *) {
    qApp->quit();
}
