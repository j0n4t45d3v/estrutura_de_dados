#include "node.h"

int main(int argc, char *argv[]) {
  Node *root = new Node("Drinks");
  Node *cold = new Node("Cold");
  Node *hot = new Node("Hot");
  root->addChildrenLeft(cold);
  root->addChildrenRight(hot);

  Node *tea = new Node("Tea");
  Node *coffee = new Node("Coffee");
  Node *cola = new Node("Cola");
  Node *fanta = new Node("Fanta");

  cold->addChildrenLeft(cola);
  cold->addChildrenRight(fanta);

  hot->addChildrenLeft(tea);
  hot->addChildrenRight(coffee);

  cout << "Tranversal Pre Order" << endl;
  root->tranversalPreOrder(root);
  cout << endl;
  cout << "Tranversal IN Order" << endl;
  root->tranversalInOrder(root);
  cout << endl;
  cout << "Tranversal Post Order" << endl;
  root->tranversalPostOrder(root);
  // root->print();
  return 0;
}
