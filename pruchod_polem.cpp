// pruchod_polem.cpp
// 20.1.2013

#include <iostream>
#include <string>
using namespace std;

// sekvencni pruchod polem

struct student
	{
		int cislo;					// cislo v tridnim vykazu
		string prijmeni;			// prijmeni
		string jmeno;				// krestni jmeno
		string bydliste;			// bydliste
		double prumer;				// prumer znamek studenta
	};

int main()
{
	// jednoduche pole prvku typu double
	enum { N= 10};
	double poleA [N] = { 1,2,3,4,5,6,7,8,9,10};
	double *zac = poleA;				// adresa pole[0], tj. zacatku pole
	double *kon = zac + N;			// adresa konce pole, tj. prvniho prvku za polem
	// vypis pole prvku typu doule
	cout << "Vypis jednoducheho pole pomoci smycky for\n";
	for( ;zac < kon ;++zac )		// rychle zpracovani prvku pole ve smycce for
	{								// ++zac pripocita delku jednoho prvku pole typu double
		cout << *zac << " ";
	}
	cout << "\n";					// odradkovani

	// pole prvku typu struktura
	student zak [N];				// vytvoreni pole typu student o 10. prvcích
	// naplneni hodnot pole
	for (int i = 0; i < N; ++i)
	{
		zak [i].cislo = i;
	}
	zak[0].prijmeni = "Novak"; zak[0].jmeno = "Jozef"; zak[0].bydliste = "Brod"; zak[0].prumer = 1.23;
	zak[1].prijmeni = "Dobrak"; zak[1].jmeno = "Jan"; zak[1].bydliste = "Banov"; zak[1].prumer = 1.72;
	zak[2].prijmeni = "Crla"; zak[2].jmeno = "Tomas"; zak[2].bydliste = "Nivnice"; zak[2].prumer = 2.13;
	zak[3].prijmeni = "Drla"; zak[3].jmeno = "Jaromir"; zak[3].bydliste = "Luhacovice"; zak[3].prumer = 1.42;
	zak[4].prijmeni = "Kolarikova"; zak[4].jmeno = "Eva"; zak[4].bydliste = "Sucha Loz"; zak[4].prumer = 1.23;
	zak[5].prijmeni = "Jurasek"; zak[5].jmeno = "Lukas"; zak[5].bydliste = "Vlcnov"; zak[5].prumer = 2.62;
	zak[6].prijmeni = "Kosecek"; zak[6].jmeno = "Adam"; zak[6].bydliste = "Hluk"; zak[6].prumer = 1.83;
	zak[7].prijmeni = "Lacnak"; zak[7].jmeno = "Antonin"; zak[7].bydliste = "Havrice"; zak[7].prumer = 1.39;
	zak[8].prijmeni = "Safarova"; zak[8].jmeno = "Anna"; zak[8].bydliste = "Kolin"; zak[8].prumer = 2.10;
	zak[9].prijmeni = "Svecova"; zak[9].jmeno = "Zuzana"; zak[9].bydliste = "Hradiste"; zak[9].prumer = 2.23;

	// vypis hodnot pole zak pomoci indexu pole, pomale zpracovani
	cout << "Vypis strukturovaneho pole pomoci smycky for a indexu pole\n";
	for (int i = 0; i < N; ++i)
	{
		cout << zak [i].cislo << " ";
		cout << zak [i].prijmeni << " ";
		cout << zak [i].jmeno << " ";
		cout << zak [i].bydliste << " ";
		cout << zak [i].prumer << " ";
		cout << "\n";
	}
	cout << "\n";
	
	// vypis hodnot pomoci ukazatelu
	student *szac = zak;			// ulozeni zacatku pole, prvkem pole je struktura student
	student *skon = zak + N;		// ulozeni konce pole
	cout << "szac = " << szac << "\n";
	cout << "skon = " << skon << "\n";
	
	// vypis hodnot pomoci ukazatele tecka a operatoru zruseni odkazu
	cout << "Vypis strukturovaneho pole pomoci smycky for a zruseni odkazu\n";

	for( ;szac < skon ;++szac )	// rychle zpracovani prvku pole ve smycce for
	{
		cout << (*szac).cislo << " ";
		cout << (*szac).prijmeni << " ";
		cout << (*szac).jmeno << " ";
		cout << (*szac).bydliste << " ";
		cout << (*szac).prumer << " ";
		cout << "\n";
	}
	cout << "\n";
	
	// vypis hodnot pomoci ukazatele sipka
	cout << "Vypis strukturovaneho pole pomoci smycky for a sipky\n";
	szac = zak;					// nastaveni ukazatele na zacatek pole
	//skon = zak + N;			// nastaveni ukazatele na konec pole (je uz nastaveny)
	cout << "szac = " << szac << "\n";	// tisk hodnot adres zacatku
	cout << "skon = " << skon << "\n";	// a konce pole
	for( ;szac < skon ;++szac )	// rychle zpracovani prvku pole ve smycce for
	{
		cout << szac->cislo << " ";
		cout << szac->prijmeni << " ";
		cout << szac->jmeno << " ";
		cout << szac->bydliste << " ";
		cout << szac->prumer << " ";
		cout << "\n";
	}
	cout << "\n";

	system ("pause");				// pozastaveni vypoctu
}