#include "queue.h"

void Queue::remove() {
  Node *head = Queue::getHead();
  Node *next = head->getNext();
  delete head;
  Queue::setHead(next);
}
