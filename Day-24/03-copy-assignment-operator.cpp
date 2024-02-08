#include <iostream>
using namespace std;

class Hero {
public:
  int height;
  char rank;

  Hero(int height, char rank) {
    this->height = height;
    this->rank = rank;
  };

  void print() {
    cout << "Height :- " << this->height << ", Rank :- " << this->rank << endl;
  };
};

int main() {
  Hero h1(45, 'C');
  Hero h2(65, 'A');

  h1.print();
  h2.print();

  h1 = h2;
  h1.print();
  h2.print();
  return 0;
};