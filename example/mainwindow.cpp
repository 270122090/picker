#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>
#include <QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->comboBox->addItem("tick");
    ui->comboBox->addItem("tack");
    ui->comboBox->addItem("toe");
    //icons to names in txt

    ui->comboBox_2->addItem(QIcon(":/res/Images/cat.jfif"),"Cat");
    ui->comboBox_2->addItem(QIcon(":/res/Images/duck.jfif"),"Duck");



    // or additesm(list)
    //insertItem(3)
    //pull data
    // ui->comboBox->currentItem()
    //ui->comboBox->currentIndes(); -- this is the inumber in the item
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
//QMessageBox:: information(this,"The Message", "wow" +QString::number(ui->comboBox->currentText());
    QMessageBox:: information(this,"The Message","wow you selected option " +QString::number(ui->comboBox->currentIndex()));
}

