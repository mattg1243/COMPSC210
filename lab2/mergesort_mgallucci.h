// Programmer: Matthew Gallucci
// Programmer's ID: 1663505
#include <iostream>

using namespace std;

void mergeUp(int arrayToSort[], int left, int midpt, int right) {
  cout << "Merging up " << endl;
}

void mergeSort(int arrayToSort[], int left, int right) {
  // recursive base case
  if (left >= right) {
    return;
  }
  // calculate new midpoint
  int midpt = left + (right - left) / 2;
  // send the first half of the array back through recursively
  mergeSort(arrayToSort, left, midpt);
  // send the second half of the array back through recursively
  mergeSort(arrayToSort, midpt + 1, right);
  // merge the subarrays
  mergeUp(arrayToSort, left, midpt, right);
}