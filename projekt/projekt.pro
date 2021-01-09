QT -= gui

CONFIG += c++11 console
CONFIG -= app_bundle

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        src/account.cpp \
        src/accountdatabase.cpp \
        src/accountlist.cpp \
        src/book.cpp \
        src/booklist.cpp \
        src/booktxt.cpp \
        src/main.cpp \
        src/menu.cpp \
        src/messenger.cpp \
        src/userInput.cpp

DISTFILES += \
    src/AccountDataBase.txt \
    src/a.exe \
    src/library.txt \
    src/main.exe

HEADERS += \
    src/account.hpp \
    src/accountdatabase.hpp \
    src/accountlist.hpp \
    src/book.hpp \
    src/booklist.hpp \
    src/booktxt.hpp \
    src/menu.hpp \
    src/messenger.hpp \
    src/userInput.hpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
