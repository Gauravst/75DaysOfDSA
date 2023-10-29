#include <iostream>
using namespace std;

void count(int n){

	if(n == 0){
		return ;
	}

	cout << n << endl;
	count(n - 1);
}

void count2(int n){

	if(n == 0){
		return ;
	}

	count2(n - 1);
	cout << n << endl;
}

int main() {
  int n;

  cout << "Enter a number :- ";
  cin >> n;
	cout << endl;

  count(n);
	cout << endl;
  count2(n);

  return 0;
}