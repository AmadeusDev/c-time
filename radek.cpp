// radek.cpp
// 23.10.2013
// ukazka zpracovani radku retezce

#include <iostream>
#include <string>
#include <sstream>					// hlavickovy soubor pro prevod retezce na cislo
//#include <crtdbg.h>				// dobre pri ladeni programu

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
	//_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	// dobre pro pomoc pri hledani chyb pri osetrovani vyjimek pomoci throw

	cout << "*** Zpracovani radku retezce ***\n\n";
	string ret = "Adam,Novak,1982,Brod";	// objekt pro retezec
	
	string ret1 = "";						// retezce pro jednotlive polozky radku
	string ret2 = "";
	string ret3 = "";
	string ret4 = "";			

	cout << ret << endl;

	// zpracovani polozek radku
	// pomoci metody append

	int poloha = ret.find(",");				// poloha oddelovace v retezci
	int delka = ret.length();				// zjisteni delky retezce
	int polohazac = 0;						// ulozeni polohy zacatku retezce

	cout << "Delka retezce ret = " << delka << endl << endl;
		
	ret1.append(ret, polohazac,poloha);		// zkopiruj polozku retezce
	
	polohazac = 0;							// poloha zacatku retezce
	ret.erase(0,poloha+1);					// vymaz retezec po carku
	delka = ret.length();					// zjisti aktualni delku retezce
	poloha = ret.find(",");					// najdi pozici carky
	ret2.append(ret,polohazac, poloha);		// zkopiruj polozku retezce
	
	polohazac = 0;
	ret.erase(0,poloha+1);
	delka = ret.length();
	poloha = ret.find(",");
	ret3.append(ret,polohazac, poloha);		// zkopiruj polozku retezce

	polohazac = 0;
	ret.erase(0,poloha+1);
	delka = ret.length();
	poloha = ret.find(",");
	ret4.append(ret,polohazac, poloha);		// zkopiruj polozku retezce
	
	
	cout << ret1 << endl;
	cout << ret2 << endl;
	cout << ret3 << endl;
	cout << ret4 << endl << endl;

	// zpracovani pomoci metody assign
	ret = "Jozef,Domecek,1954,Ujezdec";
	cout << ret << endl << endl;

	polohazac = 0;				// poloha zacatku retezce
	delka = ret.length();		// zjisteni delky retezce
	poloha = ret.find(",");		// najdi pozici carky
	
	ret1.assign(ret,polohazac,poloha-polohazac);	// zkopiruj retezec po carku
	// metode assign se zadava
	// nazev retezce, ze ktereho se kopiruje
	// pozice ve retezci, od ktere se kopiruje
	// pocet kopirovanych znaku

	polohazac = poloha+1;		// poloha zacatku dalsiho retezce je az za carkou
	poloha = ret.find_first_of(",",polohazac);				// najdi pozici dalsi carky
	ret2.assign(ret,polohazac,poloha - polohazac);			// zkopiruj retezec po carku
	
	polohazac = poloha+1;		// poloha zacatku dalsiho retezce
	poloha = ret.find_first_of(",",polohazac);				// najdi pozici dalsi carky
	ret3.assign(ret,polohazac,poloha - polohazac);			// zkopiruj retezec po carku
	

	polohazac = poloha+1;		// poloha zacatku dalsiho retezce
	poloha = ret.find_first_of(",",polohazac);				// najdi pozici dalsi carky
	ret4.assign(ret,polohazac,poloha - polohazac);			// zkopiruj retezec po carku

	cout << ret1 << endl;		// zobraz retezec
	cout << ret2 << endl;		// zobraz retezec
	cout << ret3 << endl;		// zobraz retezec
	cout << ret4 << endl;		// zobraz retezec
	cout << endl;

	// ukazka prevodu retezce na cislo za pomoci systemove standardni tridy stringstream

	cout << "Prevod retezce na cislo\n\n";
	cout << "Retezec: " << ret3 << "\tCislo: ";
	int cislo = toInt(ret3);
	cout << cislo << endl;

	cislo = toInt(ret4);
	cout << "Retezec: " << ret4 << "\tCislo: ";

	system ("pause");
	return 0;
}
