// zamena_hodnotou.cpp
// 28.12.2012
// demonstruje pøedání hodnotou

#include <iostream>

void zamena(int x, int y);

int main()
{
   int x = 5, y = 10;

   std::cout << "Funkce main. Pred zamenou, x: " << x << " y: " << y << "\n";
   zamena(x,y);
   std::cout << "Funkce main. Po zamene, x: " << x << " y: " << y << "\n";
   
   system("pause");
   return 0;
}

void zamena (int x, int y)
{
   int pom;

   std::cout << "Funkce zamena. Pred zamenou, x: " << x << " y: " << y << "\n";

   pom = x;
   x = y;
   y = pom;

   std::cout << "Funkce zamena. Po zamene, x: " << x << " y: " << y << "\n";
}
