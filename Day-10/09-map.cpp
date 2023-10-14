#include <iostream>
#include <map>
using namespace std;

int main(){
	map<int, string> m;

	m[1] = "Hello";
	m[5] = "Kese ho";
	m[2] = "Gaurav";

	for(auto i : m ){
		cout << i.first << " " << i.second << endl;
	}

	cout << "Find 5 :- " << m.count(5) << endl;

	return 0;
}