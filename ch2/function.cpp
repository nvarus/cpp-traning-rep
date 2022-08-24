/** Создать две функции выводящие на экран строки
 *  Three blind mice
 *  Three blind mice
 *  See how they run
 *  See how they run
 */

#include<iostream>
void string_1();    // Прототипы функций: void указывает на то, что функции не возвращают значений,
void string_2();    // а () - пустые скобки, на то что они не принимают аргументов

int main()
{
    std::cout << std::endl;     // добавил пустые строки с обеих сторон c помощью endl что б выделить выводимый на экран текст
    string_1();     // Вызываем функции по два раза каждую
    string_1();
    string_2();
    string_2();
    std::cout << std::endl;
}

void string_1()     // тело первой функции
{
    std::cout << "Three blind mice" 
              << std::endl;
}                   // для void функции, оператор return 0; не требуется

void string_2()     // тело второй функции
{
    std::cout << "See how they run"
              << std::endl;
}

/** В этой программе я не использовал пространство имен using namespace,
 *  а определил std:: для каждой функции <iostream> по отдельности,
 *  только для того что бы потренироваться в определении пространства имен.
 */
