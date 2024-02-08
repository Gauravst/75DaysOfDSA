#include <iostream>
using namespace std;

class Human{

	public:
	int height = 456;
	int weight;


	public:
	int getHeight(){
		return this->height;
	}
};

class Man:public Human{

	public:
	int age =56;
};

int main(){

	Man g;
	cout << "age:- " << g.age << endl;
	cout << "height:- " << g.getHeight() << endl;
	return 0;
}