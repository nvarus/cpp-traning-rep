#include<iostream>
void assign(int array[], int Max, int number);
const int Max = 20;
int main()
{
    int number = 8;
    int array[Max];
    assign(array, Max, number);
    return 0;
}
//----------------------------------------------
void assign(int array[], int Max, int number)
{
    for (int i = 0; i < Max; i++)
    {    
        array[i] = number;
        std::cout << array[i] << "\t";
    }
}
