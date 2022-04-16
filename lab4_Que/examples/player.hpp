using namespace std;

class Player {
public:
  Player(string n, int s) : name(n), score(s) {}
  Player() {}
  int getScore() const { return score; }
  string getName() const {return name;}
  void setScore(int s) {score = s;}
  void setName(string n) {name = n;}
private:
  string name;
  int score;
};

inline bool operator<(const Player & p1, const Player & p2) {
  return p1.getScore() < p2.getScore();
}
