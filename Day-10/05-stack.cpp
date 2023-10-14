#include <iostream>
#include <stack>
using namespace std;

int main(){
	stack <string> a;
	
	a.push("gaurav");
	a.push("singh");
	a.push("tangariya");

	cout << "Top Element " << a.top() << endl;

	a.pop();
	cout << "Top Element " << a.top() << endl;

	cout << "Size " << a.size() << endl;
	cout  << "Empty or not "<< a.empty() << endl;

	return 0;
}