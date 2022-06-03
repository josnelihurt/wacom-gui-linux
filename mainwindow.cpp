#include <libwacom/libwacom.h>

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connectSignals();

}

void MainWindow::connectSignals()
{
    QObject::connect(ui->wid_btn, SIGNAL(released()),
                     this, SLOT(handleSelectWindow()));
    QObject::connect(ui->set_to_wnd_btn, SIGNAL(released()),
                     this, SLOT(handleSetToWindow()));
    QObject::connect(ui->set_to_dsk_btn, SIGNAL(released()),
                     this, SLOT(handleSetToDesktop()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleSelectWindow()
{

}

void MainWindow::handleSetToWindow()
{

}

void MainWindow::handleSetToDesktop()
{

}
