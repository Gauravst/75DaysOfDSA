// Write a recursive function to find the greatest common divisor (GCD) of two positive integers.

#include <iostream>
using namespace std;

int gcd(int m, int n) {
	if(n == 0){
		return m;
	}

	return gcd(n, m%n);
}

int main() {
  int m, n;

  cout << "Enter 1st number :- " << endl;
  cin >> m;

  cout << "Enter 2nd number :- " << endl;
  cin >> n;

  int ans = gcd(m, n);
  cout << ans;

  return 0;
}