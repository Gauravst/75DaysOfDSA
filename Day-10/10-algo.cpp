#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main(){
	vector<int> v;

	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	v.push_back(7);

	cout << "Finding 4:- " << binary_search(v.begin(), v.end(), 4) << endl;
	cout << "Lower bound:- " << lower_bound(v.begin(), v.end(), 4) - v.begin() << endl;
	cout << "Upper bound:- " << upper_bound(v.begin(), v.end(), 4) - v.begin() << endl;

	int a = 6;
	int b = 4;

	cout << "max of a and b :- " << max(a, b) << endl;
	cout << "min of a and b :- " << min(a, b) << endl;

	swap(a, b);
	cout << a  << " " << b << endl;

	string g = "Gaurav";
	reverse(g.begin(), g.end());
	cout << g << endl;

	rotate(v.begin(), v.begin()+1, v.end());
	for(int i:v){
		cout << i << " ";
	}
	cout << endl;

	sort(v.begin(), v.end());
		for(int i:v){
		cout << i << " ";
	}
	cout << endl;


	return 0;
}