#include <iostream>
#include "mainwindow.hpp"
#include "menu.hpp"

#include <QApplication>

using namespace std;


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}

