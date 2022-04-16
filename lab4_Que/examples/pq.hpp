#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include <stdexcept>
#include <queue>

using namespace std;

template <class T>
class PQ { 
public: 
  PQ() {};
  void push(T const&);  // push element 
  void pop();               // pop element 
  T top() const;            // return top element 
  bool empty() const {       // return true if empty.
    return elems.empty(); 
  } 

private: 
  vector<T> elems;     // elements 
}; 


template <class T>
void PQ<T>::push (T const& elem) 
{ 
  // inserts to back
  elems.push_back(elem);   
  push_heap (elems.begin(),elems.end());
} 

template <class T>
void PQ<T>::pop () 
{   
  if (elems.empty()) { 
    throw out_of_range("pop(): empty queue"); 
  }
  pop_heap (elems.begin(),elems.end()); 
  elems.pop_back();   
} 

template <class T>
T PQ<T>::top () const 
{ 
  if (elems.empty()) { 
    throw out_of_range("top(): empty queue"); 
  }
  // return copy of first element 
  return elems.front();      
} 
