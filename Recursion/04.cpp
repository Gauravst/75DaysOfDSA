// Write a recursive function to calculate the sum of digits of a positive integer. For example, given the number 12345, the sum of its digits would be 1 + 2 + 3 + 4 + 5 = 15.

#include <iostream>
using namespace std;

int add(int n){

	if(n <= 1){
		return n;
	}

	return n + add(n - 1);
}

int main(){

	int n;
	cout << "Enter Number :- " << endl;
	cin >> n;

	int ans = add(n);
	cout << "Ans. :-" << ans << endl;

	return 0;
}