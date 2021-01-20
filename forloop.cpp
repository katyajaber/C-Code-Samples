// Gibt die 2er-Potenzen von 0 bis 10 aus

#include <iostream>

using namespace std;

int main()
{
   for( int i = 0; i<=10; i++ )
   {
      cout << "2^" << i << "=" << ( 1 << i ) << endl;

      // 1 << i bedeutet, dass die Zahl 1 i-mal binaer
      // geshiftet wird; dies bewirkt eine i-malige
      // Multiplikation mit 2
   }

   return 0;
}
