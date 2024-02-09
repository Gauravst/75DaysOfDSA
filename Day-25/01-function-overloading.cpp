#include <iostream>
using namespace std;

class A{

	public:
	int add(int a, int b){
		int ans = a + b;
		return ans;
	}

	int add(int a, int b, int c){
		int ans = a + b + c;
		return ans;
	}
};

int main(){
	A obj;
	cout << obj.add(2,3) << endl;
	cout << obj.add(1,5,3) << endl;

	return 0;
}