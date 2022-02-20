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
    leftArr[i] = arrayToSort[left + i];
  }
  for (int j = 0; j < rightSize; j++) {
    rightArr[j] = arrayToSort[midpt + 1 + j];
  }
  // set indexes
  int leftIndex = 0, rightIndex = 0, mergedIndex = left;
  // main while loop to execute our comparisons
  // continues until we have reached the bounds of one of the subarrays
  while (leftIndex < leftSize && rightIndex < rightSize) {
    // if the element in the left subarray < right elem, merge it
    if (leftArr[leftIndex] <= rightArr[rightIndex]) {
      arrayToSort[mergedIndex] = leftArr[leftIndex];
      // increment the index of the left subarray since we just wrote from it
      leftIndex++;
    } else {
      arrayToSort[mergedIndex] = rightArr[rightIndex];
      rightIndex++;
    }
    // move to the next element in the main array were sorting
    mergedIndex++;
  }
  // add the remaining left over values
  // if the left array has left over elements, merge it
  while (leftIndex < leftSize) { 
    arrayToSort[mergedIndex] = leftArr[leftIndex];
    leftIndex++;
    mergedIndex++;
  }
  // if the right array has left over elements, merge it 
  while (rightIndex < rightSize) {
    arrayToSort[mergedIndex] = rightArr[rightIndex];
    rightIndex++;
    mergedIndex++;
  }
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

// show the newly sorted array
void printArr(int arr[], int size) {
  cout << "[ ";
  for (int i = 0; i < size - 1; i++) {
    cout << arr[i] << ", ";
  }
  cout << arr[size - 1] << " ]\n";
}

// my ID function, putting here to keep main clearn
void identifyMyself() {
  cout << "Programmer: Matthew Gallucci\n";
  cout << "Programmer's ID: 1663505\n";
  cout << "File: " << __FILE__ << endl;
}