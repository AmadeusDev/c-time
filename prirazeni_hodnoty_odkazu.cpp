// prirazeni_hodnoty_odkazu.cpp
// 28.12.2012
// Pøiøazení nové hodnoty odkazu

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
   odkaz = druhaProm;    // Co myslíte, že se stane?   
   cout << "\nprvniProm:\t " << prvniProm << endl;
   cout << "druhaProm:\t " << druhaProm << endl;
   cout << "odkaz:\t\t " << odkaz << endl;
   cout << "&prvniProm:\t " << &prvniProm << endl;
   cout << "&druhaProm:\t " << &druhaProm << endl;
   cout << "&odkaz:\t\t " << &odkaz << endl;

   system("pause");
   return 0;
}