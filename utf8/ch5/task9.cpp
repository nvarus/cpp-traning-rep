/**
 * Напишите программу, соответствующую описанию программы из упражнения 8, но с использованием объекта string
 * вместо символьного массива.Включите заголовочный файл string и применяйте операции отношений для выполнения проверки.
 */

#include <iostream>
#include <string>

int main()
{
    using namespace std;
    string Done = "done";
    string Word;
    int i = 0;

    cout << "Вводите слова (для завершения введите слово done): ";
    do
    {
        cin >> Word;
        i++;
    } while (Done != Word);

    cout << "Вы ввели " << i - 1 << " слов";
    return 0;
}
