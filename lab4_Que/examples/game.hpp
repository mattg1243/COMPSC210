#include <vector>
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "player.hpp"
#include "pq.hpp"

using namespace std;

class Game {
public:
  Game() {}

  void addPlayerByName(const string & name) {
    Player p(name, createRandomNum());
    players.push_back(p);
  }

  void printPriorityQueue(){
    while (!pq.empty()) {
      Player p = pq.top();
      cout << p.getName() << " " << p.getScore() << endl;
      pq.pop();
    }//end while
  }// end printPriorityQueue

  void loadPriQueue(){
    for(int i = 0; i < players.size(); ++i) {
      pq.push(players[i]);
    }
  }

  int createRandomNum(){
    int random_variable = (rand() % 678) + 1;
    return random_variable;
  }

  void updateScores(){
    for(int i = 0; i < players.size(); ++i) {
      players[i].setScore(createRandomNum());
      pq.push(players[i]);
    }
  }

private:
  PQ<Player> pq;
  vector<Player> players;
};
