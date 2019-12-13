#include "calculator.h"
#include "ui_calculator.h"

Calculator::Calculator(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Calculator)
{
    ui->setupUi(this);
}

Calculator::~Calculator()
{
    delete ui;
}

//click number button
void Calculator::on_pushButton_1_clicked()
{
    if(QString::compare(ui->label_sign->text(), "")==0){
        ui->lineEdit_first->setText(ui->lineEdit_first->text() + "1");
    }else{
        ui->lineEdit_second->setText(ui->lineEdit_second->text()+"1");
    }
}

void Calculator::on_pushButton_2_clicked()
{
    if(QString::compare(ui->label_sign->text(), "")==0){
        ui->lineEdit_first->setText(ui->lineEdit_first->text() + "2");
    }else{
        ui->lineEdit_second->setText(ui->lineEdit_second->text()+"2");
    }
}

void Calculator::on_pushButton_3_clicked()
{
    if(QString::compare(ui->label_sign->text(), "")==0){
        ui->lineEdit_first->setText(ui->lineEdit_first->text() + "3");
    }else{
        ui->lineEdit_second->setText(ui->lineEdit_second->text()+"3");
    }
}

void Calculator::on_pushButton_4_clicked()
{
    if(QString::compare(ui->label_sign->text(), "")==0){
        ui->lineEdit_first->setText(ui->lineEdit_first->text() + "4");
    }else{
        ui->lineEdit_second->setText(ui->lineEdit_second->text()+"4");
    }
}

void Calculator::on_pushButton_5_clicked()
{
    if(QString::compare(ui->label_sign->text(), "")==0){
        ui->lineEdit_first->setText(ui->lineEdit_first->text() + "5");
    }else{
        ui->lineEdit_second->setText(ui->lineEdit_second->text()+"5");
    }
}

void Calculator::on_pushButton_6_clicked()
{
    if(QString::compare(ui->label_sign->text(), "")==0){
        ui->lineEdit_first->setText(ui->lineEdit_first->text() + "6");
    }else{
        ui->lineEdit_second->setText(ui->lineEdit_second->text()+"6");
    }
}

void Calculator::on_pushButton_7_clicked()
{
    if(QString::compare(ui->label_sign->text(), "")==0){
        ui->lineEdit_first->setText(ui->lineEdit_first->text() + "7");
    }else{
        ui->lineEdit_second->setText(ui->lineEdit_second->text()+"7");
    }
}

void Calculator::on_pushButton_8_clicked()
{
    if(QString::compare(ui->label_sign->text(), "")==0){
        ui->lineEdit_first->setText(ui->lineEdit_first->text() + "8");
    }else{
        ui->lineEdit_second->setText(ui->lineEdit_second->text()+"8");
    }
}

void Calculator::on_pushButton_9_clicked()
{
    if(QString::compare(ui->label_sign->text(), "")==0){
        ui->lineEdit_first->setText(ui->lineEdit_first->text() + "9");
    }else{
        ui->lineEdit_second->setText(ui->lineEdit_second->text()+"9");
    }
}

void Calculator::on_pushButton_0_clicked()
{
    if(QString::compare(ui->label_sign->text(), "")==0){
        ui->lineEdit_first->setText(ui->lineEdit_first->text() + "0");
    }else{
        ui->lineEdit_second->setText(ui->lineEdit_second->text()+"0");
    }
}

//click sign button
void Calculator::on_pushButton_pls_clicked()
{
    ui->label_sign->setText("+");
}

void Calculator::on_pushButton_min_clicked()
{
    ui->label_sign->setText("-");
}

void Calculator::on_pushButton_mul_clicked()
{
    ui->label_sign->setText("*");
}

void Calculator::on_pushButton_div_clicked()
{
    ui->label_sign->setText("/");
}



void Calculator::on_pushButton_c_clicked()
{
    if(QString::compare(ui->lineEdit_first->text(), "")!=0 && QString::compare(ui->label_sign->text(), "")==0){
        ui->lineEdit_first->setText("");
    }else if(QString::compare(ui->label_sign->text(), "")!=0 && QString::compare(ui->lineEdit_first->text(), "")!=0 && QString::compare(ui->lineEdit_second->text(), "")==0){
        ui->label_sign->setText("");
    }else if(QString::compare(ui->lineEdit_first->text(), "")==0 && QString::compare(ui->label_sign->text(), "")!=0){
        ui->label_sign->setText("");
    }else{
        ui->lineEdit_second->setText("");
    }
}


void Calculator::on_pushButton_ac_clicked()
{
    ui->lineEdit_first->setText("");
    ui->label_sign->setText("");
    ui->lineEdit_second->setText("");
    ui->lineEdit_result->setText("");
}

void Calculator::on_pushButton_result_clicked()
{
    first = ui->lineEdit_first->text().toDouble();
    second = ui->lineEdit_second->text().toDouble();

    if(QString::compare(ui->label_sign->text(), "+")==0){
        ui->lineEdit_result->setText(QString::number(first + second));
    }else if(QString::compare(ui->label_sign->text(), "-")==0){
        ui->lineEdit_result->setText(QString::number(first - second));
    }else if(QString::compare(ui->label_sign->text(), "*")==0){
        ui->lineEdit_result->setText(QString::number(first * second));
    }else{
        ui->lineEdit_result->setText(QString::number(first / second));
    }
}

void Calculator::on_pushButton_close_clicked()
{
    this->close();
}
