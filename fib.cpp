// fib.cpp
// 2.10.2013
// vypocet fibonacciho posloupnosti

#include <iostream>
using namespace std;

const int pocet = 100;	// pocet prvku pole
double f[pocet];		// pole pro ulozeni hodnot posloupnosti

int main()
{

	f[0] = 1;		// 1. clen posloupnosti
	f[1] = 1;		// 2. clen posloupnosti

	for (int i=2; i<pocet; ++i)
	{
		f[i] = f[i-2] + f[i-1];	// vypocet i-teho clenu posloupnosti
	}

	// vypis hodnot pole f
	for (int i=0; i<pocet; ++i)
	{
		cout << "f[" << i << "]= ";
		cout << f[i] << "\n";
	}
	cout << endl;

	system ("pause");
	return 0;
}