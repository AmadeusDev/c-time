// zobrazenipole.cpp
// 2.10.2013
// program na zobrazování ciselných polí

#include <iostream>
using namespace std;

const int poceta = 12;		// max. pocet prvku pole a[]
const int pocetb = 11;		// max. pocet prvku pole b[]


void zobraz (int pole[], int pocet)			// predava se pointer na pole a velikost pole
{
	// procedura pro zobrazeni prvku pole
	for (int i=0;i<pocet;++i)		// cyklus pro vypis prvku
	{
		cout << pole[i] << " ";		// vlastni prikaz pro zobrazeni jednoho prvku
	}
	cout << endl;	// odradkovani na konci cyklu
	// return;
}

int main()
{
	int a[poceta] = {13,8,9,4,12,20,7,6,14,11,29,256};	// definice pole a
	int b[pocetb] = {18,4,3,17,25,89,283,147,47,58,13};	// definice pole b
	
	// vypis pole a
	cout << "Pole a\n";
	zobraz (a, poceta);		// preda adresu zacatku pole a[] a pocet prvku pole a[]
	
	// vypis pole b
	cout << "\nPole b\n";
	zobraz (b, pocetb);		// preda adresu zacatku pole b[] a pocet prvku pole b[]

	system ("pause");
	return 0;
}