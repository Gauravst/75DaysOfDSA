#include <iostream>
#include <set>
using namespace std;

int main(){
	set<int> s;

	s.insert(4);
	s.insert(4);
	s.insert(7);
	s.insert(0);
	s.insert(45);
	s.insert(64);

	for(int i : s){
		cout << i << " ";
	}
	cout << endl;

	s.erase(s.begin());
	for(int i : s){
		cout << i << " ";
	}
	cout << endl;

	cout << "7 Persent or not " << s.count(7) << endl;
	
	set<int>::iterator itr = s.find(5);

	return 0;
}