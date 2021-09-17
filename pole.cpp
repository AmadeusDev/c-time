// pole.cpp
// 14.11.2012
// Práce s polem

#include <iostream>

using namespace std;

int main()
{
	int mojePole[5];
	int i;
	for ( i=0; i<5; i++)  // 0-4
	{
		cout << "Hodnota mojePole[" << i << "]: ";
		cin >> mojePole[i];
	}
	for (i = 0; i<5; i++)
	{
		cout << i << ": " << mojePole[i] << "\n";
	}

	system ("pause");
	return 0;
}
