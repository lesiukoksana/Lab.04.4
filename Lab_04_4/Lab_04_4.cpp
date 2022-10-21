// Lab_04_4.cpp
// Лесюк Оксана
// Лабораторна робота № 4.4
// Табуляція функції, заданої графіком
// Варіант 13

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double R, xp, xk, dx, x, y;

    cout << "R = "; cin >> R;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "----------" << endl;
    cout << "|" << setw(7) << "y" << " |" << endl;

    x = xp;
    while (x <= xk)
    {
        if (x <= -R)
            y = R + x;
        else
            if (-R < x && x <= 0)
                y = sqrt(R * R - x * x);
            else
                if (0 <= x && x < 6)
                    y = R - (R * x) / 6;
                else
                    y = x - 6;

        cout << "|" << setw(7) << setprecision(2) << y
            << " |" << endl;
        x += dx;
    }

    cout << "----------" << endl;
    return 0;
}
