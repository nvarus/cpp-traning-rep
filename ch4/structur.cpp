// structur.cpp -- ����� �������
#include<iostream>
struct inflatable           // ������� ��������
{
    char name[20];
    float volume;
    double price;
};

int main()
{
    using namespace std;
    inflatable quest =
        {
            "Glorious Gloria", // ���祭�� name
            1.88,              // ���祭�� volume
            29.99              // ���祭�� price
        };  // quest - ������ୠ� ��६����� ⨯� inflatable

        // ���樠������ 㪠����묨 ���祭�ﬨ

    inflatable pal =
        {
            "Audacious Arthur",
            3.12,
            32.99
        }; // pal - ���� ��६����� ⨯� inflatable

// ������� ॠ����樨 �ॡ��� �ᯮ�짮����� 
// static inflatable quest =

    cout << "Expand your quest list with " << quest.name;
    cout << " and " << pal.name << endl;
    cout << "You can have both for $";
    cout << quest.price + pal.price << endl;
    return 0;
}