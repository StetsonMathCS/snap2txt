/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QPlainTextEdit *plainTextEdit;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label;
    QWidget *page_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QPushButton *pushButton_2;
    QLabel *label_4;
    QLabel *label_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1049, 666);
        QFont font;
        font.setPointSize(24);
        MainWindow->setFont(font);
        MainWindow->setCursor(QCursor(Qt::ArrowCursor));
        MainWindow->setStyleSheet(QLatin1String("plainTextEdit{background-color : white}\n"
"QWidget{background-color: black}\n"
"QPushButton { color: black; background-color: linen }\n"
""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(170, 520, 121, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("Consolas"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        pushButton->setFont(font1);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QLatin1String("QWidget{background-color: random}\n"
"QPushButton { color: black; background-color: linen }\n"
"QPushButton_4 {color:black; background-color: linen}"));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(650, 520, 121, 41));
        pushButton_4->setFont(font1);
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        plainTextEdit = new QPlainTextEdit(centralWidget);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(420, 130, 551, 371));
        plainTextEdit->setAutoFillBackground(false);
        plainTextEdit->setStyleSheet(QStringLiteral(""));
        plainTextEdit->setBackgroundVisible(false);
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(80, 110, 321, 401));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        label = new QLabel(page);
        label->setObjectName(QStringLiteral("label"));
        label->setEnabled(true);
        label->setGeometry(QRect(-24, 20, 301, 381));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        scrollArea = new QScrollArea(page_2);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(10, 20, 271, 371));
        scrollArea->setMaximumSize(QSize(271, 16777215));
        scrollArea->viewport()->setProperty("cursor", QVariant(QCursor(Qt::CrossCursor)));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 269, 369));
        scrollAreaWidgetContents->setMinimumSize(QSize(0, 369));
        scrollArea->setWidget(scrollAreaWidgetContents);
        stackedWidget->addWidget(page_2);
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(930, 510, 41, 21));
        QFont font2;
        font2.setFamily(QStringLiteral("Consolas"));
        pushButton_2->setFont(font2);
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setToolTipDuration(-1);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(420, 110, 47, 13));
        label_4->setFont(font2);
        label_4->setStyleSheet(QStringLiteral("QLabel{color : white}"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, 110, 47, 13));
        label_2->setStyleSheet(QStringLiteral("QLabel{color : white}"));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(830, 510, 41, 21));
        pushButton_3->setFont(font2);
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3->setToolTipDuration(-1);
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(880, 510, 41, 21));
        pushButton_5->setFont(font2);
        pushButton_5->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_5->setToolTipDuration(-1);
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(10, 0, 171, 51));
        QFont font3;
        font3.setFamily(QStringLiteral("Consolas"));
        font3.setPointSize(26);
        font3.setBold(true);
        font3.setWeight(75);
        pushButton_6->setFont(font3);
        pushButton_6->setStyleSheet(QStringLiteral("QPushButton{background-color: black; color:white}"));
        MainWindow->setCentralWidget(centralWidget);
        pushButton->raise();
        pushButton_4->raise();
        plainTextEdit->raise();
        stackedWidget->raise();
        pushButton_2->raise();
        label_4->raise();
        label_2->raise();
        label_2->raise();
        pushButton_3->raise();
        pushButton_5->raise();
        pushButton_6->raise();
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setMovable(false);
        mainToolBar->setFloatable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        MainWindow->insertToolBarBreak(mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
#ifndef QT_NO_TOOLTIP
        pushButton->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Take Picture and Make it Text :)</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        pushButton->setText(QApplication::translate("MainWindow", "Snap2Txt", 0));
#ifndef QT_NO_TOOLTIP
        pushButton_4->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>saves text as .txt file</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pushButton_4->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        pushButton_4->setText(QApplication::translate("MainWindow", "Save .txt", 0));
        plainTextEdit->setPlainText(QApplication::translate("MainWindow", "Welcome to Snap2Txt!\n"
"Your Text Will Appear Here:\n"
"\n"
"", 0));
        label->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_2->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Clear Text Box</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        pushButton_2->setText(QApplication::translate("MainWindow", "Clear", 0));
        label_4->setText(QApplication::translate("MainWindow", "Text:", 0));
        label_2->setText(QApplication::translate("MainWindow", "Camera:", 0));
#ifndef QT_NO_TOOLTIP
        pushButton_3->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Undo ~ Clear Cannot Be Undone</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        pushButton_3->setText(QApplication::translate("MainWindow", "Undo", 0));
#ifndef QT_NO_TOOLTIP
        pushButton_5->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Redo</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        pushButton_5->setText(QApplication::translate("MainWindow", "Redo", 0));
        pushButton_6->setText(QApplication::translate("MainWindow", "Snap2Txt", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
