// Write a recursive function to calculate the exponentiation of a number to a given power.

#include <iostream>
using namespace std;

int power(int n, int p){
	
	if(p == 0){
		return 1;
	}

	return n * power(n, p - 1);
}

int main(){
	int n, p, ans;

	cout << "Enter number :- " << endl;
	cin >> n;

	cout << "Enter power :- " << endl;
	cin >> p;

	ans = power(n, p);
 
	cout << "Answer is :- " << ans << endl;

	return 0;
}