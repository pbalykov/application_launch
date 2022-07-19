#include <QKeyEvent>
#include <cstring>
#include <unistd.h>

#include "mainwindow.h"
#include "ui_mainwindow.h"


static void freeArr(char** data, int size) {
    for (auto i = 0; i < size; i++) {
        delete[] data[i];
    }
    delete[] data;
}

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_runProg_clicked() {
    QString text = this->ui->input->text();//.toStdString()
    QStringList list = text.split( QRegExp("(\\ |\\t|\\n)") );
    char** data = new char*[list.size() + 1];
    for (auto i = 0; i < list.size(); i++) {
        data[i] = new char[list[i].size() + 1];
        std::strcpy(data[i], list[i].toLocal8Bit().constData());
    }
    data[list.size()] = NULL;
    execvp(data[0], data);
    freeArr(data, list.size());
    return ;
}

void MainWindow::keyPressEvent(QKeyEvent *event) {
    int key=event->key();
    switch (key) {
        case Qt::Key_Return :
            this->on_runProg_clicked();
            break;
        case Qt::Key_Escape :
            this->on_exit_clicked();
            break;
        default:
            break;
    }
    return ;
}


void MainWindow::on_exit_clicked() {
	this->close();
}

