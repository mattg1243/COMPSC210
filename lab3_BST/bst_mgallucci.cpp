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
  // given data set
  int data[] = { 8, 4, 2, 5, 12, 29 }; 
  // instantiate my BST
  BST b = BST();
  // insert given values
  for (int i = 0; i <= 5; i++) {
    b.insert(data[i]);
  }
  // traverse and print out the nodes keys
  b.printPreorder();
  
}

void identifyMyself() {
  cout << "Programmer: Matthew Gallucci\n";
  cout << "Programmer's ID: 1663505\n";
  cout << "File: " << __FILE__ << endl << endl;
}
