#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <QDateTime>
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lblTokenNumber->setText("--");
    ui->lblCustomerName->setText("--");
    ui->lblPurpose->setText("--");
    ui->lblGeneratedAt->setText("--");
    ui->lblServedAt->setText("--");
    ui->lblStatus->setText("No Token");
    connect(ui->btnExit, &QPushButton::clicked, this, &QMainWindow::close);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::displayToken(const Token& t)
{
    ui->lblTokenNumber->setText("#" + QString::number(t.getTokenNumber()));
    ui->lblCustomerName->setText(QString::fromStdString(t.getCustomer().getName()));
    ui->lblPurpose->setText(QString::fromStdString(t.getCustomer().getPurpose()));
    ui->lblGeneratedAt->setText(QString::fromStdString(t.getCustomer().getTime()));
    ui->lblServedAt->setText(QString::fromStdString(t.getServedTime()));
    ui->lblStatus->setText(QString::fromStdString(t.getStatus()));
}

void MainWindow::on_btnGenerate_clicked()
{
QString name = ui->editName->text();
    QString purpose = ui->editPurpose->text();

    // Validation
    if (name.isEmpty() || purpose.isEmpty())
        return;

    Customer c(
        name.toStdString(),
        purpose.toStdString()
        );
    currentToken = Token(tokenCounter++, c);

    displayToken(currentToken);
    ui->editName->clear();
    ui->editPurpose->clear();
}


void MainWindow::on_btnServe_clicked()
{
    if (ui->lblTokenNumber->text() == "--")
    {
        QMessageBox::warning(this, "Error", "No token to serve");
        return;
    }

    QString tokenNo = ui->lblTokenNumber->text();
    QString name = ui->lblCustomerName->text();
    QString purpose = ui->lblPurpose->text();
    QString generatedAt = ui->lblGeneratedAt->text();
    QString servedAt = QDateTime::currentDateTime().toString("hh:mm AP");

    QFile file("served_tokens.txt");

    if (!file.open(QIODevice::Append | QIODevice::Text))
    {
        QMessageBox::critical(this, "File Error", "Could not open file");
        return;
    }

    QTextStream out(&file);
    out << "Token No: " << tokenNo << "\n";
    out << "Name: " << name << "\n";
    out << "Purpose: " << purpose << "\n";
    out << "Generated At: " << generatedAt << "\n";
    out << "Served At: " << servedAt << "\n";
    out << "-----------------------------\n";

    file.close();

    currentToken.setStatus("Served");
    currentToken.setServedTime(servedAt.toStdString());

    displayToken(currentToken);

    QMessageBox::information(this, "Success", "Token served & saved successfully");
}



void MainWindow::on_btnExit_clicked()
{
    close();
}

