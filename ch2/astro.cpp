/** �ணࠬ��, � ���ன �㭪�� main() ��뢠�� �㭪��, �ਭ������� � ����⢥ ��㬥��
 *  ����ﭨ� � ᢥ⮢�� ����� (LightYears) � ��������� ���ﭨ� �
 *  ���஭����᪨� ������� (AstroUnits)
 *  
 *  AstroUnits = LightYears * 63240
 */

#include<iostream>
double Astro_Trans(double);     // ���⨯ �㭪樨, ��ॢ���饩 ᢥ⮢� ���� � �.�.

int main()
{
    using namespace std;
    double LightYears;

    cout << "������ ���祭�� � ᢥ⮢�� �����: ";
    cin >> LightYears;
    cout << LightYears << " ᢥ⮢�� ���� = " << Astro_Trans(LightYears) << " ���஭����᪨� �����栬.";

    return 0;
}

double Astro_Trans(double LightYears)       // ⥫� �㭪樨 Astro_Trans
{
    int AstroUnits = LightYears * 63240;

    return AstroUnits;
}