/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QPushButton *btnServe;
    QPushButton *btnGenerate;
    QPushButton *btnExit;
    QLabel *label;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *lblTokenNumber;
    QLabel *lblCustomerName;
    QLabel *lblPurpose;
    QLabel *lblGeneratedAt;
    QLabel *lblServedAt;
    QLabel *lblStatus;
    QLineEdit *editName;
    QLineEdit *editPurpose;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(792, 537);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        btnServe = new QPushButton(groupBox);
        btnServe->setObjectName("btnServe");
        btnServe->setGeometry(QRect(290, 430, 189, 29));
        btnGenerate = new QPushButton(groupBox);
        btnGenerate->setObjectName("btnGenerate");
        btnGenerate->setGeometry(QRect(20, 430, 201, 29));
        btnExit = new QPushButton(groupBox);
        btnExit->setObjectName("btnExit");
        btnExit->setGeometry(QRect(550, 430, 191, 29));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(90, -10, 611, 91));
        QFont font;
        font.setPointSize(28);
        label->setFont(font);
        formLayoutWidget = new QWidget(groupBox);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(40, 170, 661, 231));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        lblTokenNumber = new QLabel(formLayoutWidget);
        lblTokenNumber->setObjectName("lblTokenNumber");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, lblTokenNumber);

        lblCustomerName = new QLabel(formLayoutWidget);
        lblCustomerName->setObjectName("lblCustomerName");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, lblCustomerName);

        lblPurpose = new QLabel(formLayoutWidget);
        lblPurpose->setObjectName("lblPurpose");

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, lblPurpose);

        lblGeneratedAt = new QLabel(formLayoutWidget);
        lblGeneratedAt->setObjectName("lblGeneratedAt");

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, lblGeneratedAt);

        lblServedAt = new QLabel(formLayoutWidget);
        lblServedAt->setObjectName("lblServedAt");

        formLayout->setWidget(4, QFormLayout::ItemRole::LabelRole, lblServedAt);

        lblStatus = new QLabel(formLayoutWidget);
        lblStatus->setObjectName("lblStatus");

        formLayout->setWidget(5, QFormLayout::ItemRole::LabelRole, lblStatus);

        editName = new QLineEdit(groupBox);
        editName->setObjectName("editName");
        editName->setGeometry(QRect(290, 80, 151, 28));
        editPurpose = new QLineEdit(groupBox);
        editPurpose->setObjectName("editPurpose");
        editPurpose->setGeometry(QRect(310, 120, 113, 28));

        horizontalLayout->addWidget(groupBox);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        btnServe->setText(QCoreApplication::translate("MainWindow", "Serve Token", nullptr));
        btnGenerate->setText(QCoreApplication::translate("MainWindow", "GenerateToken", nullptr));
        btnExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Token Management System", nullptr));
        lblTokenNumber->setText(QCoreApplication::translate("MainWindow", "Token Number :", nullptr));
        lblCustomerName->setText(QCoreApplication::translate("MainWindow", "Customer Name:", nullptr));
        lblPurpose->setText(QCoreApplication::translate("MainWindow", "Purpose:", nullptr));
        lblGeneratedAt->setText(QCoreApplication::translate("MainWindow", "Generated At:", nullptr));
        lblServedAt->setText(QCoreApplication::translate("MainWindow", "Served At:", nullptr));
        lblStatus->setText(QCoreApplication::translate("MainWindow", "Status:", nullptr));
        editName->setText(QCoreApplication::translate("MainWindow", "Enter customer name", nullptr));
        editPurpose->setText(QCoreApplication::translate("MainWindow", "Enter Purpose", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
