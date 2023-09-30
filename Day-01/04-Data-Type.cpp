// Data Types
/*
1) Integer // 2 or 4 bytes
2) Float // 4 bytes
3) double // 8 bytes
4) Char // 1 byte
5) String
6) boolean // 1 byte
note 1 byte = 8bit
*/

#include <iostream>
#include <string> // for string
using namespace std;

int main() {
  int a = 45;
  float b = 35.6;
  double c = 45;
	char d = 'A';
	string e = "Hello";
	bool f = true; // or false

	cout << a << " - " << sizeof(a)<< endl; // 4
	cout << b << " - " << sizeof(b) << endl; // 4
	cout << c << " - " << sizeof(c) << endl; // 8
	cout << d << " - " << sizeof(d) << endl; // 1
	cout << e << " - " << sizeof(e) << " " << e.size() << endl; // 
	cout << f << " - " << sizeof(f) << endl; // 1
  return 0;
}