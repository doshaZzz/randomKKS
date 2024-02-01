#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QLabel>
#include <QDebug>
#include <QString>
#include <QVector>
#include <QSpinBox>
#include <QCoreApplication>
#include <QDirIterator>
#include <QDir>


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


void MainWindow::on_pushButton_clicked()
{
   kksfile = QFileDialog::getOpenFileName(this,tr("Enter txt file"), "/home", tr("Text files (*.txt)"));
   ui->textEdit_2->setText(kksfile);
   qDebug() << "kksfile: " <<kksfile;
}
void MainWindow::on_pushButton_4_clicked()
{
    DirName = QFileDialog::getExistingDirectory(this, tr("Open Directory"),QDir::currentPath(),QFileDialog::ShowDirsOnly| QFileDialog::DontResolveSymlinks);
    ui->textEdit->setText(DirName);
    qDebug() << "DirName: " << DirName;

}

void MainWindow::on_pushButton_3_clicked()
{
    /*Пробегаемся по документу и помещаем его строки в вектор*/

    QString str;
    QVector<QString> kks; //вектор из прочитанных строк
    QVector<QString> kksCopy; //копия вектора чтобы удалять из него уже добавленные сигналы
    QFile file(kksfile); // создаем объект класса QFile для чтения файла со списком KKS кодов
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)){
    QTextStream in(&file);
    while (!in.atEnd()){
        QString line = in.readLine(); //сюда будем класть прочитанные строки
        qDebug() << "Все прочтенные линии: "<< line;
        kks.push_back(line); //Добавляем строку в вектор
    }

    /*Читаем файлы сценариев и помещаем в конец выбранные ккс*/
    kksCopy = kks; //копируем вектор с ккс кодами
    srand(time(0)); //задаем входные данные для функции rand
    int NumOfKKS;//количество ккс которые мы хотим добавить
    NumOfKKS = ui->spinBox->value(); //Берем значение из виджета
    qDebug() << "Количество добавляемых ККС: "<< NumOfKKS;
/*----------------------------------------------*/
    dirScenario = QDir(DirName).entryList(QDir::Files); //считываем имена всех файлов в директории со сценариями
    DirName = DirName.append("/"); //добавляем / в конец строки с директорией
    qDebug() <<  dirScenario << dirScenario.size();
    for (int i = 0; i < dirScenario.size(); i++) //пока не пройдем по всем файлам директории
    {
        QFile file (DirName + dirScenario[i]); //создаем поток для записи файла по пути нахождения сценариев + имя сценария
        qDebug() << DirName + dirScenario[i];
        if(file.open(QIODevice::Append)) //открываем файл и дозаписываем в конец
        {
            qDebug() << "open";
            kksCopy = kks; //копируем вектор с ккс кодами
            QTextStream writgroup1(&file); //буфер куда будут складываться записываемые строки из файла ккс кодов
            for (int i = 0; i < NumOfKKS; i++)
            {
                int sizevector = kksCopy.size()-1; //узнаем размер вектора -1 потому то обращение к нему будет по индексу
                int randNUM = rand()%sizevector;//рандонмый номер позиции ккс
                writgroup1 << kksCopy[randNUM] << "\n"; //обращаемся к рандомному ккс и записываем в файл выбранный ккс
                kksCopy.remove(randNUM); //удаляем добавленный ккс код из вектора
            }
            file.close(); //закрываем открытый айл
        }
    else
        {
            qDebug() << " Not open";
        }
       }
        ui->textEdit_3->setText(" Все готово\n");
    }
}
