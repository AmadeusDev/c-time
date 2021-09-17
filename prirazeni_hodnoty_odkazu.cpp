// prirazeni_hodnoty_odkazu.cpp
// 28.12.2012
// P�i�azen� nov� hodnoty odkazu

#include <iostream>

int main()
{
   using namespace std;
   int prvniProm;
   int &odkaz = prvniProm;

   prvniProm = 5;
   cout << "prvniProm:\t " << prvniProm << endl;
   cout << "odkaz:\t\t " << odkaz << endl;
   cout << "&prvniProm:\t " << &prvniProm << endl;
   cout << "&odkaz:\t\t " << &odkaz << endl;

   int druhaProm = 8;
   odkaz = druhaProm;    // Co mysl�te, �e se stane?   
   cout << "\nprvniProm:\t " << prvniProm << endl;
   cout << "druhaProm:\t " << druhaProm << endl;
   cout << "odkaz:\t\t " << odkaz << endl;
   cout << "&prvniProm:\t " << &prvniProm << endl;
   cout << "&druhaProm:\t " << &druhaProm << endl;
   cout << "&odkaz:\t\t " << &odkaz << endl;

   system("pause");
   return 0;
}