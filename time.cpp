//Berechnung der Laufzeit des Programmes
// Achtung: Die Ausführung des Zeitmessungscodes erfordert selbst Zeit und verfälscht das
//Ergebnis systematisch
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    clock_t start = clock();    // Anfangszeitpunkt bestimmen

    cout << "Enter a value: ";  // zu messender Programmteil
    double val = 0.0;
    cin >> val;

    clock_t end = clock();      // Endzeitpunkt bestimmen

    //Laufzeit in Sekunden ausgeben:

    cout << double( end - start ) / double( CLOCKS_PER_SEC ) << " sec elapsed." << endl;

    return 0;
}
