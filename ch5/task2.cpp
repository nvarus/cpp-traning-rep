#include<iostream>
#include<array>

const int ArSize = 100;

int main()
{
//long long Factorial[ArSize];

std::array <long double, ArSize> Factorial;
    Factorial[1] = Factorial[0] = 1;
    
    for (int i = 2; i < ArSize; i++)
        Factorial[i] = i * Factorial[i-1];
        
    for (int i = 0; i < ArSize; i++)
        std::cout << i << " ! = " << Factorial[i] << std::endl;
    
    
    return 0;
}