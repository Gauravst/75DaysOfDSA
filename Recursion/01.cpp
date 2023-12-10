// find the factorial

#include <iostream>
using namespace std;

int fact(int n) {

	///base case
	if(n == 0){
		return 1;
	}

  return n * fact(n - 1);
}

int main() {
  int n;
  cout << "Enter Your Number :- " << endl;
  cin >> n;

  int ans = fact(n);
  cout << "Ans is :- " << ans << endl;

  return 0;
}