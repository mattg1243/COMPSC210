#include <iostream>
#include <string>
#include "game.hpp"

int main(int argc, char**argv) {
  srand(std::time(0)); // use current time as seed for random generator

  Game game;
  game.addPlayerByName("John");
  game.addPlayerByName("Heidi");
  game.addPlayerByName("Ben");
  game.addPlayerByName("Jamey");
  game.addPlayerByName("Fergie");

  game.loadPriQueue();
  cout << "The leaderboard for now:  " << endl;
  game.printPriorityQueue();
  
  while(true){
    game.updateScores();
    cin.get();
    cout <<  endl << "As the game is played, the leaderboard updates:"  << endl;
    game.printPriorityQueue();
  }//end while

} //end main 
