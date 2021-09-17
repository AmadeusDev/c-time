// zapis_za_pole.cpp
// 14.11.2012
// Ukazuje, co se stane p�i z�pisu za konec pole

#include <iostream>
using namespace std;

int main()
{
	// hl�dky
	long hlidkaJedna[3];
	long CilovePole[25]; // napl�ovan� pole
	long hlidkaDve[3];
	int i;
	for (i=0; i<3; i++)
		hlidkaJedna[i] = hlidkaDve[i] = 0;

	for (i=0; i<25; i++)
		CilovePole[i] = 0;

	cout << "Test 1: \n";  // testov�n� aktu�ln�ch hodnot (m�ly by b�t 0)
	cout << "CilovePole[0]: " << CilovePole[0] << "\n";
	cout << "CilovePole[24]: " << CilovePole[24] << "\n\n";

	for (i = 0; i<3; i++)
	{
		cout << "hlidkaJedna[" << i << "]: ";
		cout << hlidkaJedna[i] << "\n";
		cout << "hlidkaDve[" << i << "]: ";
		cout << hlidkaDve[i]<< "\n";
	}

	cout << "\nPrirazuji...";
	for (i = 0; i<=25; i++)
		CilovePole[i] = 20;

	cout << "\nTest 2: \n";
	cout << "CilovePole[0]: " << CilovePole[0] << "\n";
	cout << "CilovePole[24]: " << CilovePole[24] << "\n";
	cout << "CilovePole[25]: " << CilovePole[25] << "\n\n";
	for (i = 0; i<3; i++)
	{
		cout << "hlidkaJedna[" << i << "]: ";
		cout << hlidkaJedna[i]<< "\n";
		cout << "hlidkaDve[" << i << "]: ";
		cout << hlidkaDve[i]<< "\n";
	}

	system ("pause");
	return 0;
}
