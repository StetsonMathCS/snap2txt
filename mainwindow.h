#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <iostream>
#include <QApplication>
//#include <QCamera>
//#include <QCameraImageCapture>
#include <QMainWindow>
//#include <QMediaService>
//#include <QMediaRecorder>
//#include <QCameraViewfinder>
//#include <QCamera>
//#include <QCameraInfo>
//#include <QMediaMetaData>
#include <QtWidgets>
#include <QWidget>
using namespace std;
namespace Ui
{
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
  //  QCamera *camera=new QCamera(this);
   // QCameraViewfinder *viewfinder = new QCameraViewfinder(this);
    //create objects here

    explicit MainWindow(QWidget *parent = 0);
    QString getText();
    QPixmap getImage();
    ~MainWindow();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_4_clicked();

    void on_plainTextEdit_destroyed();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::MainWindow *ui;
    QString str;

};

#endif // MAINWINDOW_H
