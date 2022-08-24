/*******************************************************************************
 * strctfun.cpp -- функция с аргументами - структурами
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
    cout << "Введите значения x и у: ";
    while (cin >> rplace.x >> rplace.y)
    {
        pplace = rect_to_polar(rplace);
        show_polar(pplace);
        cout << "Введите следующие два числа (q для выхода): ";
    }
    cout << "Done.\n";
}
//--------------------------------------------------------------------------------
// Преобразование прямоугольных координат в полярные
polar rect_to_polar(rect xypos)
{
    using namespace std;
    polar answer;
    answer.distance = sqrt (xypos.x * xypos.x + xypos.y * xypos.y);
    answer.angle = atan2(xypos.y, xypos.x);
    return answer;
}
//--------------------------------------------------------------------------------
// Отображение полярных координат с преобразованием радиан в градусы
void show_polar(polar dapos)
{
    using namespace std;
    const double Rad_to_deg = 57.29577951;
    cout << "distance = " << dapos.distance;
    cout << ", angle = " << dapos.angle * Rad_to_deg;
    cout << " degrees\n"; 
}