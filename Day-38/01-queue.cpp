#include <iostream>
#include <queue>
using namespace std;

int main() {
  queue<int> q;

  q.push(10);
  q.push(20);
  cout << "size is :- " << q.size() << endl;

  q.pop();
  cout << "size is :- " << q.size() << endl;

  cout << "front is :- " << q.front() << endl;

  if (q.empty()) {
    cout << "queue is empty." << endl;
  } else {
    cout << "queue is not empty." << endl;
  }
  return 0;
}
