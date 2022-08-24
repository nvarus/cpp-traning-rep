/**     Глава 6, задача 5
 * Королевство Нейтрония, где денежной единицей служит тварп, использует следующую шкалу налогообложения:
 *     x < 5001 -  0%
 *     5000 < x < 15001 - 10%
 *     15000 < x < 35001 - 15%
 *     х > 35000 - 20%
 * первые 5 000 тварпов ? налог 0% следующие 10 000 тварпов ? налог 10%
 * следующие 20 000 тварпов ? налог 15% свыше 35 000 тварпов ? налог 20%
 * Например, если некто зарабатывает 38 000 тварпов, то он должен заплатить налогов
 * 5000 х 0,00 + 10000 х 0,10 + 20000 х 0,15 + 3000 х 0,20, или 4 600 тварпов.
 * Напишите программу, которая использует цикл для запроса доходов и выдачи подлежащего к выплате налога.
 * Цикл должен завершаться, когда пользователь вводит отрицательное или нечисловое значение.
 */

#include<iostream>
double income = 0;
double NeutroniaTax(double);
int main(void)
{
    using namespace std;
    cout << "Введите сумму дохода в тварпах: ";
    while (cin >> income && income >= 0) 
        cout    << "Налог с вашего дохода составил: " << NeutroniaTax(income) << endl
                << "Следующая сумма: ";
}

double NeutroniaTax(double income)  // функция для подсчета налога, принимает значение дохода и возвращает сумму налога
{
const int t5 = 5000;
const int t15 = 15000;
const int t35 = 35000;
double TotalTax = 0;
const double p5_15 = 0.10;      // (t15 - t5) * p5_15
const double p15_35 = 0.15;     // (t35 - t15) * p15_35
const double p35 = 0.20;        // * p35
    if (income > t35)
        TotalTax = ((income - t35) * p35 + ((t15 - t5) * p5_15) + ((t35 - t15) * p15_35));       // (больше 35) * 0,20 + (от 15 до 35) * 0,15 + (от 5 до 15) * 0,10
    else if (t15 < income && income <= t35)
        TotalTax = (income - t15) * p15_35 + ((t15 - t5) * p5_15);
    else if (t5 < income && income <= t15)
        TotalTax = (income -t5) * p5_15;
    return TotalTax;
}
