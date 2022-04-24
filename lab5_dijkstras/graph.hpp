#include <iostream>
#include <vector>

using namespace std;

class Vertex {

  public:
  char key;
  Vertex(char k) { key = k; }

};

class Edge {

  public:
  // a two char array that stores 
  // the points the edge connects
  vector<Vertex> points;
  // the weight / distance of the edge
  int weight;
  // constructor
  Edge(char p1, char p2, int w) { 
    // push the endpoints to the vector
    points.push_back(Vertex(p1));
    points.push_back(Vertex(p2));
    // initialize weight
    weight = w;
  }

};

class Graph {


};