// rezistory.cpp
// 18.9.2013
// program na vypocet paralelniho razeni rezistoru

#include <iostream>

using namespace std;

int main ()
{
	const int n = 10;		// maximalni pocet rezistoru
	double r [n];			// deklarace pole r o n prvcich
	
	for (int i=0; i<n; ++i)
	{
		r [i] = 0;			// prirazeni pocatecnich hodnot prvkum pole
	}
	int pocet;
	cout << "Zadejte pocet rezistoru: ";
	cin >> pocet;
	// doplnit test zda pocet je z intervalu 1 az n
	// zadavani vstupnich udaju
	for (int i=0; i<pocet; ++i)
	{
		cout << "Zadejte hodnotu rezistoru r [" << i << "]: ";
		cin >> r[i];
	}
	double pom = 0;		// pomocna promenna pro vypocet
	for (int i=0; i<pocet; ++i)
	{
		pom += 1/r[i];	// vypocet polozek vysledne hodnoty rezistoru
	}
	pom = 1/pom;		// prevracena hodnota
	cout << "\n\n";
	cout << "Vysledna hodnota rezistoru je: " << pom << " ohmu\n";

	system ("pause");
	return 0;
}