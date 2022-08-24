/**     Глава 6, задание 8
 * Напишите программу, которая открывает текстовый файл,
 * читает его символ за символом до самого конца и сообщает количество символов в файле.
 */

#include<iostream>
#include<fstream>
using namespace std;
const char filename[] = "task8.txt";

int main(void)
{
    ifstream inFile;
    inFile.open(filename);    
    char ch;
    int i = 0;
    inFile.get(ch);
    while (inFile.fail() == false)
    {
        cout << ch;
        inFile.get(ch);
        i++;
    }
    cout << "\nСчитано " << i << " символов";  
    inFile.close();  
}