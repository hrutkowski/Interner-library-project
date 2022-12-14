#ifndef BOOKLOADER_H
#define BOOKLOADER_H

#include "uniloader.hpp"
#include "loader.hpp"
#include "booklist.hpp"
#include <QMessageBox>

class BookLoader : public Loader
{
public:
    void changeBookList(BookList &bookList) override;
    void changeAccountList(AccountList &accountList) override;
    void saveDataBase(std::string filepath) override;
    void loadDataBase(std::string filepath) override;

};

#endif // BOOKLOADER_H
