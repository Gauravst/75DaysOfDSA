#include <iostream>
#include <string>
using namespace std;

void reverse(string& str, int i, int j){
	
	if(i > j){
		return ;
	}

	swap(str[i], str[j]);
	i++;
	j--;

	reverse(str, i , j);
}

int main(){
	string a;
	cout<< "Enter a string" << endl;
	cin >> a;

	reverse(a, 0, a.length()-1);
	cout << a << endl;
	return 0;
}