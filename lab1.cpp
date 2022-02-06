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
  int coinsToMint = -1;
  while (coinsToMint < 0) {
    cout << "How many coins would you like to mint?" << endl;
    cin >> coinsToMint;
  }
  srand(time(0));
  for (int i = 0; i < coinsToMint; i++) {
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