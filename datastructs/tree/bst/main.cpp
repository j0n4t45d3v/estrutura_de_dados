#include <iostream>

using namespace std;

class BSTNode {
private:
  int value;
  BSTNode *left;
  BSTNode *right;

public:
  BSTNode(int value) {
    BSTNode::value = value;
    left = nullptr;
    right = nullptr;
  }

  int getValue() { return value; }

  BSTNode *getLeft() { return left; }
  BSTNode *getRight() { return right; }
  void setLeft(BSTNode *node) { left = node; }
  void setRight(BSTNode *node) { right = node; }
};

class BSTree {
private:
  BSTNode *root;

  void insertRecurcive(BSTNode *node, BSTNode *value) {
    if (node->getValue() < value->getValue()) {
      if (node->getRight() == nullptr) {
        node->setRight(value);
      } else {
        insertRecurcive(node->getRight(), value);
      }
    }
    if (node->getValue() > value->getValue()) {
      if (node->getLeft() == nullptr) {
        node->setLeft(value);
      } else {
        insertRecurcive(node->getLeft(), value);
      }
    }
  }

  string searchRecursive(BSTNode *node, int value) {
    if (node != nullptr) {
      int nodeValue = node->getValue();
      if (nodeValue == value) {
        return "Value found";
      } else if (nodeValue > value) {
        return searchRecursive(node->getLeft(), value);
      } else {
        return searchRecursive(node->getRight(), value);
      }
    }
    return "Not found value in BSTree";
  }

public:
  BSTree() { root = nullptr; }

  void insert(int value) {
    BSTNode *newNode = new BSTNode(value);
    if (root == nullptr) {
      root = newNode;
    } else {
      insertRecurcive(root, newNode);
    }
  }

  string search(int value) {
    if (root->getValue() == value)
      return "Value is root node";

    return searchRecursive(root, value);
  }

  BSTNode *getRoot() { return root; }
};
void tranversalPreOrder(BSTNode *);
void printValue(BSTNode *);

int main(int argc, char *argv[]) {
  BSTree *tree = new BSTree();
  tree->insert(4);
  tree->insert(1);
  tree->insert(7);
  tree->insert(2);
  tree->insert(5);
  tree->insert(6);
  tree->insert(3);
  tree->insert(8);
  tranversalPreOrder(tree->getRoot());

  int valueSearch;
  cout << "Input number for verify if exist: ";
  cin >> valueSearch;
  string resultSearch = tree->search(valueSearch);

  cout << resultSearch << endl;

  return 0;
}

void tranversalPreOrder(BSTNode *node) {
  printValue(node);
  if (node->getLeft() != nullptr) {
    tranversalPreOrder(node->getLeft());
  }
  if (node->getRight() != nullptr) {
    tranversalPreOrder(node->getRight());
  }
}
void printValue(BSTNode *node) { cout << node->getValue() << endl; }
