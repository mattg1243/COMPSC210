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
#include "mergesort_mgallucci.h"

using namespace std;

void identifyMyself();

int main() {
  // programmer's identification
  identifyMyself();
  
  // initialize an array to be sorted
  int arr[] = {5, 23, 1, 4, 76, 94, 43, 12, 65, 34};
  // find the size of the array and in turn the left and right bounds
  int left = 0, right = sizeof(arr)/sizeof(arr[0]) - 1;
  mergeSort(arr, left, right);
  cout << "Sorted Array: \n";
  printArr(arr, 10);
}

void identifyMyself() {
  cout << "Programmer: Matthew Gallucci\n";
  cout << "Programmer's ID: 1663505\n";
  cout << "File: " << __FILE__ << endl;
}
