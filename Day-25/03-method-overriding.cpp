#include <iostream>
using namespace std;

class A{
	public:
	void print(){
		cout << "In Class A" << endl;
	}
};

class B:public A{

	public:
	void print(){
		cout << "In Class B" << endl;
	}
};

int  main(){


	B obj;
	obj.print();

	return 0;
}