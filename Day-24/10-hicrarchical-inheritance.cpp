#include <iostream>
using namespace std;

class A{

	public:
	int x = 41;
};

class B:public A{

	public:
	int b;
};

class C:public A{

	public:
	int c;
};

int main(){

	A a1;
	cout << a1.x << endl;

	B b1;
	cout << b1.x << endl;

	C c1;
	cout << c1.x << endl;


	return 0;
}