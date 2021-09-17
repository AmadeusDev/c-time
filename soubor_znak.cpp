// soubor_znak.cpp
// 8.1.2014
// program na soucet znaku v souboru

#include <iostream>	// pro cout a cin
#include <string>	// pro nazev souboru a znak
#include <fstream>	// pro praci se souborem
using namespace std;

int main()
{
	cout << "*** Soucet znaku souboru ***\n\n";
	string s;	// pro nazev souboru
	const int chyba = -1;
	string znak;	// pro ulozeni precteneho znaku
	int soucet = 0;	// pocitadlo znaku
	cout << "Zadejte nazev souboru: ";
	cin >> s;
	ifstream fin (s);	// spojeni souboru s instanci fin
	if (!fin)	// test otevreni souboru
	{
		// osetreni chyby pri otevirani souboru
		cout << "Soubor se nepodarilo otevrit\n";
		system ("pause");
		return chyba;
	}
	// soubor se podarilo otevrit
	while (fin >> znak)	// dokud nenarazis na konec souboru
						// precti znak
	{
		soucet++;
	}
	cout << "Soubor " << s << " obsahuje "<< soucet << " znaku.\n\n";

	system("pause");
	return 0;
}