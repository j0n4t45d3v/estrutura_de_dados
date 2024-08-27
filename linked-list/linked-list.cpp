#include "linked-list.h"

LinkedList::LinkedList() {
  LinkedList::head = nullptr;
  LinkedList::tail = nullptr;
}

LinkedList::~LinkedList() {
  Node *current = LinkedList::head;

  while (current != nullptr) {
    Node *next = current->getNext();
    delete current;
    current = next;
  }
}

Node *LinkedList::getHead() { return LinkedList::head; }

void LinkedList::setHead(Node *head) { LinkedList::head = head; }

Node *LinkedList::getTail() { return LinkedList::tail; }

void LinkedList::setTail(Node *tail) { LinkedList::tail = tail; }

void LinkedList::add(int value) {
  Node *newNode = new Node(value);

  if (LinkedList::head == nullptr) {
    LinkedList::head = newNode;
  } else {
    LinkedList::tail->setNext(newNode);
  }
  LinkedList::tail = newNode;
}

void LinkedList::print() {
  Node *temp = LinkedList::head;

  do {
    cout << "VALUE: " << temp->getValue() << endl;
    temp = temp->getNext();
  } while (temp != nullptr);
}
