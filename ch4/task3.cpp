// Напишите программу, которая запрашивает у пользователя имя и фамилию, а затем конструирует, сохраняет и отображает третью строку
// состоящую из фамилии, запятой, пробела и имени.
// Используйте массив char и функции из заголовочного файла cstring.

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    const int Ar = 20;
    char fsName[Ar];    // имя
    char lsName[Ar];    // фамилия
    char fullName[Ar];  // полное имя
    char x[] = ", ";    // разделитель

    // запросим данные у пользователя
    cout << "Введите имя: ";
    cin.get(fsName, Ar).get();
    cout << "Введите фамилию: ";
    cin.get(lsName, Ar).get();

    // конструируем новую строку с помощью функций csting
    strcpy(fullName, lsName);   // копируем массив lsName[] в массив fullName[]
    strcat(fullName, x);        // к массиву fullName[] добавляем массив x[]
    strcat(fullName, fsName);   // к массиву fullName[] добавляем массив fsName[]

    // выводим результат на экран

    cout << "Ваше полное имя: "
         << fullName << endl;

    return 0;
}