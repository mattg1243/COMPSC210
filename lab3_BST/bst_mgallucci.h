// Programmer: Matthew Gallucci
// Programmer's ID: 1663505

#include <iostream>

using namespace std;

class BST {
  
  private:
  struct Node {
    int key;
    Node* parent = nullptr, *leftChild = nullptr, *rightChild = nullptr;
  };
  Node* root;
  
  public:
  // constructor function
  BST() { root = nullptr; };
  // destructor function, not finished
  ~BST() { delete root; };
  // inserts a new node into the tree
  void insert(int);
  // recursive part of the insert function
  void insertRecursive(Node*, Node*);
  // preorder traversal and printing
  void printPreorder();
  // recursive part of printPreorder
  void printRecursive(Node*);

};



void BST::insert(int key) {
  // create a new node
  Node* newPtr = new Node;
  newPtr->key = key;
  // insert into the tree
  // first check if the tree has a root already
  if (root != nullptr) {
    // if there is already a root node, decide where the new node goes
    insertRecursive(root, newPtr);
  } else {
    // if the tree has no root, make this node the root
    root = newPtr;
  }

}

void BST::insertRecursive(Node* parent, Node* node) {
  // if the new node is less than the parent node, go into the left subtree
  if (node->key < parent->key) {
    // if the parent has no left child, insert the new node there
    if (parent->leftChild == nullptr) {
      parent->leftChild = node;
      node->parent = parent;
    } else {
      // if it already has a left child, go into the next left subtree
      insertRecursive(parent->leftChild, node);
    }
  } else {
    // if the new node is greater than the parent node, go into the right subtree
    if (parent->rightChild == nullptr) {
      // if the parent has no right child, insert the new node there
      parent->rightChild = node;
      node->parent = parent;
    } else {
      insertRecursive(parent->rightChild, node);
    }
  }
}

void BST::printPreorder() {
  // first, print out the rood node
  cout << root->key << " ";
  // then recursively traverse the left subtree
  printRecursive(root->leftChild);
  // and finally the right subtree
  printRecursive(root->rightChild);
  cout << "\n\n";
}

void BST::printRecursive(Node* node) {
  // base case
  if (node == nullptr) {
    return;
  }
  // recursion and print
  cout << node->key << " ";
  printRecursive(node->leftChild);
  printRecursive(node->rightChild);
}
