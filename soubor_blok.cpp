// soubor_blok.cpp
// 12.1.2014
// program zpracovava soubor po blocich

#include <iostream>				// pro vstup a vystup na obrazovku
#include <fstream>				// pro soubory
#include <sstream>				// pro prevod retezce na cislo
#include <string>				// pro retezcove promenne
#include <iomanip>				// pro formatovany vystup
#include <locale>				// pro narodni jazykovou podporu
using namespace std;

// funkce toInt vraci cislo typu int
// parametrem je reference na retezec vyjadrujici cislo

    int toInt(string & s)
       {
          istringstream iss(s);		// volani metody istringstream standardni tridy stringstream
          int result;				// promenna pro ulozeni hodnoty retezce

          if (iss >> result)		// podaril se prevod?
          {
             return result;			// ano, vrat cislo
          }
          else						// ne, zobraz chybove hlaseni
          {
             string t("String: '"+s+"' is not a number");
             //throw exception("String: '"+s+"' is not a number");
			 cout  << t << endl;
          }
       }

int main()
{
	string s;					// pro jmeno souboru
	const int chyba = 1;		// program vraci 1 pri chybe
	setlocale (LC_ALL, "");		// nastaveni narodni jazykove podpory

	cout << "*** Zpracovani souboru po blocich\n\n";
	cout << "Zadejte nazev souboru: ";
	cin >> s;

	ifstream fin (s);	// svazani objektu ifstream s prvkem fin
	// test spravneho otevreni souboru
	if (!fin)					// nastala chyba pri otevirani souboru?
	{	// ano, vypis chybove hlaseni
		cout << "Soubor " << s << " nelze otevrit pro cteni.\n";
		system ("pause");
		return chyba;	// ukonci funkci a vrat chybovy kod
	}
	// chyba nenastala, cteni znaku ze souboru
	string radek;				// buffer pro radek souboru
	int poloha = 0;				// poloha oddelovace v retezci
	int delka = 0;				// zjisteni delky retezce
	int polohazac = 0;
	string ret1 = "";			// retezce pro jednotlive polozky radku
	string ret2 = "";
	string ret3 = "";
	string ret4 = "";
	cout << endl;				// odradkuj

	while (getline(fin, radek))	// dokud nenarazis na konec souboru, tak precti radek
	{
		// zpracovani radku po blocich pomoci metody assign
		//cout << radek << endl;	// vypis radku na obrazovku
	polohazac = 0;				// poloha zacatku retezce
	delka = radek.length();		// zjisteni delky retezce
	poloha = radek.find(",");		// najdi pozici carky
	
	ret1.assign(radek,polohazac,poloha-polohazac);	// zkopiruj retezec po carku
	// metode assign se zadava
	// nazev retezce, ze ktereho se kopiruje
	// pozice ve retezci, od ktere se kopiruje
	// pocet kopirovanych znaku

	polohazac = poloha+1;		// poloha zacatku dalsiho retezce je az za carkou
	poloha = radek.find_first_of(",",polohazac);				// najdi pozici dalsi carky
	ret2.assign(radek,polohazac,poloha - polohazac);			// zkopiruj retezec po carku
	
	polohazac = poloha+1;		// poloha zacatku dalsiho retezce
	poloha = radek.find_first_of(",",polohazac);				// najdi pozici dalsi carky
	ret3.assign(radek,polohazac,poloha - polohazac);			// zkopiruj retezec po carku
	

	polohazac = poloha+1;		// poloha zacatku dalsiho retezce
	poloha = radek.find_first_of(",",polohazac);				// najdi pozici dalsi carky
	ret4.assign(radek,polohazac,poloha - polohazac);			// zkopiruj retezec po carku

	cout << setw(15) << left << ret1;		// zobraz retezec ret1
	cout << setw(15) << left << ret2;		// zobraz retezec ret2
	cout << setw(10) << left << ret3;		// zobraz retezec ret3
	cout << setw(15) << left << ret4;		// zobraz retezec ret4
	cout << endl;					// odradkuj
	}
	// cteni ze souboru provadime v kulatych zavorkach, zapis dat do souboru ve slozenych
	// eof se testuje samo

	// ukazka prevodu retezce na cislo za pomoci systemove standardni tridy stringstream

	cout << "\nPrevod retezce na cislo\n\n";
	cout << "Retezec: " << ret3 << "\tCislo: ";
	int cislo = toInt(ret3);
	cout << cislo << endl;

	cout << "Retezec: " << ret4 << "\t";
	cislo = toInt(ret4);
	cout << "Cislo: ";

	system ("pause");
	return 0;
}
