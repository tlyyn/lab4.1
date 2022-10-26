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
	k = N;
	i = 25;
	while (k <= i)
	{
		S += sqrt(1. + (N/k));
		k++;
	}
	cout << S << endl;

		S = 0;
	k = N;
	do {
		S += sqrt(1. + (N / k));
		k++;
	} while (k <= i);
	cout << S << endl;

	S = 0;
	for (k = N; k <= i; k++)
	{
		S += sqrt(1. + (N / k));
	}
	cout << S << endl;

	S = 0;
	for (k = i; k >= N; k--)
	{
		S += sqrt(1. + (N / k));
	}
	cout << S << endl;
	return 0;
}