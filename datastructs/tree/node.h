#ifndef NODE_H
#define NODE_H

#include <iostream>
#include <string>

using namespace std;

class Node {
private:
  string data;
  Node *left;
  Node *right;
  void printValue(Node *);
public:
  Node(string value);
  void addChildrenLeft(Node *);
  void addChildrenRight(Node *);
  void print(int level = 0);
  void tranversalPreOrder(Node *);//root node, left node, right node
  void tranversalInOrder(Node *);// left node,root node, right node
  void tranversalPostOrder(Node *);// left node, right node, root node
  void tranversalLevelOrder(Node *);
};

#endif // !NODE_H
