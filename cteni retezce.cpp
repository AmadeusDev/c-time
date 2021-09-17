// cteni retezce.cpp
// 12.11.2013
// cteni a vypis retezcu

#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "*** Cteni a vypis retezcu ***\n\n";		// ohlaseni programu
	string ret = "";									// inicializace promenne ret
	cout << "Zadejte retezec znaku: ";					// vyzva prom uzivatele
	getline (cin, ret);									// cteni radku retezce z klavesnice
	cout << "Zadali jste retezec: " << ret << endl;		// vypis retezce na obrazovku

	system ("pause");
	return 0;
}