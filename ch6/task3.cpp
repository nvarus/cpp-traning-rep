/** ����� 6, ����� � 3
 * ������ ���⨯ �ணࠬ��, �ࠢ�塞�� ����. ��� ������ �⮡ࠦ��� ���� �� ����� �㭪⮢,
 * ����� �� ��� ����祭 �㪢��. �᫨ ���짮��⥫� ������ �㪢�, �⫨������� �� �����
 * �����⨬��, �ணࠬ��  ������ ����୮ �ਣ����� ��� ����� �ࠢ��쭮� ���祭�� �� �� ���,
 * ���� �� �⮣� �� ᤥ����. ��⥬ ��� ������ �믮����� �����஥ ���⮥ ����⢨� �� �᭮��
 * ���짮��⥫�᪮�� �롮�. ����� �ணࠬ�� ������ �룫拉�� ��- ��୮ ⠪:
 *      Please enter one of the following choices:
 *      c) carnivore	p)	pianist t) tree	g)	game
 *      f
 *      Please enter a	c,	p, t,	or	g:	q
 *      Please enter a	c,	p, t,	or	g:	t
 *      A maple is a tree.
 */
#include<iostream>
using namespace std;
void showmenu();
void carnivore();
void pianist();
void tree();
void game();

int main(void)
{
    char letter;
    showmenu();
    cin >> letter;

    while (letter != 'Q' && letter != 'q')
    {
        switch (letter)
        {
            case 'c':
            case 'C': carnivore();
                    break;
            case 'p':
            case 'P': pianist();
                    break;
            case 't':
            case 'T': tree();
                    break;
            case 'g':
            case 'G': game();
                    break;
            default : cout << "��������, ������ ⮫쪮 : c, p, t � g\n";
        }
    showmenu();
    cin >> letter;
    }
}

void showmenu()
{
    cout << "������ ���� �� ᫥����� ��ਠ�⮢:\n"
            "c) carnivore   p) pianist   t) tree   g) game   q) ��室\n";
}

void carnivore()
{
    cout << "\n���� ���業���� ����������� (Mammalia), ����騩 �� ������冷�\n"
            "ᮡ�����ࠧ��� (Caniformia) � ��誮��ࠧ��� (Feliformia). �ࠤ�樮����\n"
            "���ࠧ������� ���� �� ��� ᨫ쭮 �⫨��騥�� ��� �� ��㣠 �� ��ࠧ�\n"
            "����� ��㯯� - ��宯��� ��� (Fissipedia) � ���⮭���� (Pinnipedia)\n"
            "- � �����饥 �६� ��⠥��� ⠪ᮭ����᪨ �����४��, ��᪮���\n"
            "��⨢���� ����騬�� ����� � 䨫������ ���鸞\n";
}

void pianist()
{
    cout << "\n�����᪨� 䨫� ������ �����᪨, ����� �� 㤮�⮥� \"����⮩ ���쬮���\n"
            "��⢨\" �� ����᪮� ������⨢��� 2002 ����, � ⠪�� ���� �६�� \"�᪠�\", � ⮬\n"
            "�᫥ �� ������ ०������ � ���襬� ������ ? ��ਥ�� ��㤨. ���� �᭮���\n"
            "�� ॠ���� ᮡ���� � ����뢠�� ����� ������� �����᫠�� ����쬠��.\n";
}

void tree()
{
    cout << "\n�㤮���⢥��� 䨫� �࠭��᪮�� ०����� � ������祫��, ���� �� �������\n"
            "����ࠫ��᪮� ���⥫쭨�� ��㤨 ��᪮� \"��� ��� ��騩 �� �ॢ�\". ����,\n"
            "�।�⠢����� �� ���������᭮� �ணࠬ��, �� �⮡࠭ ��� ������� ����᪮�� ������⨢���.\n";
}

void game()
{
    cout << "\n��宫����᪨� �ਫ��� ���� ����� �� ⥬� ���� � ����ୠ⨢��� ॠ�쭮��.\n";
}
