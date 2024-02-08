#include <iostream>
using namespace std;

class Hero{

	public:
	int height;
	char rank;
	static int time;

	static int random(){
		return time;
	}
};

int Hero::time = 3;

int main(){
	cout << Hero::time << endl;
	cout << Hero::random() << endl;

	return 0;
}