// ��।������, ���⨯�஢���� � �맮� �㭪樨
#include<iostream>
using namespace std;
void simple();                  // ���⨯
//=================================================================================
int main(void)
{
    cout << "��砫� ࠡ��� main() �� �맮�� �㭪樨" << endl;
    // �맮� �㭪樨
    simple();                     
    cout << "����砭�� ࠡ��� �ணࠬ�� ��᫥ �����襭�� ࠡ��� �㭪樨" << endl;
}
//---------------------------------------------------------------------------------
void simple() 
{     
    cout << "��砫� ࠡ��� �㭪樨" << endl;
    int size;
    cout    <<  "������: ";
    cin     >>  size;
    size++;
    cout << endl;
    double array[size][size];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if ((i * j) != 0)
            {
                array[i][j] = i * j;
                cout << array[i][j] << "\t";
            }
        }
        cout << endl << endl;
    }
}
//---------------------------------------------------------------------------------