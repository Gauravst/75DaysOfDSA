#include <iostream>
#include <list>
using namespace std;

int main(){
	list <int> l(5, 100);

	for( int i : l){
		cout << i << endl;
	}

	return 0;
}