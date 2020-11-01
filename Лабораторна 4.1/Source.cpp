
#include <iostream> 
#include <cmath> 

using namespace std;

int main()
{
    int k, N, i;
    double S;

    cout << "k = "; cin >> k;
    cout << "N = "; cin >> N;

    S = 0;
    i = k;
    while (i <= N)
    {
        S += sin(cos(i)) / (1 + cos(i) * cos(i));
        i++;
    }
    cout << S << endl;
    S = 0;
    i = k;
    do {
        S += sin(cos(i)) / (1 + cos(i) * cos(i));
        i++;
    } while (i <= N);
    cout << S << endl;

    S = 0;
    for (i = k; i <= N; i++)
    {
        S += sin(cos(i)) / (1 + cos(i) * cos(i));
    }
    cout << S << endl;

    S = 0;
    for (i = N; i >= k; i--)
    {
        S += sin(cos(i)) / (1 + cos(i) * cos(i));
    }
    cout << S << endl;

    return 0;
}