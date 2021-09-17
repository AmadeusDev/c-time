// pouzivani_odkazu.cpp
// 28.12.2012
// Uk�zka pou��v�n� odkaz�

#include <iostream>

int main()
{
   using namespace std;
   int prvniProm;
   int &odkaz = prvniProm;

   prvniProm = 5;
   cout << "prvniProm: " << prvniProm << endl;
   cout << "odkaz: " << odkaz << endl;

   odkaz = 7;
   cout << "prvniProm: " << prvniProm << endl;
   cout << "odkaz: " << odkaz << endl;

   cout << "&prvniProm: " << &prvniProm << endl;
   cout << "&odkaz: " << &odkaz << endl;

   system("pause");
   return 0;
}