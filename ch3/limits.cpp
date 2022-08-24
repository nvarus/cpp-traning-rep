// ������� ��࠭�祭�� 楫�� �ᥫ
#include<iostream>
#include<climits>

int main()
{
    using namespace std;
    int n_int = INT_MAX;    // ���樠������ n_int ���ᨬ���� ���祭��� int
    short n_short = SHRT_MAX;   // ᨬ����, ��।������ � 䠩�� climits
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    // ������ sizeof �뤠�� ࠧ��� ⨯� ��� ��६�����

    cout << endl;
    cout << "int is " << sizeof(int) << " bytes." << endl;
    cout << "short is " << sizeof n_short << " bytes." << endl;
    cout << "long is " << sizeof n_long << " bytes." << endl;
    cout << "long long is " << sizeof n_llong << " bytes." << endl;
    cout << endl;

    cout << "Maximum values:" << endl;
    cout << "int: " << n_int << endl;
    cout << "short: " << n_short << endl;
    cout << "long: " << n_long << endl;
    cout << "long long: " << n_llong << endl;

    cout << "Minimun int value = " << INT_MIN << endl;
    cout << "Bits per byte = " << CHAR_BIT << endl << endl;
    return 0;
}