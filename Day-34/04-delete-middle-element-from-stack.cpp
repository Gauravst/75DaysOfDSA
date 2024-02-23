#include <iostream>
#include <stack>
using namespace std;

void removeMid(stack<int> &s, int count, int size) {
  if(count == size / 2) {
    s.pop();
    return;
  }

  int temp = s.top();
  s.pop();
  removeMid(s, ++count, size);
  s.push(temp);
}

void print(stack<int> s) {
  if(s.empty()) {
    return;
  }

  cout << s.top() << " ";
	s.pop();
  print(s);
}

int main() {
  stack<int> s;
  s.push(5);
  s.push(6);
  s.push(7);
  s.push(8);

  int count = 0;
  int size = 4;

  print(s);
  removeMid(s, count, size);
	cout << endl;
  print(s);

  return 0;
}