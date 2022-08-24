/*******************************************************************************
 * strctfun.cpp -- �㭪�� � ��㬥�⠬� - ������ࠬ�
 * 
 * *****************************************************************************/
#include<iostream>
#include<cmath>
struct polar 
{
    double distance;
    double angle;
};
struct rect 
{
    double x;
    double y;
};
polar rect_to_polar(rect xypos);
void show_polar(polar dapos);
//===============================================================================
int main(void)
{
    using namespace std;
    rect rplace;
    polar pplace;
    cout << "������ ���祭�� x � �: ";
    while (cin >> rplace.x >> rplace.y)
    {
        pplace = rect_to_polar(rplace);
        show_polar(pplace);
        cout << "������ ᫥���騥 ��� �᫠ (q ��� ��室�): ";
    }
    cout << "Done.\n";
}
//--------------------------------------------------------------------------------
// �८�ࠧ������ ��אַ㣮���� ���न��� � ������
polar rect_to_polar(rect xypos)
{
    using namespace std;
    polar answer;
    answer.distance = sqrt (xypos.x * xypos.x + xypos.y * xypos.y);
    answer.angle = atan2(xypos.y, xypos.x);
    return answer;
}
//--------------------------------------------------------------------------------
// �⮡ࠦ���� ������� ���न��� � �८�ࠧ������� ࠤ��� � �ࠤ���
void show_polar(polar dapos)
{
    using namespace std;
    const double Rad_to_deg = 57.29577951;
    cout << "distance = " << dapos.distance;
    cout << ", angle = " << dapos.angle * Rad_to_deg;
    cout << " degrees\n"; 
}