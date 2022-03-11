// Programmer: Matthew Gallucci
// Programmer's ID: 1663505
/*

Matthew Gallucci
Lab1 - Linked List Review
Feb 6 2022
Mac OSX 12.0.1,
Compiler = g++:
  Apple clang version 13.0.0 (clang-1300.0.29.30)
  Target: arm64-apple-darwin21.1.0
  Thread model: posix

*/
#include <iostream>
#include "bst_mgallucci.h"

using namespace std;

void identifyMyself();

int main() {
  // programmer's identification
  identifyMyself();
  // BST implementaion
  BST b = BST();
  b.insert(33);
  b.insert(27);
  b.insert(35);
  b.insert(25);
  b.insert(87);
}

void identifyMyself() {
  cout << "Programmer: Matthew Gallucci\n";
  cout << "Programmer's ID: 1663505\n";
  cout << "File: " << __FILE__ << endl;
}
