#include<iostream>
using namespace std;
int Fill_array(double ar[], int n);
void Show_array(double ar[], int n);
void Reverse_array(double ar[], int n);
//========================================================================
int main()
{
    const int Max = 10;
    double array[Max];
    int count = Fill_array(array, Max);
    cout << "Введено значений: " << count << endl;
    Show_array(array, count);
    Reverse_array(array, count);
    Show_array(array, count);
    return 0;
}
//------------------------------------------------------------------------
int Fill_array(double ar[], int n)
{
    cout << "Введите " << n << " значений." << endl;
    int count = 0;
    double temp;
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ":";
        if (cin >> temp)
        {
            ar[i] = temp;
            count++;
        }
        else
        {
            cout << "\nВвод прекращен. Введено не корректное значение\n";
            break;
        }
    }
    return count;
}
//--------------------------------------------------------------------------
void Show_array(double ar[], int n)
{
    cout << "Ваши значения:\n";
    for (int i = 0; i < n; i++)
        cout << ar[i] << "\t";
    cout << endl;
}
//--------------------------------------------------------------------------
void Reverse_array(double ar[], int n)
{
    double temp;
    for (int i = 1, j = n -2; i < j; i++, j--)
    {
        temp = ar[i];
        ar[i] = ar[j];
        ar[j] = temp;
    }
}

