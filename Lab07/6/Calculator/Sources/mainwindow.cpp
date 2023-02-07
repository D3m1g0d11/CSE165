#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>

double firstNum;
bool userIsTypingSecondNumber = false;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton_0, SIGNAL(released()), this, SLOT(digitPressed())); //Buttons 0-9
    connect(ui->pushButton_1, SIGNAL(released()), this, SLOT(digitPressed()));
    connect(ui->pushButton_2, SIGNAL(released()), this, SLOT(digitPressed()));
    connect(ui->pushButton_3, SIGNAL(released()), this, SLOT(digitPressed()));
    connect(ui->pushButton_4, SIGNAL(released()), this, SLOT(digitPressed()));
    connect(ui->pushButton_5, SIGNAL(released()), this, SLOT(digitPressed()));
    connect(ui->pushButton_6, SIGNAL(released()), this, SLOT(digitPressed()));
    connect(ui->pushButton_7, SIGNAL(released()), this, SLOT(digitPressed()));
    connect(ui->pushButton_8, SIGNAL(released()), this, SLOT(digitPressed()));
    connect(ui->pushButton_9, SIGNAL(released()), this, SLOT(digitPressed()));

    connect(ui->pushButton_PlusMinus, SIGNAL(released()), this, SLOT(unary_operation_pressed())); // +/- button
    connect(ui->pushButton_Percent, SIGNAL(released()), this, SLOT(unary_operation_pressed()));// % button

    connect(ui->pushButton_Add, SIGNAL(released()), this, SLOT(binary_operation_pressed())); //add
    connect(ui->pushButton_Minus, SIGNAL(released()), this, SLOT(binary_operation_pressed())); //sub
    connect(ui->pushButton_Multiply, SIGNAL(released()), this, SLOT(binary_operation_pressed())); //mult
    connect(ui->pushButton_Divide, SIGNAL(released()), this, SLOT(binary_operation_pressed())); //div

    // Allows buttons to be checked
    ui->pushButton_Add->setCheckable(true);
    ui->pushButton_Minus->setCheckable(true);
    ui->pushButton_Multiply->setCheckable(true);
    ui->pushButton_Divide->setCheckable(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::digitPressed()
{
    QPushButton * button = (QPushButton*)sender();

    double labelNumber;
    QString newLabel;

    if((ui->pushButton_Add->isChecked() || ui->pushButton_Minus->isChecked() || ui->pushButton_Multiply->isChecked() || ui->pushButton_Divide->isChecked()) && (!userIsTypingSecondNumber))
    {
        labelNumber = button->text().toDouble();
        userIsTypingSecondNumber = true;
        newLabel = QString::number(labelNumber, 'g', 15);
    }
    else
    {
        if(ui->label->text().contains('.') && button->text() == "0")
        {
            newLabel = ui->label->text() + button->text();
        }
        else
        {
            labelNumber = (ui->label->text() + button->text()).toDouble();
            newLabel = QString::number(labelNumber, 'g', 15);
        }
    }

    ui->label->setText(newLabel);

}


void MainWindow::on_pushButton_Dot_released()
{
    ui->label->setText(ui->label->text()+ '.'); //if else statement can be used to check if there's a decimal already here
}

void MainWindow::unary_operation_pressed()
{
    QPushButton * button = (QPushButton*)sender();
    double labelNumber;
    QString newLabel;
    if(button->text() == "+/-"){
        labelNumber = ui->label->text().toDouble();
        labelNumber = labelNumber * -1;
        newLabel = QString::number(labelNumber, 'g', 15);
        ui->label->setText(newLabel);
    }

    if(button->text() == "%"){
        labelNumber = ui->label->text().toDouble();
        labelNumber = labelNumber * 0.01;
        newLabel = QString::number(labelNumber, 'g', 15);
        ui->label->setText(newLabel);
    }
}


void MainWindow::on_pushButton_Clear_released()
{
    ui->pushButton_Add->setChecked(false);
    ui->pushButton_Minus->setChecked(false);
    ui->pushButton_Multiply->setChecked(false);
    ui->pushButton_Divide->setChecked(false);

    userIsTypingSecondNumber = false;

    ui->label->setText("0");
}


void MainWindow::on_pushButton_Equal_released()
{
    double labelNumber, secondNum;
    QString newLabel;

    secondNum = ui->label->text().toDouble();

    if(ui->pushButton_Add->isChecked())
    {
        labelNumber = firstNum + secondNum;
        newLabel = QString::number(labelNumber, 'g', 15);
        ui->label->setText(newLabel);
        ui->pushButton_Add -> setChecked(false);
    }
    else if(ui->pushButton_Minus->isChecked())
    {
        labelNumber = firstNum - secondNum;
        newLabel = QString::number(labelNumber, 'g', 15);
        ui->label->setText(newLabel);
        ui->pushButton_Minus -> setChecked(false);
    }
    else if(ui->pushButton_Multiply->isChecked())
    {
        labelNumber = firstNum * secondNum;
        newLabel = QString::number(labelNumber, 'g', 15);
        ui->label->setText(newLabel);
        ui->pushButton_Multiply -> setChecked(false);
    }
    else if(ui->pushButton_Divide->isChecked())
    {
        labelNumber = firstNum / secondNum;
        newLabel = QString::number(labelNumber, 'g', 15);
        ui->label->setText(newLabel);
        ui->pushButton_Divide -> setChecked(false);
    }
    userIsTypingSecondNumber = false;
}

void MainWindow::binary_operation_pressed()
{
    QPushButton * button = (QPushButton*)sender();

    firstNum = ui->label->text().toDouble();

    button->setChecked(true);
}
