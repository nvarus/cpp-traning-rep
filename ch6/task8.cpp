/**     ����� 6, ������� 8
 * ������ �ணࠬ��, ����� ���뢠�� ⥪�⮢� 䠩�,
 * �⠥� ��� ᨬ��� �� ᨬ����� �� ᠬ��� ���� � ᮮ�頥� ������⢮ ᨬ����� � 䠩��.
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
    cout << "\n��⠭� " << i << " ᨬ�����";  
    inFile.close();  
}