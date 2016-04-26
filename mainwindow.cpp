#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->plainTextEdit->setStyleSheet("background: url(snap2txtscaled2.jpg)");
 //------------------ START CAMERA -----------------
    ui->stackedWidget->setCurrentIndex(1);
    ui->scrollArea->setWidget(viewfinder);
    camera->setViewfinder(viewfinder);
    camera->start();
//camera will be stopped when snap2txt button is pressed
}


//Retrives text from another file
QString MainWindow::getText()
{
    //string test = qtest->setText();
    //str = QString::fromStdString(test);
    return str;

}

/*loads image
(Will not be needed unless we give option to load image to be read)
QPixmap MainWindow::getImage()
{
  ui->scrollArea->close();
  QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),
                                                    "",
                                                    tr("Images (*.png *.xpm *.jpg)"));
  QPixmap image(fileName);
  return image;
}
*/

MainWindow::~MainWindow()
{
    delete ui;
}

/*
Load Images ~ FUTURE? (BUTTON REMOVED)
(Will not be needed unless we give option to load image to be read)
void MainWindow::on_pushButton_3_clicked()
{
    camera->stop();
    ui->stackedWidget->setCurrentIndex(0);
    ui->label->setScaledContents(true);
    ui->label->setPixmap(getImage());
    cout << ui->stackedWidget->currentIndex() << endl;
}
*/


//Snap2Txt Button
/*This button will need to:
 * ~ Take Picture
 * ~ Save Picture
 * ~ Stop Camera [DONE]
 * ~ Turn off camera
 * ~ make text pop up
 * ~ Show the picture just taken (Stops the camera which basically shows what
 *                                you just took a picture of, so loading pics is
 *                                now uneccessary)
 */
void MainWindow::on_pushButton_clicked()
{
    camera->stop(); //stop camera [can be removed for multiple pictures, but showing image will be necessary
    ui->plainTextEdit->setStyleSheet("background-color: white"); //removes image from background
    ui->plainTextEdit->insertPlainText(MainWindow::getText());

}



//save .txt button
void MainWindow::on_pushButton_4_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save File"), QString(),
               tr("Text Files (*.txt)"));

       if (!fileName.isEmpty()) {
           QFile file(fileName);
           if (!file.open(QIODevice::WriteOnly)) {
               // error message
           } else {
               QTextStream stream(&file);
               stream << ui->plainTextEdit->toPlainText();
               stream.flush();
               file.close();
           }
       }
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->plainTextEdit->clear();
    //ui->plainTextEdit->setStyleSheet("background: url(snap2txtscaled2.jpg)");
    ui->plainTextEdit->setStyleSheet("background-color : white");
}

//undo button
void MainWindow::on_pushButton_3_clicked()
{
    ui->plainTextEdit->undo();
}


//redo button
void MainWindow::on_pushButton_5_clicked()
{
    ui->plainTextEdit->redo();
}

//hidden button
void MainWindow::on_pushButton_6_clicked()
{
        ui->plainTextEdit->setStyleSheet("background: url(snap2txtscaled2.jpg)");
}
