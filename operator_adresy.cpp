// operator_adresy.cpp
// 28.12.2012
// Demonstruje oparátor adresy
// a adresy lokálních promìnných

#include <iostream>

int main()
{
   using namespace std;
   unsigned short promennaShort=5;
   unsigned long  promennaLong=65535;
   long zPromenna = -65535;

   cout << "promenna typu Short:\t" << promennaShort;
   cout << "\tAdresa promenne typu Short:\t";
   cout << &promennaShort << "\n";

   cout << "promenna typu Long:\t" << promennaLong;
   cout << "\tAdresa promenne typu Long:\t";
   cout << &promennaLong << "\n";

   cout << "promenna se znamenkem:\t" << zPromenna;
   cout << "\tAdresa promenne se znamenkem:\t";
   cout << &zPromenna << "\n";

   system ("pause");
   return 0;
}