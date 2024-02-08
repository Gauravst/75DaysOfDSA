#include <iostream>
using namespace std;

class A{
	public:
	int aData = 43;
};

class B{
	public:
	int bData = 304;
};

class C:public A, public B{
	public:
	int cData = 04;
};

int main(){

	C c1;
	cout << "a data :- " << c1.aData << endl;
	cout << "b data :- " << c1.bData << endl;
	cout << "c data :- " << c1.cData << endl;

	return 0;
}