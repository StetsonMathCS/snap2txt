#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QApplication>

#include <QCamera>
#include <QCameraImageCapture>
#include <QMediaRecorder>
#include <QMainWindow>
#include <QCameraViewfinder>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    QCamera *camera=new QCamera(this);
    QCameraViewfinder *viewfinder = new QCameraViewfinder(this);

    explicit MainWindow(QWidget *parent = 0);
    QString getText();
    QPixmap getImage();
    ~MainWindow();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_plainTextEdit_textChanged();

    void on_plainTextEdit_windowIconTextChanged(const QString &iconText);

    void startCamera();

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
