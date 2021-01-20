// Rechnet Meter in Feet um
//Schließt 0 aus
#include <iostream>

using namespace std;

int main()
{
  double meter = 0.0;
  cout << "Meter (>0): ";
  cin >> meter;

  if( meter <= 0 )
  {
    cout << "Ungültiger Wert" << endl;
    return 0;
  }

  cout << "Feet:  " << meter * 3.2808399 << endl;

  return 0;
}

