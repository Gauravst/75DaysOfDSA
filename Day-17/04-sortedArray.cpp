#include <iostream>
using namespace std;

bool sorted(int arr[], int size){

	if(size == 0 || size == 1){
		return true;
	}

	if(arr[0] > arr[1]){
		return false;
	}else{
		bool sort = sorted(++arr, --size);
		return sort;
	}
}

int main(){
	int n[5] = {1, 3, 4, 5, 7};

	bool ans = sorted(n, 5);

	if(ans){
		cout << "Array is Sorted" << endl;
	}else{
		cout << "Array is Not Sorted" << endl;
	}

	return 0;
}