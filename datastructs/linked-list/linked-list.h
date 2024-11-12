#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "node.h"
#include <iostream>

using namespace std;

class LinkedList {
public:
  LinkedList();
  ~LinkedList();
  void add(int);
  void print();
  Node *getHead();
  void setHead(Node *);
  Node *getTail();
  void setTail(Node *);

private:
  Node *head;
  Node *tail;
};

#endif // !LINKED_LIST_H
#define LINKED_LIST_H
