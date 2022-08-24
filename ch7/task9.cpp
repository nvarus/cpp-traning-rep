/******************************************************************
 * ����� 7, ����� 9
 * ****************************************************************/

#include<iostream>
#include<string>
using namespace std;

const int SLEN = 30;
struct student {
    string fullname;
    string hobby;
    int ooplevel;
};
int getinfo(student pa[], int n);
void display1(student st);
void display2(const student *ps);
void display3(const student pa[], int n);
//===================================================================
int main()
{
    cout << "Enter class size: ";
    int class_size;
    cin >> class_size;
    while (cin.get() != '\n')
        continue;
    student *ptr_stu = new student [class_size];
    int entered = getinfo(ptr_stu, class_size);
    for (int i = 0; i < entered; i++)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete [] ptr_stu;
    cout << "Done!\n";
    return 0;
}
//----------------------------------------------------------------------
int getinfo(student pa[], int n)
{
    cout << "������ ����� � ��㤥���:\n";
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cout << "��㤥�� �" << i + 1 << ". ���: ";
        getline(cin, pa[i].fullname);
        if (pa[i].fullname == "")
        {
            cout << "���� ��ࢠ�. ������� ���⮥ ���祭��. ���祭��: " << count << endl;
            return count;
        }
        cout << "��㤥�� �" << i + 1 << ". �����: ";
        getline(cin, pa[i].hobby);
        cout << "��㤥�� �" << i + 1 << ". �஢���: ";
        cin >> pa[i].ooplevel;
        cin.get();
        count ++;
    }
    return count;
}
//---------------------------------------------------------------------
void display1(student st)
{
    cout    << st.fullname  << "\t"
            << st.hobby     << "\t"
            << st.ooplevel  << endl;
}
//----------------------------------------------------------------------
void display2(const student *ps)
{
    cout    << ps->fullname  << "\t"
            << ps->hobby     << "\t"
            << ps->ooplevel  << endl;
}
//-----------------------------------------------------------------------
void display3(const student pa[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout    << pa[i].fullname   << "\t"
                << pa[i].hobby      << "\t"
                << pa[i].ooplevel   << endl;
    }
}