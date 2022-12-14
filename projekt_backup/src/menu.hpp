#pragma once
#include <iostream>
#include "accountlist.cpp"
#include "accountdatabase.cpp"
#include "booklist.cpp"
#include "booktxt.cpp"
#include "messenger.cpp"
#include "userInput.cpp"

using namespace std;

class Menu
{
public:
    void chooseMenu();
    void printLibraryMenu();
    void printAccountMenu(Messenger &mess);
    void switchLibraryMenu(BookList &); 
    void switchAccountMenu(AccountList &List,AccountDataBase &DataBase, Messenger &mess, UserInput &choice);
};