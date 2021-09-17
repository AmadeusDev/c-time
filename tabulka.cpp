// tabulka.cpp
// 7.10.2013
// program na vypocet hodnot funkce cos x

#include <iostream>
#include <cmath>
using namespace std;

const double pi = 3.1415926;
const int pocet = 100;

int main()
{
	double x,f;
	double pole[pocet];
	int j=0;
	for (int i=0;i<=90;i+=5,++j)
	{
		x = pi/180*i;
		f = cos(x);
		pole[j]=f;
		cout << "cos (" << i << " st.) = " << f << "\n";
	}

	for (int i=0;i<j;++i)
	{
	cout << "pole[" << i  << "]= " << pole[i] << endl;
	}

	system("pause");
	return 0;
}