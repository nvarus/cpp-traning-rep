/** 
 * Напишите программу, которая читает клавиатурный ввод до символа @ и повторяет его, за исключением десятичных цифр,
 * преобразуя каждую букву верхнего регистра в букву нижнего регистра и наоборот.
 * (Не забудьте о семействе функций cctype.)
 */

#include<iostream>
#include<cctype>
int main(void)
{
    using namespace std;
    char ch;
    cout << "Вводите символы и слова в нижнем и верхнем регистре. Для выхода введите @" << endl << "::";
    cin.get(ch);
    while (ch != '@')
    {
        if (isalpha(ch) and islower(ch))        // если символ буква и строчная буква
            cout << (char)toupper(ch);          // печатать заглавную
        else if (isalpha(ch) and isupper(ch))   // если символ буква и заглавная буква
            cout << (char)tolower(ch);          // печатать строчную
        else if (ispunct(ch) or iscntrl(ch))    // символ знак припинания или управляющий символ
            cout << ch;
        cin.get(ch);
    }
}