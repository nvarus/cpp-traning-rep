#include<iostream>
void assign(int *begin, int *end, int number);
const int Max = 20;
int main()
{
    int number = 8;
    int array[Max];
    assign(array, array + Max, number);
    return 0;
}
//----------------------------------------------
void assign(int *begin, int *end, int number)
{
    int *pt;
    for (pt = begin; pt < end; pt++)
    {    
        *pt = number;
        std::cout << *pt << "\t";
    }
}
