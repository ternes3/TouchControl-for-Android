#ifndef TOUCHCONTROL_H
#define TOUCHCONTROL_H

#include "ui_keyboard.h"
#include "specialcharacter.h"
#include "about.h"

#include <QComboBox>

static bool lock;

class touchcontrol : public QMainWindow, public Ui::MainWindow{
        Q_OBJECT
 
        public:
                touchcontrol (QMainWindow *parent = 0);
                ~touchcontrol() ;
        private:
                SpecialCharacter *newSCharacter;
                QComboBox *dataExp;
                About *newAbout;
        private slots:
          void push_q();
          void push_w();
          void push_e();
          void push_r();
          void push_t();
          void push_z();
          void push_u();
          void push_i();
          void push_o();
          void push_p();
          void push_a();
          void push_s();
          void push_d();
          void push_f();
          void push_g();
          void push_h();
          void push_j();
          void push_k();
          void push_l();
          void push_y();
          void push_x();
          void push_c();
          void push_v();
          void push_b();
          void push_n();
          void push_m();
          void push_comma();
          void push_dot();
          void push_center();
          void push_slash();
          void push_enter();
          void push_back();
          void push_space();
          void push_up();
          void push_left();
          void push_right();
          void push_down();
          void push_path();
          void push_a_o();
          void push_a_h();
          void push_a_b();
          void push_1();
          void push_2();
          void push_3();
          void push_4();
          void push_5();
          void push_6();
          void push_7();
          void push_8();
          void push_9();
          void push_0();
          void push_12();
          void push_power();
          void push_caselock();
          void push_text_enter();
          void push_swipe();
          void about();
          void qcombo(QString);
          void menuExit();
     protected:
          void  closeEvent(QCloseEvent*);
};
#endif 
