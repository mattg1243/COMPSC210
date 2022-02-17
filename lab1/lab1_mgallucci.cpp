// Programmer: Matthew Gallucci
// Programmer's ID: 1663505
/*

Matthew Gallucci
Lab1 - Linked List Review
Feb 6th 2022
Mac OSX 12.0.1
Compiler = g++:
  Apple clang version 13.0.0 (clang-1300.0.29.30)
  Target: arm64-apple-darwin21.1.0
  Thread model: posix

*/
#include <iostream>
#include "CryptoCoin_mgallucci.h"

using namespace std;

void identifyMyself();

int main() {
  // programmer's identification
  identifyMyself();
  // invent Bitcoin
  CryptoCoin BTC;
  // mint ten coins and print them out
  int coinsToMint = -1;
  int coinToDelete;
  while (coinsToMint < 0) {
    cout << "How many coins would you like to mint? ";
    cin >> coinsToMint;
  }
  srand(time(0));
  for (int i = 0; i < coinsToMint; i++) {
    BTC.mint();
  }
  BTC.print();

  cout << "What coin would you like to remove from circulation? ";
  cin >> coinToDelete;
  BTC.burn(coinToDelete);
  BTC.print();

  cout << "Demonstrating deletion of head node: \n";
  BTC.burn(0);
  BTC.print();

  cout << "All done! \n";
}

void identifyMyself() {
  cout << "Programmer: Matthew Gallucci\n";
  cout << "Programmer's ID: 1663505\n";
  cout << "File: " << __FILE__ << endl;
}