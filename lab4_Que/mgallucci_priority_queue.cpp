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
#include <ctime>
#include "mgallucci_priority_queue.hpp"

using namespace std;

void identifyMyself();

int main() {
  // programmer's identification
  identifyMyself();
  // test out the customer class
  srand((unsigned) time(0));
  PQ q;
  // these constructors look terrible
  Customer phill("phill"), mike("mike"), bob("bob"), doug("doug"), mary("mary"), maddy("maddy");
  Customer customers[] = {phill, mike, bob, doug, mary, maddy};
  for (int i = 0; i < 6; i++) {
    q.enqueue(customers[i]);
  }

  cout << "\noriginal priority queue made with enqueue calls:\n";
  q.print();
  cout << "\ndeque test: \n";
  q.dequeue();
  q.print();
  cout << "\npeek test: \n";
  cout << q.peek() << " is at the front of the line" << endl;
  cout << "\nisEmpty test: \n";
  if (q.isEmpty()) { cout << "true" << endl; }
  else { cout << "false" << endl; }
  cout << "\ngetLength test: \n";
  cout << q.getLength() << endl;
}

void identifyMyself() {
  cout << "Programmer: Matthew Gallucci\n";
  cout << "Programmer's ID: 1663505\n";
  cout << "File: " << __FILE__ << endl;
}
