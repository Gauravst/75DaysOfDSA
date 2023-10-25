#include <iostream>
using namespace std;

int main(){

	char ch[7] = "gaurav";
	char ch2[7] = {'g', 'a', 'u', 'r', 'a', 'v'}; 

	cout << endl;
	cout << "ch is :- " << ch << endl;
	cout << "ch2 is :- " << ch2 << endl;
	cout << endl;

	char *p = &ch[0];
	cout << "*p is :- " << *p << endl;
	cout << "p is :- " << p << endl;
	cout << endl;

	return 0;
}