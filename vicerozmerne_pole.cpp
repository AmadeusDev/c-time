//vicerozmerne_pole.cpp
// 14.11.2012
// Vytváøení vícerozmìrného pole

#include <iostream>
using namespace std;

int main()
{
	int nejakePole[5][2] = { {0,0}, {1,2}, {2,4}, {3,6}, {4,8}};
	for (int i = 0; i<5; i++)
	{
		for (int j=0; j<2; j++)
		{
			cout << "nejakePole[" << i << "][" << j << "]: ";
			cout << nejakePole[i][j] << "\t";
		}

	cout << "\n";
	}
	cout << "\n";
	system ("pause");
	return 0;
}
