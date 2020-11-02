#include <iostream> 
#include <iomanip> 
#include <cmath> 

using namespace std;

int main()
{
    double x, xp, xk, dx, A, B, y;

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "x" << "     |"
        << setw(7) << "y" << "       |" << endl;
    cout << "---------------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        A = sin(x) / cos(x) + 1;
        if (x <= -5)
            B = exp(x / (1 - x));
        else
            if (-5 < x && x <= 3)
                B = 3.2 + log10(1.8 * x * x);
            else
                B = fabs(x) * sqrt(x);

        y = A - B;
        cout << "|" << setw(7) << setprecision(2) << x
            << "   |" << setw(10) << setprecision(3) << y
            << "    |" << endl;
        x += dx;
    }
    cout << "---------------------------" << endl;

    return 0;
}
