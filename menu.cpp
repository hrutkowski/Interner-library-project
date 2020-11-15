#pragma once 
#include <iostream>
#include "menu.hpp"
#include "userInput.cpp"

using namespace std;

void Menu::chooseMenu()
{
    UserInput choice;

    cout<<"Welcome in our amazing library"<<endl;
    cout<<"l - go to library menu"<<endl;
    cout<<"a - go to account menu"<<endl;

    choice.receiveInput();

    switch(choice.input)
    {
        case 'a':
            printAccountMenu();
            break;
        case 'l':
            printLibraryMenu(); 
            break;
    };  
}

void Menu::printLibraryMenu()
{
    cout << "Library Menu" << endl; //tu sobie wpisujesz co ma wyświetlić się w twoim menu
}

void Menu::printAccountMenu()
{
    cout << "Account Menu" << endl;
    cout << "c - Creat a new account" << endl;
    cout << "r - Remove and existing account" << endl;
    cout << "e - Edit an existing account" << endl;
};

void Menu::switchLibraryMenu()  //tu se wpisujesz switch do metod operujących na twojej liście
{

}

void Menu::switchAccountMenu(AccountList &accountList)
{
    UserInput choice;
    string buffer1, buffer2;

    choice.receiveInput();

    switch(choice.input)
    {
        case 'a':
            cout << "Name?" << endl;
            cin >> buffer1;
            cout << "Password?" << endl;
            cin >> buffer2;
            accountList.createAccount(buffer1, buffer2);
            break;
        case 'r':
            cout << "Name?" << endl;
            cin >> buffer1;
            cout << "Password?" << endl;
            cin >> buffer2;
            accountList.removeAccount(buffer1, buffer2);
            break;
        case 'e':
            cout << "Name?" << endl;
            accountList.editAccount(buffer1);
            break;
    };  
}