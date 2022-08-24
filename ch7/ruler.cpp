/***************************************************************
 * ruler.cpp -- использование рекурсии для разделения линейки
 **************************************************************/
#include<iostream>
using namespace std;
const int Len = 66;
const int Divs = 6;
void subdivide(char ar[], int low, int higt, int level);
//=====================================================================
int main()
{
    char ruler[Len];
    int i;
    for (i = 1; i < Len - 2; i++)
        ruler[i] = ' ';
    ruler[Len - 1] = '\0';
    int max = Len - 2;
    int min = 0;
    ruler[min] = ruler[max] = '|';
    std::cout << ruler << std::endl;
    for (i = 1; i <= Divs; i++)
    {
        subdivide(ruler, min, max, i);
        std::cout << ruler << std::endl;
        for (int j = 1; j < Len - 2; j++)
            ruler[i] = ' ';                     // очистка линейки
    }
    return 0;
}
//---------------------------------------------------------------------
void subdivide(char ar[], int low, int higt, int level)
{
    if (level == 0)
        return;
    int mid = (higt + low) / 2;
    ar[mid] = '|';
    subdivide(ar, low, mid, level - 1);
    subdivide(ar, mid, higt, level - 1);
}