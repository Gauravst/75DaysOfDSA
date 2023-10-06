#include <iostream>
using namespace std;

bool isEven(int a) {
  if(a & 1) {
    return 0;  // odd
  }
  return 1;
}

int main() {
  int a;
  cout << "Enter a number :-" << endl;
  cin >> a;

  if(isEven(a)) {
    cout << "Number is Even" << endl;
  }else{
		cout << "Number is odd" << endl;
	}

  return 0;
}