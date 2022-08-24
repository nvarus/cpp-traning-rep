#include<stdio.h>
void cheers(int Number);
//======================================
int main(void)
{
    int x;
    printf("Число: ");
    scanf("%d", &x); 
    cheers(x);
}
//---------------------------------------
void cheers(int Number)
{
    for (int i = 0; i < Number; i++)
        printf("Cheers # %d \n", i + 1);
}