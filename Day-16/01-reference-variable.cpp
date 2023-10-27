#include <iostream>
using namespace std;

void update(int &a) {
  a++;
}

int main() {
  int i = 5;
  int &j = i;

  cout << endl;
  cout << "before i is :- " << i << endl;
  cout << "before j is :- " << j << endl;
  cout << endl;

  update(i);
  cout << "after i is :- " << i << endl;
  cout << "after j is :- " << j << endl;
  cout << endl;

  return 0;
}