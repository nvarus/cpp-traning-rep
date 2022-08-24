// Напишите программу, которая запрашивает у пользователя имя и фамилию, а затем конструирует, сохраняет и отображает третью строку
// состоящую из фамилии, запятой, пробела и имени.
// Используйте объекты класса string

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string fsName;   // имя
    string lsName;   // фамилия
    string fullName; // полное имя
    string x = ", ";   // разделитель

    // запросим данные у пользователя
    cout << "Введите имя: ";
    getline(cin, fsName);
    cout << "Введите фамилию: ";
    getline(cin, lsName);

    // конструируем новую строку с помощью методов sting
    fullName = lsName + x + fsName;
    
    // выводим результат на экран
    cout << "Ваше полное имя: "
         << fullName << endl;

    return 0;
}