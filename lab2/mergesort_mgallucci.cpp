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

int main() {
  // programmer's identification
  identifyMyself();
  
  // initialize an array to be sorted
  int testScores[] = {5, 23, 1, 4, 76, 94, 43, 12, 65, 34, 89, 75, 26, 99, 72, 68, 64, 97, 86};
  // find the size of the array and in turn the left and right bounds
  int arrSize = sizeof(testScores) / sizeof(testScores[0]);
  int left = 0, right = arrSize - 1;
  // show the unsorted array of test scores
  cout << "\nTest scores before sorting: \n";
  printArr(testScores, arrSize);
  // sort the test scores and display them
  mergeSort(testScores, left, right);
  cout << "\nTest scores after sorting: \n";
  printArr(testScores, arrSize);

  /*
    My Summary:

    Merge Sort's O(N * log N) runtime sets the bar in time complexity
    for sorting algorithms. Another benefit to this algorithm is its reliability;
    there is no best and worst case in terms of time complexity for this algorithm.
    Because of its "divide and conquer" methodolgy, the original array that merge sort
    acts upon is divided until we are left with a bunch of single element arrays. The comparison
    and mergine always take the linear the time, but because the number of these comparisons is 
    equal to log_2 N, we end up with an O(N * log N) runtime. 

  */
}