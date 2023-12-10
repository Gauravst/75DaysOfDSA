// Write a recursive function to calculate the nth term of the Fibonacci sequence.

#include <iostream>
using namespace std;

int fib(int n) {

  if(n == 1) {
    return 0;
  }

  if(n == 2) {
    return 1;
  }

	return fib(n - 1) + fib(n - 2);
}

int main() {
  int n;
  cout << "Enter nth number :- " << endl;
  cin >> n;

  int ans = fib(n);
  cout << "nth number is :- " << ans << endl;

  return 0;
}