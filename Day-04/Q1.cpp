// how to exit infinite loop

#include <iostream>
using namespace std;

int main() {
  int num = 5;

  while(1) {
    switch(num) {
			case 5: {
				cout << "five";
				break;
				exit(0);
			}
			default: {
				cout << "default";
				break;
			}
    }
  }

  return 0;
}