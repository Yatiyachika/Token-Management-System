#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "token.h"
#include "customer.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnGenerate_clicked();

    void on_btnServe_clicked();

    void on_btnExit_clicked();

private:
    Ui::MainWindow *ui;
    Token currentToken;
    int tokenCounter = 1;
private:
    void displayToken(const Token& t);

};
#endif // MAINWINDOW_H
