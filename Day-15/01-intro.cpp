#include <iostream>
using namespace std;

int main(){
	
	int a = 5;
	int *p = &a;

	cout << "a is :- "<< a << endl;
	cout << "a address is :- " << &a << endl;

	cout << "p is :-" << p << endl;
	cout << "p value is :-" << *p << endl;

	int b = 5;
	int *p2 = &b;

	cout << "before *p2++ is :- "<< *p2 << endl;
	(*p2)++;
	cout << "*after *p2++ is :- "<< *p2 << endl;

	cout << "before p2++ is :- "<< p2 << endl;
	p2++;
	cout << "after p2++ is :- "<< p2 << endl;
 
	cout << "size of *p2 is :- " << sizeof(*p2) << endl;
	cout << "size of p2 is :- " << sizeof(p2) << endl;

	return 0;
}