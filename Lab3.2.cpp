// Lab_03_2.cpp
// Огонюк Назар
// Лабораторна робота No 3.2
// Розгалуження, задане формулою: функція з параметрами.
// Варіант 12

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, x, b, c, F;

    cout << "a = "; cin >> a;
    cout << "x = "; cin >> x;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;

    if (x < 0.6 && b + c != 0)
       F = a * pow(x, 2) + pow(b, 2) + c;
    if (x > 0.6 && b + c == 0)
        F = (x - a) / (x - c);
    if (!(x < 0.6 && b + c != 0) && !(x > 0.6 && b + c == 0))
         F = x / c + x / a;

    cout << "1)F = " << F << endl;

    // Спосіб 2

    if (x < 0.6 && b + c != 0)
        F = a * pow(x, 2) + pow(b, 2) + c;
    else
        if (x > 0.6 && b + c == 0)
            F = (x - a) / (x - c);
        else
            F = x / c + x / a;

    cout << "2)F = " << F << endl;

    system("pause");
    cin.get();
    return 0;
}
