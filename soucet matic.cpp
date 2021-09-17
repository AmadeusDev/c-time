// soucet matic.cpp
// 10.12.2013
// soucet matic rozmeru m x n

#include <iostream>
using namespace std;

int main()
{
	cout << "*** Soucet matic ***\n\n";
	cout << "Zadejte rozmery matic\n";
	int m,n;	// pocet radku a sloupcu matic
	const int radek = 100;	// max. pocet radku matic
	const int sloupec = 100;	// max. pocet sloupcu matic
	double a[radek] [sloupec];	// matice A
	double b[radek] [sloupec];	// matice B
	double c[radek] [sloupec];	// matice vysledku C = A+B

	cout << "pocet radku m: ";
	cin >> m;
	cout << "pocet sloupcu n: ";
	cin >> n;
	cout << "\nZadejte matici A\n";
	for (int i=0;i<m;i++)
	{
		for (int j=0; j<n; j++)
		{
			cout << "a(" << i<< "," << j << "): ";
			cin >> a[i] [j];
		}
	}
	cout << "\nZadejte matici B\n";
	for (int i=0;i<m;i++)
	{
		for (int j=0; j<n; j++)
		{
			cout << "b(" << i<< "," << j << "): ";
			cin >> b[i] [j];
		}
	}
	// cyklus pro soucet matic C = A + B
	for (int i=0;i<m;i++)
	{
		for (int j=0; j<n; j++)
		{
			c[i] [j]= a[i] [j] + b[i] [j];
		}
	}
	// vypis matic A a B po radcich
	for (int i=0;i<m;i++)
	{
		for (int j=0; j<n; j++)
		{
			//cout << "c(" << i<< "," << j << ")=";
			cout << a[i] [j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	
	for (int i=0;i<m;i++)
	{
		for (int j=0; j<n; j++)
		{
			//cout << "c(" << i<< "," << j << ")=";
			cout << b[i] [j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	// vypis matice C po radcich
	for (int i=0;i<m;i++)
	{
		for (int j=0; j<n; j++)
		{
			//cout << "c(" << i<< "," << j << ")=";
			cout << c[i] [j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	system("pause");
	return 0;
}