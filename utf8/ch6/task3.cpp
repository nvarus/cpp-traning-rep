/** Глава 6, задача № 3
 * Напишите прототип программы, управляемой меню. Она должна отображать меню из четырех пунктов,
 * каждый из них помечен буквой. Если пользователь вводит букву, отличающуюся от четырех
 * допустимых, программа  должна повторно приглашать его ввести правильное значение до тех пор,
 * пока он этого не сделает. Затем она должна выполнить некоторое простое действие на основе
 * пользовательского выбора. Работа программы должна выглядеть при- мерно так:
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
            default : cout << "Пожалуйста, вводите только : c, p, t и g\n";
        }
    showmenu();
    cin >> letter;
    }
}

void showmenu()
{
    cout << "Введите один из следующих вариантов:\n"
            "c) carnivore   p) pianist   t) tree   g) game   q) Выход\n";
}

void carnivore()
{
    cout << "\nОтряд плацентарных млекопитающих (Mammalia), состоящий из подотрядов\n"
            "собакообразных (Caniformia) и кошкообразных (Feliformia). Традиционное\n"
            "подразделение хищных на две сильно отличающиеся друг от друга по образу\n"
            "жизни группы - сухопутные хищные (Fissipedia) и ластоногие (Pinnipedia)\n"
            "- в настоящее время считается таксономически некорректным, поскольку\n"
            "противоречит имеющимся данным о филогении отряда\n";
}

void pianist()
{
    cout << "\nИсторический фильм Романа Полански, который был удостоен \"Золотой пальмовой\n"
            "ветви\" на Каннском кинофестивале 2002 года, а также трёх премий \"Оскар\", в том\n"
            "числе за лучшую режиссуру и лучшему актёру ? Эдриену Броуди. Фильм основан\n"
            "на реальных событиях и описывает историю пианиста Владислава Шпильмана.\n";
}

void tree()
{
    cout << "\nХудожественный фильм французского режиссёра Жюли Бертуччелли, снятый по новелле\n"
            "австралийской писательницы Джуди Паскоу \"Отче наш сущий на древе\". Фильм,\n"
            "представленный во внеконкурсной программе, был отобран для закрытия Каннского кинофестиваля.\n";
}

void game()
{
    cout << "\nПсихологический триллер Дэвида Финчера на тему игры в альтернативной реальности.\n";
}
