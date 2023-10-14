#include <iostream>
#include <deque>
using namespace std;

int main(){
	deque <int> v = {};
	deque <int> a(5, 1);

	v.push_back(1);
	cout << "size :- " << v.size() << endl;

	v.push_back(2);
	cout << "size :- " << v.size() << endl;

	v.push_back(3);
	cout << "size :- " << v.size() << endl;

	cout << "at index :- " << v.at(2) << endl;
	cout << "first elemet :- " << v.front() << endl;
	cout << "last elemet :- " << v.back() << endl;
	// cout << "begin elemet :- " << v.begin << endl;

	v.pop_back();

	for(int i: v){
		cout << i << endl;
	}

	v.clear();



	return 0;
}