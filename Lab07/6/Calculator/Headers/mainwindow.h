#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

private slots:
    void digitPressed();

    void on_pushButton_Dot_released();
    void unary_operation_pressed();

    void on_pushButton_Clear_released();
    void on_pushButton_Equal_released();

    void binary_operation_pressed();
};
#endif // MAINWINDOW_H
