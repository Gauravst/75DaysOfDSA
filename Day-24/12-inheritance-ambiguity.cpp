#include <iostream>
using namespace std;

class A{
	public:
	void main(){
		cout << "Function in class A" << endl;
	}
};

class B{
	public:
	void main(){
		cout << "Function in class B" << endl;
	}
};


class C:public A, public B{

	public:
	void print(){
		cout << "Print Function in Class C" << endl;
	}
};

int main(){

	C obj1;
	obj1.print();
	obj1.A::main();
	obj1.B::main();
	


	return 0;
}