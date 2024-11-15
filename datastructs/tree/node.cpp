#include "node.h"
#include <iostream>

Node::Node(string value) {
  data = value;
  left = nullptr;
  right = nullptr;
}

void Node::addChildrenLeft(Node *node) { left = node; }

void Node::addChildrenRight(Node *node) { right = node; }

void Node::print(int level) {
  cout << string(level, ' ') << data << endl;
  if (left) {
    left->print(level + 1);
  }
  if (right) {
    right->print(level + 1);
  }
}

void Node::tranversalPreOrder(Node *node) {
  printValue(node);
  if (node->left != nullptr) {
    tranversalPreOrder(node->left);
  }
  if (node->right != nullptr) {
    tranversalPreOrder(node->right);
  }
}

void Node::tranversalInOrder(Node *node) {
  if (node->left != nullptr) {
    tranversalPreOrder(node->left);
  }
  printValue(node);
  if (node->right != nullptr) {
    tranversalPreOrder(node->right);
  }
}

void Node::tranversalPostOrder(Node *node) {
  if (node->left != nullptr) {
    tranversalPreOrder(node->left);
  }
  if (node->right != nullptr) {
    tranversalPreOrder(node->right);
  }
  printValue(node);
}

void Node::tranversalLevelOrder(Node *node){
  
}

void Node::printValue(Node *node) { cout << node->data << endl; }
