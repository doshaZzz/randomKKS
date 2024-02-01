#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QDebug>
#include <QByteArray>
#include <QString>
#include <QList>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void readFile();

private slots:


    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();


private:
    Ui::MainWindow *ui;
    QString kksfile;
    QString DirName;
    QList<QString> dirScenario;
    QList<QString> listScenario;
    QList<QString> Scenario;
};
#endif // MAINWINDOW_H
