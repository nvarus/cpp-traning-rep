/*******************************************************************************
 * strctfun.cpp -- �㭪�� � ��㬥�⠬� - 㪠��⥫ﬨ �� ��������
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
void rect_to_polar(const rect *pxy, polar *pda);    //�.� polar ����������� �१ 㪠��⥫�, �������� ���祭�� �� �㦭�
void show_polar(const polar *pda);
//===============================================================================
int main(void)
{
    using namespace std;
    rect rplace;
    polar pplace;
    cout << "������ ���祭�� x � �: ";
    while (cin >> rplace.x >> rplace.y)
    {
        rect_to_polar(&rplace, &pplace);            // ��।�� ���ᮢ
        show_polar(&pplace);                        // ��।�� ���ᮢ    
        cout << "������ ᫥���騥 ��� �᫠ (q ��� ��室�): ";
    }
    cout << "Done.\n";
}
//--------------------------------------------------------------------------------
// �८�ࠧ������ ��אַ㣮���� ���न��� � ������
void rect_to_polar(const rect *pxy, polar *pda)
{
    using namespace std;
    // �������⥫쭠� ������� polar answer �� �㦭�, ࠡ�⠥� �����।�⢥��� � polar pplace �१ polar *pda
    pda->distance = sqrt (pxy->x * pxy->x + pxy->y * pxy->y);
    pda->angle = atan2(pxy->y, pxy->x);
    // return answer; -- �������� �� 祣�
}
//--------------------------------------------------------------------------------
// �⮡ࠦ���� ������� ���न��� � �८�ࠧ������� ࠤ��� � �ࠤ���
void show_polar(const polar *pda)
{
    using namespace std;
    const double Rad_to_deg = 57.29577951;
    cout << "distance = " << pda->distance;
    cout << ", angle = " << pda->angle * Rad_to_deg;
    cout << " degrees\n"; 
}