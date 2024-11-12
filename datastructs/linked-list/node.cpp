#include "node.h"

Node::Node(int value) { Node::value = value; }

int Node::getValue() { return Node::value; }

void Node::setValue(int value) { Node::value = value; }

Node *Node::getNext() { return Node::next; }

void Node::setNext(Node *next) { Node::next = next; }
