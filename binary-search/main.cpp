#include <iostream>

using namespace std;

const int MAX_SIZE = 1000;
int binary_search(int*, int);


// Big O notação é o log2(n)
int main (int argc, char *argv[]) {

  int *array = new int[MAX_SIZE];
  int valueToFind;

  cout << "Digite um valor para o pc encontrar de 0 - 1000: ";
  // quantidade maxima de chutes log2(1000) ≈ 10 
  cin >> valueToFind;

  for (int i = 0; i < MAX_SIZE; i++) {
    array[i] = i + 1; 
  }

  int kick = binary_search(array, valueToFind);

  if(kick == -1) {
    cout << "Value Not Found" << endl;
  }else {
    cout << "Value Found: " << kick << endl;
  }

  return 0;
}

int binary_search(int *array, int valueFound) {
  int shortKick = 0;
  int highKick = MAX_SIZE - 1;
  
  while (shortKick <= highKick) {
    int midlerKick = (shortKick + highKick) / 2;
    int kick = array[midlerKick];

    if (kick == valueFound) {
      return kick;
    }else if (kick > valueFound) {
      highKick--;
    }else {
      shortKick ++;
    }
  }

  return -1;
}

