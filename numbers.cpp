// Liest Zahlen von der Tastatur
// und berechnet deren Mittelwert und Summe
// Programm wird mit 0 beendet
#include <iostream>

using namespace std;

const double MaxVal = 10.0; // Obergrenze der Zahlen

double Mittelwert( double summe, int anzahl )
// Berechnet das arithm. Mittel (0.0 wenn anzahl = 0)
{
   // Ausnahmen abfangen
   if( anzahl == 0 )
      return 0.0;

   return summe / double( anzahl );
}


int main()
{
   double eingabe = 0; // vom Benutzer eingegebener Wert
   int    nummer  = 0; // Laufende Nummer der Eingabe

   double summe = 0;

   cout << "Bitte geben Sie Zahlen zwischen 1 und "
        << MaxVal << " ein (Ende mit 0)" << endl;
   do
   {
      nummer++;

      cout << "z(" << nummer << ") = ";
      cin >> eingabe;

      if ( eingabe != 0 )
         summe = summe + eingabe;
   }
   while ( eingabe != 0 );

   cout << "Summe: " << summe << endl;
   cout << "Anzahl: " << nummer << endl;
   cout << "Mittelwert: " << Mittelwert( summe, nummer ) << endl;


   return 0;
}
