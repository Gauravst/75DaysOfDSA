#include <iostream>
#include <stack>
using namespace std;

int main(){

	stack <int> s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);

	cout << "top element :-" << s.top() << endl;

	s.pop();
	s.pop();
	cout << "top element after 2 pop:-" << s.top() << endl;

	if(s.empty()){
		cout << "stack s is empty" << endl;
	}else{
		cout << "stack is not empty" << endl;
	}

	return 0;
}
