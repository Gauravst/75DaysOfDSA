// Operators
#include <iostream>
using namespace std;

int main() {
  // Arithmetic Operators
  int a = 10, b = 2;
  cout << 10 + 2 << endl;
  cout << 10 - 2 << endl;
  cout << 10 * 2 << endl;
  cout << 10 / 2 << endl;
  cout << 10 % 2 << endl;
  cout << a++ << endl;
  cout << a-- << endl;

  // Assignment Operators
  int x = 5;
  x += 2;
  x -= 3;
  x *= 2;
  x /= 2;
  x % 2;

  // Comparison Operators
  int g = 10;
  int h = 11;

  cout << (g == h) << endl;
  cout << (g != h) << endl;
  cout << (g > h) << endl;
  cout << (g < h) << endl;
  cout << (g >= h) << endl;
  cout << (g <= h) << endl;

  // Logical Operators
  // 	&& 	Logical and	Returns true if both statements are true	x < 5 &&  x < 10
  // || 	Logical or	Returns true if one of the statements is true	x < 5 || x < 4
  // !

  cout << ((5 > 5) && (5 < 456)) << endl;  // false - 0
  cout << ((5 > 5) || (5 < 456)) << endl;  // true - 1
  cout << !false << endl;                  // true - 1

  return 0;
}