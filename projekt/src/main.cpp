#pragma once
#include <iostream>
#include "menu.cpp"
#include "mainwindow.h"

#include <QApplication>

using namespace std;


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Menu mainMenu;
    MainWindow w;
    w.show();
    return a.exec();
}

