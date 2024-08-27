#include "iostream"
#include "queue.h"
using namespace std;

int main(int argc, char *argv[]) {

  Queue *linkedList = new Queue;

  linkedList->add(1);
  linkedList->add(2);
  linkedList->add(3);
  linkedList->add(4);

  cout << "========================" << endl;
  cout << "PRINT LIST" << endl;
  linkedList->print();
  cout << "========================" << endl;
  linkedList->remove();
  cout << "PÓS REMOVE VALUE" << endl;
  linkedList->print();
  cout << "========================" << endl;

  delete linkedList;
  return 0;
}
