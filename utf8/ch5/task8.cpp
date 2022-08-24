/**
 * Напишите программу, которая использует массив char и цикл для чтения по одному слову за раз до тех пор, пока не будет введено слово done.
 * Затем программа должна сообщить количество введенных слов (исключая done). Пример запуска должен быть таким:
 * Вводите слова (для завершения введите слово done): anteater birthday category dumpster envy finagle geometry done for sure
 * Вы ввели 7 слов.
 * Вы должны включить заголовочный файл cstring и применять функцию strcmp () для выполнения проверки.
 */
#include<iostream>
#include<cstring>

int main()
{
    char Done[] = "done";
    char word[80];
    int i = 0;

    std::cout << "Вводите слова (для завершения введите слово done): ";
    do
    {
        std::cin >> word;
        i++;
    } while ( strcmp(Done, word) != 0);

    std::cout << "Вы ввели " << i - 1 << " слов";
    return 0;
}
