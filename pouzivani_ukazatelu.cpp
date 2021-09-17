// pouzivani_ukazatelu.cpp
// 28.12.2012
// Používání ukazatelù

#include <iostream>

typedef unsigned short int USHORT;

int main()
{

   using std::cout;

   USHORT mujVek;     // promìnná
   USHORT *ukVek;     // ukazatel

   mujVek = 5;

   cout << "mujVek: " << mujVek << "\n";
   ukVek = &mujVek;   // pøiøazení adresy promìnné mujVek do ukVek
   cout << "*ukVek: " << *ukVek << "\n\n";

   cout << "Nastaveni *ukVek na 7...\n";
   *ukVek = 7;        // nastavení mujVek na 7

   cout << "*ukVek: " << *ukVek << "\n";
   cout << "mujVek: " << mujVek << "\n\n";

   cout << "Nastaveni mujVek na 9...\n";
   mujVek = 9;

   cout << "mujVek: " << mujVek << "\n";
   cout << "*ukVek: " << *ukVek << "\n";

   system("pause");
   return 0;
}