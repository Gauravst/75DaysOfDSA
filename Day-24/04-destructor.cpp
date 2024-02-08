#include <iostream>
using namespace std;

class Hero{

	public:
	~Hero(){
		cout << "Destructor called" << endl;
	};
};

int main(){
	// static 
	Hero a;

	// dynamic
	Hero *b = new Hero();
	// manually Destructor called
	delete b;


	return 0;
}