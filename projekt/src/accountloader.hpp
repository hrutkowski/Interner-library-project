#ifndef ACCOUNTLOADER_H
#define ACCOUNTLOADER_H

#include "uniloader.hpp"
#include "accountlist.hpp"
#include "loader.hpp"
#include <QMessageBox>

class AccountLoader : public Loader
{
public:
    void changeBookList(BookList &bookList) override;
    void changeAccountList(AccountList &accountList) override;
    void saveDataBase(std::string filepath) override;
    void loadDataBase(std::string filepath) override;

};

#endif // ACCOUNTLOADER_H
