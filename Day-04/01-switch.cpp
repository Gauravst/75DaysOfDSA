#include <iostream>
using namespace std;

int main() {
  int a = 2;

  switch(a) {
		case 1: {
			cout << "First" << endl;
			break;
		}
		case 2: {
			cout << "Second" << endl;
			break;
		}
		default : {
			cout << "default"  << endl;
		}
  }

  return 0;
}