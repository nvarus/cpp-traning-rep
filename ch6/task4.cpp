/**     Глава 6, задача 4
 * Когда вы вступите в Благотворительный Орден Программистов (БОП),
 * к вам могут обращаться на заседаниях БОП по вашему реальному имени,
 * по должности либо секретному имени БОП. Напишите программу, которая может
 * выводить списки членов по реальным именам, должностям, секретным именам либо
 * по предпочтению самого члена. В основу положите следующую структуру:
 * // Структура имен Благотворительного Ордена Программистов (БОП) 
 *      struct bop {
 *      char fullname[strsize];	// реальное имя
 *      char title[strsize];	// должность
 *      char bopname[strsize];	// секретное имя БОП
 *      int preference;	        // 0 = полное имя, 1 = титул, 2 = имя БОП
*/
#include<iostream>
#include<string>
using namespace std;
void showmenu();
void FullList();
void FullName();
void Title();
void BopName();
void Preference();
const int Max = 6;

struct bop {            // Структура БОП
    string fullname;	// реальное имя
    string title;	// должность
    string bopname;	// секретное имя БОП
    int preference;	        // 0 = полное имя, 1 = титул, 2 = имя БОП
} Name[Max] =           // Инициализация массива структур Name
    {
        {"Пучков Дмитрий Юрьевич", "Великий магистр", "Гоблин", 1},
        {"Жуков Клим Александрович", "Магистр", "Мэтр Роже", 2},
        {"Яковлев Егор", "Мастер", "Историк", 0},
        {"Перец Павел Петрович", "Оруженосец", "Экскурсовод", 0},
        {"Юлин Борис Витальевич", "Капеллан", "Попович", 1},
        {"Варюхин Алексей Геннадьевич", "Сквайр", "nvaru", 4}
    };

int main(void)          // выбор пункта меню
{
    char letter;
    showmenu();
    cin >> letter;

    while(letter != 'Q' && letter != 'q')
    {
        switch(letter)
        {
            case 'f':
            case 'F': FullList();   // полный список
                    break;
            case 'n': 
            case 'N': FullName();   // по имени
                    break;
            case 't': 
            case 'T': Title();      // по должности
                    break;
            case 'b': 
            case 'B': BopName();    // по секретному имени
                    break;
            case 'p': 
            case 'P': Preference(); // по предпочтению
                    break;
            default : cout << "Пожалуйста, вводите только : f, n, t, b, p и g\n";       
        }
    showmenu();
    cin >> letter;
    }
 }

void showmenu()         // Главное меню
{
    cout    << "Вывести список членов БОП:\n"
                "f) Полный список   n) По имени   t) По должности   b) По секретному имени   p) По предпочтению   q) Выход\n";
}

void FullList()         // полный список
{
    cout << "Полный список членов ордена: \n";
    for (int i; i < Max; i++)
        cout    << Name[i].fullname     << endl
                << Name[i].title        << endl
                << Name[i].bopname      << endl << endl;
}

void FullName()             // по имени
{
    cout << "По имени: \n";
    for (int i = 0; i < Max; i++)
        cout << Name[i].fullname << endl;
    cout << endl;
}

void Title()                // по должности
{
    cout << "По званию: \n";
    for (int i = 0; i < Max; i++)
        cout << Name[i].title << endl;
    cout << endl;
}
void BopName()              // по секретному имени
{
    cout << "По секретному имени БОП: \n";
    for (int i = 0; i < Max; i++)
        cout << Name[i].bopname << endl;
    cout << endl;
}
void Preference()           // по предпочтению
{
    cout << "По предпочтению: \n";
    for (int i = 0; i < Max; i++)
    {
        if      (Name[i].preference < 1)
                    cout << Name[i].fullname << endl;
        else if (Name[i].preference > 1)
                    cout << Name[i].bopname << endl;
        else    cout << Name[i].title << endl;
    }
    cout << endl;
}
