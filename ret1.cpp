// ret1.cpp
// 18.11.2013
// cteni retezce

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	string ret = " Ahoj vole. Co delas? Jak se mas? Cau.";
	cout << "Zadejte hledany znak: ";
	char znak;

	cin >> znak;
	int pocet = 0;
	int delka = ret.length();
	for (int i=0;i < delka; i++)
		if (ret[i] == znak)
		{
			++pocet;
		}
	cout << "Znak " << znak << " se vyskutuje v retezci "
		<< pocet << " krat." << endl;
	
	system ("pause");
	return 0;
}