#include <iostream>
using namespace std;

bool search(int arr[], int size, int element){
	for(int i = 0; i < size; i++){
		if(arr[i] == element){
			return 1;
		}
	}
	return 0;
}

int main(){
	int arr[5] = {1, 5, 3, -45, 0};
	int a;

	cout << "Enter Number you want to search :-" << endl;
	cin >> a;

	int found = search(arr, 5, a);

	if(found){
		cout << "Number is Present" << endl;
	}else{
		cout << "Number is absent" << endl;
	}

	return 0;
}