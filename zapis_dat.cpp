// zapis_dat.cpp
// 8.11.2013
// zapis dat do souboru

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <fstream>

using namespace std;

struct clovek
{
		string prijmeni;
		string jmeno;
		int rok;
		string bydliste;
};

int toInt(string & s)
   {
      istringstream iss(s);
      int result;

      if (iss >> result)
      {
         return result;
      }
      else
      {
         string t("String: '"+s+"' is not a number");
         throw exception(t.c_str());
      }
   }
int main()
{
	cout << "Zapis dat do souboru\n" << endl;
	string soubor = "";	// retezec znaku pro nazev souboru
	string radek = "";	// radek znaku z klavesnice
	cout << "Zadejte nazev souboru ";
	getline (cin, soubor);
	cout << "Nazev souboru :" << soubor << endl;
	ofstream fout (soubor);
	const int maxpocet = 10;	// maximalni pocet prvku pole
	clovek student[maxpocet];	// vytvoreni pole studentu, prvky pole jsou struktury clovek
	int pocet = 0;
	cout << "Zadejte pocet zadavanych studentu ";
	cin >> pocet;
	// zadavani udaju do struktury
	// pocet <= maxpocet
	getline(cin,radek);			// vyprazdneni vstupniho bufferu
	for (int i=0; i<pocet; i++)
	{
		cout << "index " <<i << "\nprijmeni ";
		getline(cin, radek);
		student[i].prijmeni = radek;
		
		cout << "jmeno ";
		getline(cin, radek);
		student[i].jmeno = radek;

		cout << "rok ";
		getline(cin,radek);
		try
		{
		student[i].rok = toInt(radek);
		}
		catch (exception & e)
		{
			cerr << e.what() << endl;
		}

		cout << "bydliste ";
		getline(cin, radek);
		student[i].bydliste = radek;
		cout << endl;
	}
	cout << endl;

	// vypis pole studentu na obrazovku
	for (int i=0; i< pocet; i++)
	{
		cout << "index " << setw(3) << i;
		cout << " prijmeni " << setw(10) << student[i].prijmeni;
		
		cout << " jmeno " << setw(10) << student[i].jmeno;
		cout << " rok " << setw(5) << student[i].rok;
		cout << " bydliste " << setw(12) << student[i].bydliste;
		
		cout << endl;
	}
	cout << endl;
	
	// zapis pole studentu do souboru
	for (int i=0; i< pocet; i++)
	{
		//fout << "index " << setw(3) << i;
		fout << setw(10) << student[i].prijmeni;
		
		fout << setw(10) << student[i].jmeno;
		fout << setw(5) << student[i].rok;
		fout << setw(12) << student[i].bydliste;
		
		fout << endl;
	}

	system ("pause");
	return 0;
	
}