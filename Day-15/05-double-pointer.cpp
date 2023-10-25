#include <iostream>
using namespace std;

int main() {
  int i = 5;
  int* p = &i;
  int** p2 = &p;

  cout << endl;
  cout << "i is :- " << i << endl; // 5
  cout << "i add. is :- " << &i << endl; // add. of i
  cout << endl;

  cout << "p is :- " << p << endl; // add of i 
  cout << "*p is :- " << *p << endl; // 5
  cout << "p add. is :- " << &p << endl; // add of p
  cout << endl;

  cout << "p2 is :- " << p2 << endl; // add of p
  cout << "*p2 is :- " << *p2 << endl; // add of i or value in p
  cout << "**p2 is :- " << **p2 << endl; // value in i
  cout << "p2 add. is :- " << &p2 << endl; // add of p2
  cout << endl;

  return 0;
}