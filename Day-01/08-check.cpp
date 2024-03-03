#include <iostream>
#include <string>
using namespace std;

class Node {
 public:
  int a;
  Node* next;
};

int main() {
  string name = "";
  cout << "Enter your name" << endl;
  cin >> name;

  cout << "your name is : -" << name << endl;
  cout << name << endl;
  string x = "hell0";
  return 0;
}
