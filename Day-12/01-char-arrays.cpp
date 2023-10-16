#include <iostream>
using namespace std;

int getLength(char name[]) {
  int count = 0;
  for(int i = 0; name[i] != '\0'; i++) {
    count++;
  }

  return count;
}

void reverse(char name[], int n) {
  int s = 0;
  int e = n - 1;

  while(s < e) {
    swap(name[s], name[e]);
    s++;
    e--;
  }
}

int main() {
  char name[20];

  cout << "Enter your name :-" << endl;
  cin >> name;
  // name[2] = '\0';

  cout << "Your Name is :- " << name << endl;

  int len = getLength(name);

  cout << "Name Length is :- " << len << endl;
  reverse(name, len);
  cout << "Reverse is :- " << name << endl;

  return 0;
}