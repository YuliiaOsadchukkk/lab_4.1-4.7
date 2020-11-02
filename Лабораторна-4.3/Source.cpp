#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double x, xp, xk, dx, a, b, c, F;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << fixed;
    cout << "----------------------" << endl;
    cout << "|" << setw(5) << "x" << "   |"
        << setw(7) << "F" << "    |" << endl;
    cout << "----------------------" << endl;
    x = xp;
    while (x <= xk)
    {

        if (x < 0 && b != 0)
            F = (c - 2 * x) / (c * x - a);
        else
            if ((x > 0) && (b == 0))
                F = (x - a) / (x - c);
            else
                F = -(x / c) - c / (2 * x);


        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(10) << setprecision(3) << F
            << " |" << endl;
        x += dx;
    }
    cout << "----------------------" << endl;
    return 0;
}