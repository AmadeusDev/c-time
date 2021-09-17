// pouzivani_ukazatelu.cpp
// 28.12.2012
// Pou��v�n� ukazatel�

#include <iostream>

typedef unsigned short int USHORT;

int main()
{

   using std::cout;

   USHORT mujVek;     // prom�nn�
   USHORT *ukVek;     // ukazatel

   mujVek = 5;

   cout << "mujVek: " << mujVek << "\n";
   ukVek = &mujVek;   // p�i�azen� adresy prom�nn� mujVek do ukVek
   cout << "*ukVek: " << *ukVek << "\n\n";

   cout << "Nastaveni *ukVek na 7...\n";
   *ukVek = 7;        // nastaven� mujVek na 7

   cout << "*ukVek: " << *ukVek << "\n";
   cout << "mujVek: " << mujVek << "\n\n";

   cout << "Nastaveni mujVek na 9...\n";
   mujVek = 9;

   cout << "mujVek: " << mujVek << "\n";
   cout << "*ukVek: " << *ukVek << "\n";

   system("pause");
   return 0;
}