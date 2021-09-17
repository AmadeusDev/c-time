// ret2.cpp
// 18.11.2013

#include <iostream>
#include <string>

using namespace std;

int main()
{
	char ret[] = "ahoj volove. nedelate nic.";
	char *ukazatel = ret;
	string ret1 = "Cau blbouni.";
	int delka = ret1.length();

	cout << endl;
	cout << ukazatel << endl;
	cout << ret << endl;
	cout << ret1 << endl;
	for (int i=0; i<delka; i++)
		cout << ret1[i];
	cout << endl;

	system ("pause");
	return 0;
}