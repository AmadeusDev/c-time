// funsin.cpp
// 24.9.2013
// program pro vypis hodnot funkce sin(x)

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x;
	const double pi=3.1415926;
	for ( int i=0; i<=90; i+=5)
	{
		x= pi/180.0*i;
			cout << "sin( " << i << " st.)= " << sin(x) << endl;
	}

	system ("pause");
	return 0;
}