// Programmer: Matthew Gallucci
// Programmer's ID: 1663505
#include <vector>
#include <iostream>

using namespace std;

// class for the customers / nodes
class Customer {
  public:
    int priority;
    string name;
    Customer(string name) { 
      priority = 1 + (rand()^3 % 100) % 100; 
      this->name = name;
    }
};

// class for the data structure
class PQ {
  private:
    vector<Customer> elements;

  public:
    PQ() { elements = {}; }
    void enqueue(Customer);
    Customer dequeue();
    string peek() const;
    bool isEmpty() const;
    int getLength() const;
    void print() const;
};

// push a customer to the vector and sort it
// based on priority
void PQ::enqueue(Customer c) { 
  elements.push_back(c);
  sort(elements.begin(), elements.end(), [](const Customer& left, const Customer& right) {
    return left.priority > right.priority;
  });
}
// pop a customer from the front of the vector
Customer PQ::dequeue() {
  Customer toReturn = elements.back();
  elements.pop_back();
  return toReturn;
}
// return the first customer in the vector 
// without removing it
string PQ::peek() const {
  return elements.back().name;
}
// check if the vector is empty
bool PQ::isEmpty() const {
  if (elements.size() == 0) {
    return true;
  } else {
    return false;
  }
}
// see how many customers are in the vector
int PQ::getLength() const {
  return elements.size();
}
// print out the entire vector
void PQ::print() const {
  int i = 0;
  cout << "[ ";
  for(; i < elements.size() - 1; i++) {
    cout << elements[i].name << ": " << elements[i].priority << ", ";
  }
  cout << elements[i].name << ": " << elements[i].priority << " ]" << endl;
}