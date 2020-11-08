#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double S, P;
	int i, k;

	// Перший спосіб
	S = 0;
	i = 5;
	while (i <= 25)
	{
		P = 1;
		k = 1;
		while (k <= i * i)
		{
			P *= k;
			k++;
		}
		S += sqrt(1.*i * i + P) / i;
		i++;
	}
	cout << S << endl;

	// Другий спосіб
	S = 0;
	i = 5;
	do {
		P = 1;
		k = 1;
		do {
			P *= k;
			k++;
		} while (k <= i * i);
		S += sqrt(1.*i * i + P) / i;
		i++;
	} while (i <= 25);
	cout << S << endl;

	// Третій спосіб
	S = 0;
	for (i = 5; i <= 25; i++)
	{
		P = 1;
		for (k = 1; k <= i * i; k++)
		{
			P *= k;
		}
		S += sqrt(1.*i * i + P) / i;
	}
	cout << S << endl;

	// Четвертий спосіб
	S = 0;
	for (i = 25; i >= 5; i--)
	{
		P = 1;
		for (k = i*i; k >= 1; k--)
		{
			P *= k;
		}
		S += sqrt(1.*i * i + P) / i;
	}
	cout << S << endl;
	return 0;
}
