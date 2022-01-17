#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTranslator>
#include <QEvent>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

protected:
    void changeEvent(QEvent * event) override;


public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_ru_clicked();

    void on_pushButton_en_clicked();

private:
    Ui::MainWindow *ui;
    QTranslator qtLanguageTranslator;

};
#endif // MAINWINDOW_H
