#include <array>
#include <iostream>
using namespace std;

int main() {
  array<int, 5> a = {5, 5, 6, 8, 2};

  int size = a.size();

  for(int i = 0; i < size; i++) {
    cout << a[i] << endl;
  }
  cout << endl;

  cout << a.at(2) << endl;
  cout << a.empty() << endl;
  cout << a.front() << endl;
  cout << a.back() << endl;
}