#include <iostream>

using namespace std;

class CryptoCoin {
  private:
  // the private struct that acts as a node storing
  // the id of the individual coin and a pointer to the next one
  struct Coin {
    int id;
    Coin* next;
  };
  // ptr to the beginning of the list
  Coin* head;
  // tracker of how many coins in circulation, used for ID
  static int coinCount;

  public:
  // constructor setting head to nullptr
  CryptoCoin() { head = nullptr; coinCount = 0; }
  // destructor freeing dynamically allocated memory
  ~CryptoCoin() { clear(); }
  // clears allocated memory when called
  void clear();
  // mint a new coin, my add function
  void mint();
  // remove a particular coin from circulation, my remove function
  void burn();
  // print out a list of all coins in circulation
  void print() { cout << ".h test" << endl; }

};

void CryptoCoin::clear() {
  // declare a tempory ptr to traverse the list
  Coin* search = nullptr;
  while (head != nullptr) {
    // set the temporary search ptr to the the head address
    search = head;
    // reassign the head ptr to the next address
    head = head->next;
    // clear the data stored at the search ptr location
    delete search;
  }
}

void CryptoCoin::mint() {
  // allocate memory for the new coin
  Coin* newCoin;
  newCoin = new Coin;
  // set the ID of the coin and increment the coinCount variable
  newCoin->id = coinCount;
  coinCount++;
  // set ptrs accordingly
  Coin* search = head;
  if (head != nullptr) {
        while (search->next != nullptr) { 
            search = search->next;
        }
        search->next = newCoin;
    } else {
        head = newCoin;
    }
}