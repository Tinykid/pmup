#-------------------------------------------------
#
# Project created by QtCreator 2015-12-14T19:30:05
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = pmup
TEMPLATE = app

INCLUDEPATH += pmupIHM

SOURCES += main.cpp\
        pmupIHM\pmupEnterPage.cpp

HEADERS  += pmupIHM\pmupEnterPage.h

RESOURCES += imageresources.qrc

CONFIG += mobility
MOBILITY = 

DISTFILES += \
    android/AndroidManifest.xml \
    android/gradle/wrapper/gradle-wrapper.jar \
    android/gradlew \
    android/res/values/libs.xml \
    android/build.gradle \
    android/gradle/wrapper/gradle-wrapper.properties \
    android/gradlew.bat

ANDROID_PACKAGE_SOURCE_DIR = $$PWD/android

