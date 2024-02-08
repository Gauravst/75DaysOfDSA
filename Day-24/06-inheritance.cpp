#include <iostream>
using namespace std;

class Human {
public:
  int height;
  int weight;
};

class Man:public Human {
public:
  int point;

public:
  void setHeight(int height) {
    this->height = height;
  }
};

int main() {
	Man m1;
	m1.setHeight(34);
	cout << m1.height << endl;
e
  return 0;
}