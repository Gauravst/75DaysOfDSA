#include <iostream>
using namespace std;

int main(){

	int arr[10] = {2, 5, 6, 7};

	cout << endl;
	cout << "address of first memory block is :- " << arr << endl;
	cout << "address of first memory block is :- " << &arr[0] << endl;
	cout << endl;

	cout << "*arr is :- " << *arr << endl;
	cout << "*arr + 1 is :- " << *arr + 1 << endl;
	cout << "*(arr + 1) is :- " << *(arr + 1) << endl;
	cout << "*(arr) + 1 is :- " << *(arr) + 1 << endl;
	cout << endl;

	int i = 2;
	cout << "i[arr] is :- " << i[arr] << endl;
	cout << endl;

	int *p = arr;
	cout << "*p is :- " << *p << endl;
	cout << "p is :- " << p << endl;
	cout << "p address is :- " << &p << endl;
	cout << endl;

	cout << "Size of arr :- " << sizeof(arr) << endl; // 10 * 4 = 40
	cout << "Size of p :- " << sizeof(p) << endl; // 8
	cout << "Size of *p :- " << sizeof(*p) << endl; // 4
	cout << "Size of &p :- " << sizeof(&p) << endl; // 8
	cout << endl;

	// int arr[10] = {2, 5, 6, 7};
	cout << "&arr[0] :- " << &arr[0] << endl; // add.
	cout << "&arr :- " << &arr << endl; // add.
	cout << "arr :- " << arr << endl; // add.
	cout << endl;

	int *p2 = &arr[0];
	cout << "&p2 :- " << &p2 << endl; // p2 add.
	cout << "*p2 :- " << *p2 << endl; // 2
	cout << "p2 :- " << p2 << endl; // arr add.
	cout << endl;

	// error
	// arr = arr + 1;
	cout << "before +1 p is :- " << p << endl;
	p = p + 1 ;
	cout << "after +1 p is :- " << p << endl;
	

	cout << endl;
	return 0;
}