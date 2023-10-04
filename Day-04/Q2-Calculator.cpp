#include <iostream>
using namespace std;

int main(){
	int a, b;
	char op;

	cout << "Enter First Number" << endl;
	cin >> a;

	cout << "Enter Second Number" << endl;
	cin >> b;

	cout << "Enter the operation you want to perform" << endl;
	cin >> op;

	switch(op){
		case '+' : {
			cout << a + b << endl;
			break;
		}
		case '-' : {
			cout << a - b << endl;
			break;
		}
		case '*' : {
			cout << a * b << endl;
			break;
		}
		case '/' : {
			cout << a / b << endl;
			break;
		}
		case '%' : {
			cout << a % b << endl;
			break;
		}
		default : {
			cout << "Please Enter Valid operator" << endl;
		}
	}

	return 0;
}