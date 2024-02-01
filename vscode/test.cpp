#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstdlib>
#include <dirent.h>
#include <errno.h>

int main(){
    /*Пробегаемся по документу и помещаем его строки в вектор*/

    std::string str; //сюда будем класть прочитанные строки
    std::vector<std::string> kks; //вектор из прочитанных строк
    std::vector<std::string> kksCopy; //копия вектора чтобы удалять из него уже добавленные сигналы
    kksCopy = kks;
    std::ifstream file("/home/kirill/My projects/For Mr.Pavel/kks.txt", std::ios_base::in); //открываем файл (имя файла + режим открытия файля даля чтения)
    if(!file.is_open()){
        std::cout << "Файл не может быть открыт" << std::endl; //если файл не открылся
    }else{
        while(getline(file, str)){ //пока файл не закончился, кладем строку в str
            //std::cout << "one " << str << std::endl;
            kks.push_back(str); //Добавляем строку в вектор
        }
    }

    /*Читаем файлы сценариев и помещаем в конец выбранные ккс*/ 
    int sizevector;
    srand(time(0)); //задаем входные данные для функции rand
    int NumOfKKS; //количество ккс которые мы хотим добавить
    std::cout << "How much do you want to add KKS? " << std::endl;
    std::cin >> NumOfKKS; //вводим от руки количество ккс
    int counterKKS = 0; //счетчик для отсчета 10 ккс
    char* directory = "/home/kirill/My projects/For Mr.Pavel/scenario"; //директория в которой будут сценарии
    DIR* dir; //создаем экземпляр директорию
    struct dirent* entry; //тип структуры, используемый для возврата информации о входах в каталог
    dir = opendir(directory); //инициализируем директорию в которой лежат сценарии
    if(dir == NULL){std::cout << "Error scenario open" << std::endl; return 1;} //проверяем открылась ли директория
    while ((entry = readdir(dir)) != NULL){ //пока не кончились файлы в директории
        std::ofstream fileScenario (entry->d_name,std::ios::ate | std::ios::app); //открываем поток с файлом сценария
        kksCopy = kks; 
        for (int i=0; i<NumOfKKS;i++){
            sizevector = kksCopy.size(); //узнаем размер вектора   
            int random = rand()%sizevector;  
            fileScenario << kksCopy[random] << std::endl; //обращаемся к рандомному ккс и записываем в файл выбранный ккс
            if (random-1 < 0){random = 0;}
            kksCopy.erase(kksCopy.begin()+(random-1));
        }
    fileScenario.close(); //закрываем поток с файлом сценария
    }
    closedir(dir); //закрываем поток с файлом сценария закрываем директорию ss
    return 0;
}
