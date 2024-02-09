#include <iostream>
using namespace std;

class A{

	public:
	int a ;
	int operator+(A&obj){
		int v1 = this->a;
		int v2 = obj.a;
		return v1 - v2;
	}
};

int main(){

	A obj1, obj2;
	obj1.a = 5;
	obj2.a = 2;

	cout << obj1 + obj2 << endl;
	return 0;
}