#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QApplication>
#include <QTranslator>
#include <QLibraryInfo>
#include <QDebug>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}


MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::changeEvent(QEvent *event)
{
    if (event->type() == QEvent::LanguageChange) {
        ui->retranslateUi(this);
    }
}

void MainWindow::on_pushButton_ru_clicked()
{
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = QString("login_") + "ru_RU";
        if (qtLanguageTranslator.load(":/i18n/" + baseName)) {
            qApp->installTranslator(&qtLanguageTranslator);
            break;
        }
}
}


void MainWindow::on_pushButton_en_clicked()
{
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = QString("login_") + "en_US";
        if (qtLanguageTranslator.load(":/i18n/" + baseName)) {
            qApp->installTranslator(&qtLanguageTranslator);
            break;
        }
}
}
