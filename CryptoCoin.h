#include <iostream>

using namespace std;

class CryptoCoin {
  private:
  // the private struct that acts as a node storing
  // the id of the individual coin
  struct Coin {
    int id;
    Coin* next;
  };
  Coin* head;

  public:
  // constructor setting head to nullptr
  CryptoCoin() { head = nullptr; }
  // destructor freeing dynamically allocated memory
  ~CryptoCoin() { clear(); }
  // clears allocated memory when called
  void clear(){ cout << "memory cleared" << endl; }
  // mint a new coin, my add function
  void mint();
  // remove a particular coin from circulation, my remove function
  void burn();
  // print out a list of all coins in circulation
  void print() { cout << ".h test" << endl; }

};