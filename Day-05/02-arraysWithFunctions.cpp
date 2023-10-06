#include <iostream>
using namespace std;

int addNum(int arr[], int size){
	int ans = 0;
	for(int a = 0; a < size; a++){
		ans = ans + arr[a];
	}

	return ans;
}

int main(){
	int arr[3];

	for(int i = 0; i < 3; i++){
		cout << "Enter " << i + 1 << " Number :-"<< endl;
		cin >> arr[i];
	}
	cout << addNum(arr, 3);

	return 0;
}