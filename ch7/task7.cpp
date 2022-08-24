#include<iostream>
using namespace std;
const int Max = 10;
double * pt;
double * Fill_array(double * begin, double * end);
void Show_array(double * begin, double * end);
void Reverse_array(double * begin, double * end);
//========================================================================
int main()
{
    double array[Max];
    double * p_count = Fill_array(array, array + Max);
    Show_array(array, p_count);
    Reverse_array(array, p_count);
    Show_array(array, p_count);
    return 0;
}
//------------------------------------------------------------------------
double * Fill_array(double * begin, double * end)
{
    cout << "*** Fill_array function is started...\n";
    cout << "Введите " << Max << " значений." << endl;
    int count = 0;
    double temp;
    int n = 1;
    for (pt = begin; pt != end; pt++, n++)
    {
        cout << n << ": ";
        if (cin >> temp)
        {
            *pt = temp;
            count++;
        }
        else
        {
            cout << "\nВвод прекращен. Введено не корректное значение\n";
            break;
        }
    }
    cout << "Введено значений: " << count << endl;
    pt = begin + count;
    cout << "*** Fill_array function completed...\n" << endl;
    return pt;
}
//--------------------------------------------------------------------------
void Show_array(double * begin, double * end)
{
    cout << "*** Show_array function is started...\n";
    
    cout << "value:\t";
    for (pt = begin; pt != end; pt++)
        cout << *pt << "\t";

    cout << endl << "address:\t";     
    for (pt = begin; pt != end; pt++)
        cout << pt << "\t";

    cout << endl;
    cout << "*** Show_array function completed...\n" << endl;
}
//--------------------------------------------------------------------------
void Reverse_array(double * begin, double * end)
{
    cout << "*** Reverse_array function is started...\n";
    double * pe;
    double temp;
    for (pt = begin, pe = end - 1; pt < pe; pt++, pe--)
    {
        temp = *pt;
        *pt = *pe;
        *pe = temp;
    }
    cout << "*** Reverse_array function completed...\n" << endl;
}

