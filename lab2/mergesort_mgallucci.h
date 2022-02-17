// Programmer: Matthew Gallucci
// Programmer's ID: 1663505
#include <iostream>

using namespace std;

void mergeUp(int arrayToSort[], int left, int midpt, int right) {
  // set size of the new arrays
  int leftSize = midpt - left + 1;
  int rightSize = right - midpt;
  // create the new arrays and copy the values from the given array
  int leftArr[leftSize], rightArr[rightSize];

  for (int i = 0; i < leftSize; i++) {
    leftArr[i] = arrayToSort[i];
    cout << "leftArr[i] == " << leftArr[i] << endl;
  }
  cout << "   ---------   \n";
  for (int i = 0; i < rightSize; i++) {
    rightArr[i] = arrayToSort[midpt + i];
    cout << "rightArr[i] == " << rightArr[i] << endl;
  }
  // main while loop to execute our comparisons

  // add the remaining left over values

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