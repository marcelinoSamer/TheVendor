QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ProductPage/ProductPage.cpp \
    ProductPage/cardview.cpp \
    ProductPage/product.cpp \
    ProductPage/starrating.cpp \
    addproductpage.cpp \
    adminsetupwindow.cpp \
    loginwindow.cpp \
    main.cpp \
    mainwindow.cpp \
    productratigwidget.cpp \
    registerwindow.cpp \
    users.cpp

HEADERS += \
    ProductPage/ProductPage.h \
    ProductPage/cardview.h \
    ProductPage/product.h \
    ProductPage/starrating.h \
    addproductpage.h \
    adminsetupwindow.h \
    loginwindow.h \
    mainwindow.h \
    productratigwidget.h \
    registerwindow.h \
    users.h

FORMS += \
    ProductPage/ProductPage.ui \
    ProductPage/product.ui \
    addproductpage.ui \
    adminsetupwindow.ui \
    loginwindow.ui \
    mainwindow.ui \
    registerwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    assets/cat1.jpg \
    assets/cat2.jpg \
    assets/filled.png \
    assets/half.png \
    assets/unfilled.png \
    assets/vacuum.jpg

RESOURCES += \
    sources.qrc


