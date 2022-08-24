#include<iostream>
using namespace std;
const int MAX = 10;
double findmax(const double arr[], int MAX);
//===================================================================================================
int main()
{
    double arr[MAX] = {45777.5, 78.9, 0.1245, 4587.1, 457.0, 87.6658, 878.24545, 5454.4, 45.0, 1.0};
    cout << "Максимальное значение = " << findmax(arr, MAX);
    return 0;
}
//--------------------------------------------------------------------------------------------------
double findmax(const double arr[], int MAX)
{
    double temp = arr[0];
    for (int i = 1; i < MAX; i++)
    {
        if (arr[i] > temp)
            temp = arr[i];
    }
    return temp;
}