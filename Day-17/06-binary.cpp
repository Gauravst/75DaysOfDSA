#include <iostream>
using namespace std;

bool search(int arr[], int s, int e, int key){

	if(s > e){
		return false;
	}

	int mid = s + (e - s)/2;

	if(arr[mid] == key){
		return true;
	}
	
	if(arr[mid] > key){
		return search(arr, s, mid - 1, key);
	}else{
		return search(arr, mid + 1, e, key);
	}
}

int main(){
	int arr[5] = {1, 4, 6, 8, 9};

	bool ans = search(arr, 0, 4, 1);

	if(ans){
		cout << "Found" << endl;
	}else{
		cout << "Not Found" << endl;
	}

	return 0;
}