#include <iostream>
using namespace std;

void printFun(int *p) {
  cout << endl;
  cout << "*p is :- " << *p << endl; // 5
  cout << "p is :- " << p << endl; //  int value add.
  cout << endl;
}

void update(int *p) {
  *p = *p + 1;
  p = p + 1;

  cout << endl;
  cout << "inside update fun. *p is :- " << *p << endl; // update p value
  cout << "inside update fun. p is :- " << p << endl;
  cout << endl;
}

int main() {
  int value = 5;
  int *p = &value;

  printFun(p);
	update(p);
	printFun(p);
  return 0;
}