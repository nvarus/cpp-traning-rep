// ࠡ�� � ��ப���

#include<iostream>
#include<string>
//#include<cstring>

int main()
{
    using namespace std;

    cout << "������ ᢮� ���: ";
    string name;
    getline(cin, name);

    if (name.empty())
        cerr << "�訡��: ��������� ��ப� ����!\n";
    else
        cout << "�ਢ��, " << name << "!\n";

    cout << "������ �����: ";
    char cl;
    cin >> cl;
    cl = cl - 1;
    cout << cl << endl;
    int i = cl;
    cout.put(cl);

    return 0;
}