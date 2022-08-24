// textin3.cpp -- чтение символов до конца файла
#include<iostream>
int main(void)
{
    using namespace std;

    char ch;
    int count = 0;
    cin.get(ch);
    while (cin.fail() == false)
    {
        cout << ch;
        ++count;
        cin.get(ch);
    }
    cout << endl
         << count << " символов считано\n";
}