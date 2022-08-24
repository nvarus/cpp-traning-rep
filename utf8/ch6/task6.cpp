/**     Глава 6, задача 6
 * Постройте программу, которая отслеживает пожертвования в Общество Защиты Влиятельных Лиц.
 * Она должна запрашивать у пользователя количество меценатов, а затем приглашать вводить
 * их имена и суммы пожертвований от каждого. Информация должна сохраняться в динамически
 * выделяемом массиве структур. Каждая структура должна иметь два члена: символьный массив
 * (или объект string) для хранения имени и переменную-член типа double ? для хранения суммы
 * пожертвования. После чтения всех данных программа должна отображать имена и суммы пожертвований
 * тех, кто не пожалел $10 000 и более. Этот список должен быть озаглавлен меткой ?Grand Patrons?.
 * После этого программа должна выдать список остальных жертвователей. Он должен быть озаглавлен ?Patrons?.
 * Если в одной из двух категорий не окажется никого, программа должна напечатать ?none?.
 * Помимо отображения двух категорий, никакой другой сортировки делать не нужно.
 */
#include<iostream>
#include<string>
using namespace std;
const double Grand = 10000;
int Max;
struct maecenas { 
    string Name;
    double Summ;
};


int main(void)
{
    cout << "Введите количество меценатов: ";
    cin >> Max;
    maecenas *Donat = new maecenas [Max];

    // цикл для заполнения массива структур
    for (int i = 0; i < Max; i++)
    {
        cout << "Меценат №" << i + 1 << "\nИмя: ";
        cin.get();
        getline(cin, Donat[i].Name);
        cout << "Сумма: ";
        cin >> Donat[i].Summ;
    }
    cout << endl;
    int GrPat = 0;           // поиск Grand Patrons
    cout    << "Grand Patrons:\n";
    for (int i = 0; i < Max; i++)
    {
        if (Donat[i].Summ >= Grand)
        {
            cout    << Donat[i].Name << "\t"
                    << Donat[i].Summ << endl;
            GrPat++;
        }
    }
    if ( GrPat < 1)
        cout << "none\n";

    cout << endl;
    int Pat = 0;           // поиск Patrons
    cout    << "Patrons:\n";
    for (int i = 0; i < Max; i++)
    {
        if (Donat[i].Summ < Grand)
        {
            cout    << Donat[i].Name << "\t"
                    << Donat[i].Summ << endl;
            Pat++;
        }
    }
    if ( Pat < 1)
        cout << "none\n";
delete [] Donat;
}
