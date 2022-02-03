// Programmer: Matthew Gallucci
// Programmer's ID: 1663505
#include <iostream>
#include "CryptoCoin.h"

using namespace std;

void identifyMyself();

int main() {
  // programmer's identification
  identifyMyself();
  // invent Bitcoin
  CryptoCoin BTC;
  // mint ten coins and print them out
  for (int i = 0; i < 10; i++) {
    BTC.mint();
  }
  BTC.print();

  return 0;
}

void identifyMyself() {
  cout << "Programmer: Matthew Gallucci\n";
  cout << "Programmer's ID: 1663505\n";
  cout << "File: " << __FILE__ << endl;
}