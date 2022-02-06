#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

class CryptoCoin {
  private:
  // the private struct that acts as a node storing
  // the id of the individual coin and a pointer to the next one
  struct Coin {
    string id;
    Coin* next;
  };
  // ptr to the beginning of the list
  Coin* head;
  // tracker of how many coins in circulation, used for ID
  int coinCount;

  public:
  // constructor setting head to nullptr
  CryptoCoin() { head = nullptr; coinCount = 0; }
  // destructor freeing dynamically allocated memory
  ~CryptoCoin() { clear(); }
  // clears allocated memory when called
  void clear();
  // mint a new coin, my add function
  void mint();
  // generate a hex id for new coins, called in the mint function
  string generateID(); 
  // remove a particular coin from circulation, my remove function
  void burn(int index);
  // print out a list of all coins in circulation
  void print();

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

string CryptoCoin::generateID() {
  // create an array of possible characters to use
  char hexChars[] = { 'A', 'B', 'C', 'D', 'E', 'F', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0' };
  // initialize a blank id
  char id[] = { '0', '0', '0', '0', '0', '0'};
  // randomly reassign the last 6 characters
  for (int i = 0; i < 6; i++) {
    id[i] = hexChars[rand()%16];
  }
  // return the id string
  string idStr = "0x";
  for (int i = 0; i < 6; i++) {
    idStr += id[i];
  }
  return idStr;
}

void CryptoCoin::mint() {
  // allocate memory for the new coin
  Coin* newCoin;
  newCoin = new Coin;
  // set the ID of the coin and increment the coinCount variable
  newCoin->id = generateID();
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

void CryptoCoin::burn(int index) {
  //input validation
  while (index < 0 || index > coinCount - 1) {
    cout << "Please enter a valide index to delete: ";
    cin >> index;
  }
  // initialize temp search ptr for traversing list
  // and a current index tracker
  int currentIndex = 1;
  Coin* search = head, *searchTrailing = nullptr;
  // handle case where head node is being deleted
  if (index == 0) {
      // set head node ptr to the next node
      head = head->next;
      // clear memory at the old head location
      delete search;
      return;
  }
  // if another node is being deleted, 
  // go through the list until we reach the index to delete
  search = search->next;
  searchTrailing = head;
  while(search != nullptr) {
    if (currentIndex == index) {
      // change the ptrs and free up the memory
      searchTrailing->next = search->next;
      delete search;
      coinCount--;
      return;
    } else {
      // otherwise, advance the ptrs and increment the index tracker
      search = search->next;
      searchTrailing = searchTrailing->next;
      currentIndex++;
    }
  }
}
// 0xD0CEB4
void CryptoCoin::print() {
  // set a tempory search ptr
  Coin* search = head;
  // traverse the list and print the IDs of each coin and the coin count
  cout << "There are currently " << coinCount << " coins in circulation.\n";
  cout << "[ \n";
  while (search != nullptr) { 
        if (search->next == nullptr) { cout << "  " << search->id << '\n'; }
        else { cout << "  " << search->id << ", \n"; }
        search = search->next;
    }
  cout << "]\n";
}