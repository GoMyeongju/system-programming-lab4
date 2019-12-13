#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QDialog>

namespace Ui {
class Calculator;
}

class Calculator : public QDialog
{
    Q_OBJECT

public:
    explicit Calculator(QWidget *parent = 0);
    ~Calculator();

private slots:
    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_0_clicked();

    void on_pushButton_pls_clicked();

    void on_pushButton_min_clicked();

    void on_pushButton_mul_clicked();

    void on_pushButton_div_clicked();

    void on_pushButton_c_clicked();

    void on_pushButton_ac_clicked();

    void on_pushButton_result_clicked();

    void on_pushButton_close_clicked();

private:
    Ui::Calculator *ui;
    double first, second; //variable declaration
};

#endif // CALCULATOR_H
