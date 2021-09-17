// zamena_odkazem.cpp
// 28.12.2012
// demonstruje pøedání odkazem
// s pomocí odkazu (reference)!

#include <iostream>
using namespace std;

void zamena(int &x, int &y);

int main()
{
   int x = 5, y = 10;

   cout << "Funkce main. Pred zamenou, x: " << x <<
      " y: " << y << "\n";

   zamena(x,y);

   cout << "Funkce main. Po zamene, x: " << x <<
      " y: " << y << "\n";

   system ("pause");
   return 0;
}

void zamena (int &ox, int &oy)
{
   int pom;

   cout << "Funkce zamena. Pred zamenou, ox: " << ox <<
      " oy: " << oy << "\n";

   pom = ox;
   ox = oy;
   oy = pom;

   cout << "Funkce zamena. Po zamene, ox: " << ox <<
      " oy: " << oy << "\n";
}
