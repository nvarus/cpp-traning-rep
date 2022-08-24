/*******************************************************************************
 * strctfun.cpp -- функция с аргументами - указателями на структуру
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
void rect_to_polar(const rect *pxy, polar *pda);    //т.к polar модифицируется через указатель, возвращать значение не нужно
void show_polar(const polar *pda);
//===============================================================================
int main(void)
{
    using namespace std;
    rect rplace;
    polar pplace;
    cout << "Введите значения x и у: ";
    while (cin >> rplace.x >> rplace.y)
    {
        rect_to_polar(&rplace, &pplace);            // передача адресов
        show_polar(&pplace);                        // передача адресов    
        cout << "Введите следующие два числа (q для выхода): ";
    }
    cout << "Done.\n";
}
//--------------------------------------------------------------------------------
// Преобразование прямоугольных координат в полярные
void rect_to_polar(const rect *pxy, polar *pda)
{
    using namespace std;
    // дополнительная структура polar answer не нужна, работаем непосредственно с polar pplace через polar *pda
    pda->distance = sqrt (pxy->x * pxy->x + pxy->y * pxy->y);
    pda->angle = atan2(pxy->y, pxy->x);
    // return answer; -- возвращать не чего
}
//--------------------------------------------------------------------------------
// Отображение полярных координат с преобразованием радиан в градусы
void show_polar(const polar *pda)
{
    using namespace std;
    const double Rad_to_deg = 57.29577951;
    cout << "distance = " << pda->distance;
    cout << ", angle = " << pda->angle * Rad_to_deg;
    cout << " degrees\n"; 
}