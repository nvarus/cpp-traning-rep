/****************************************************************************************
 * travel.cpp -- �ᯮ�짮����� �������� � �㭪樥�                                     *
 * �ணࠬ�� ����������� ��।��� �������� � �㭪�� �� ���祭�� �                   *
 * ������ �㭪樥� ���祭�� � ���� ��������                                           *
 *                                                                                      *
 * travel_time sum(travel_time t1, travel_time t2);                                     *
 * �㭪��, �ਭ������ ��� �������� t1 � t2, �㬬������ ��� � ������                *    
 * � ��������� �������� total � �㭪�� main()                                      *
 *                                                                                      *    
 * void show_time(travel_time t);                                                       *
 * �㭪�� �ਭ������ �������� � �뢮���� �� �࠭ �� ���祭��                       *
 * � ��� � ������                                                                    *
 *                                                                                      *    
 * �����������                                                                          *        
 * 1.   Mins_per_hr -- ����⠭�, ��� �࠭���� ���-�� ����� � ��, �ᯮ������        *    
 *      ��� ��宦����� 楫��� ������⢠ �ᮢ �� ᫮����� ����� � ��宦�����          *
 *      ��⠢���� ����� � ������� ������� �� ����� %.                                 *
 * 2.   ��뢠���� �㭪樨 show_time � ����⢥ ��㬥�� ��।����� �㭪�� sum        *
 *      � ���� ��㬥�⠬�.                                                            *
 * 3.   ��宦����� ���⪠ �� ������� �� 60, �� � �㤥� ��⠢襥�� ������⢮ �����    *    
 * 4.   ��宦����� ������⢠ �ᮢ ��।������ ��� �㬬� �ᮢ + �������� ��          *
 *      楫� �� 60 ������⢮ �����                                                     *
 ***************************************************************************************/

#include<iostream>
struct travel_time
{
    int hours;
    int mins;
};  
const int Mins_per_hr = 60;                                                     /*  1   */
travel_time sum(travel_time t1, travel_time t2);
void show_time(travel_time t);
//========================================================================================
int main()
{
    travel_time day1 = {5, 45};
    travel_time day2 = {4, 55};
    travel_time trip = sum(day1, day2);
    std::cout << "Two day total: ";
    show_time(trip);
    travel_time day3 = {4, 32};
    show_time(sum(trip, day3));                                                 /*  2   */
    return 0;
}
//----------------------------------------------------------------------------------------
travel_time sum(travel_time t1, travel_time t2)
{
    travel_time total;
    total.mins = (t1.mins + t2.mins) % Mins_per_hr;                             /*  3   */
    total.hours = t1.hours + t2.hours + (t1.mins + t2.mins) / Mins_per_hr;      /*  4   */
    return total;
}
//----------------------------------------------------------------------------------------
void show_time(travel_time t)
{
    std::cout   << t.hours << " hours, " 
                << t.mins << " minutes" << std::endl;
}