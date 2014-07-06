#ifndef SPECIALCHARACTER_H
#define SPECIALCHARACTER_H

#include <QWidget>

namespace Ui {
    class SpecialCharacter;
}

class SpecialCharacter : public QWidget
{
    Q_OBJECT

public:
    explicit SpecialCharacter(QWidget *parent = 0);
    ~SpecialCharacter();
private:
    Ui::SpecialCharacter *ui;
private slots:
    void push_button_ok();
    void push_at();
    void push_1();
    void push_dollar();
    void push_euro();
    void push_procnet();
    void push_star();
    void push_bslash();
    void push_minus();
    void push_equal();
    void push_2();
    void push_3();
    void push_4();
    void push_5();
    void push_dpoint();
    void push_6();
    void push_7();
    void push_8();
    void push_ue();
    void push_ae();
    void push_UE();
    void push_AE();
    void push_OE();
    void push_oe();
    void push_10();
    void push_plus();
    void push_9();
};

#endif // SPECIALCHARACTER_H
