#include <iostream>
using namespace std;

class Animal{

	public:
	int height = 300;
};

class Dog:public Animal{

	public:
	int weight = 454;
};

class DhruvRathee:public Dog{

	public:
	int age = 42;
};

int main(){

	DhruvRathee d1;
	cout << "Height :- " << d1.height << endl;
	cout << "weight :- " << d1.weight << endl;
	cout << "age :- " << d1.age << endl;

	return 0;
}