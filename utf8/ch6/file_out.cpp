// запись в файл
#include<iostream>
#include<fstream>                       // для файлового ввода-вывода
const char filename[] = "outF.txt";     // константа, содержащая имя файла
int main(void)
{
    using namespace std;
    ofstream outFile;           // создание объекта для вывода в файл
    outFile.open(filename);   // ассоциирование объекта с файлом

    outFile << "Программа, выводящая текст в файл" << endl;

    outFile.close();        // завершить работу с файлом
}