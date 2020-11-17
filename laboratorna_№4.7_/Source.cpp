#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double xp, xk, x, dx, eps, a = 0, R = 0, S = 0;
    const double Pi = acos(-1.0);
    int n = 0;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "eps = "; cin >> eps;
    cout << fixed;
    cout << "-------------------------------------------------" << endl;
    cout << "|" << setw(5) << "x" << " |"
        << setw(10) << "acos(x)" << " |"
        << setw(7) << "(Pi)/2.-(x+S)" << " |"
        << setw(5) << "n" << " |"
        << endl;
    cout << "-------------------------------------------------" << endl;
    x = xp;
    while (x <= xk)
    {
        n = 1;
        a = (x * x * x) / 6.;
        S = a + x;
        do {
            n++;
            R = (pow(2 * n - 1, 2) * pow(x, 2)) / (2. * n * (2. * n + 1));
            a *= R;
            S += a;
        } while (abs(a) >= eps);
        cout << "|" << setw(7) << setprecision(2) << x << " |"
            << setw(10) << setprecision(5) << acos(x) << " |"
            << setw(10) << setprecision(5) << Pi / 2 - S << " |"
            << setw(5) << n << " |"s
            << endl;
        x += dx;
    }
    cout << "-------------------------------------------------" << endl;
    return 0;
}