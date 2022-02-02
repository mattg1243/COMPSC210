// Programmer: Matthew Gallucci
// Programmer's ID: 1663505
#include <iostream>
#include "CryptoCoin.h"

using namespace std;

void identifyMyself();

int main() {
  // programmer's identification
  identifyMyself();
  CryptoCoin BTC;
  BTC.print();
}

void identifyMyself() {
  cout << "Programmer: Matthew Gallucci\n";
  cout << "Programmer's ID: 1663505\n";
  cout << "File: " << __FILE__ << endl;
}