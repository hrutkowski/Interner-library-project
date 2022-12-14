#pragma once
#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

class Account
{
private:
    string name;
    string password;
    vector<int> cardnumber;
public:
    Account();
    Account(string name, string password);
    Account(string name, string password, string key);
    vector<int> getCardNo();
    string getName();
    string getPassword();
    void setName(string newName);
    void setPassword(string newPassword);
};