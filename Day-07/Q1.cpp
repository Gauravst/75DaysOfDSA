// First Occurrence & Last Occurrence

#include <iostream>
using namespace std;

int firstOcc(int arr[], int size, int key) {
  int start = 0, end = size - 1, ans = -1;
	int mid = start + (end - start)/2;

  while(start <= end) {
    if(arr[mid] == key){
			ans = mid;
			end = mid - 1;
		}

		if(arr[mid] > key){
			end = mid - 1;
		}else{
			start = mid + 1; 
		}

		mid = start + (end - start)/2;
  }
	
	return ans;
}

int lastOcc(int arr[], int size, int key) {
  int start = 0, end = size - 1, ans = -1;
	int mid = start + (end - start)/2;

  while(start <= end) {
    if(arr[mid] == key){
			ans = mid;
			start = mid + 1;
		}

		if(arr[mid] > key){
			end = mid - 1;
		}else{
			start = mid + 1; 
		}

		mid = start + (end - start)/2;
  }

	return ans;
}

int main() {
  int arr[8] = {0, 0, 1, 1, 2, 2, 2, 2};

  cout << "First Occurrence of 5 is at Index " << firstOcc(arr, 8, 2) << endl;
  cout << "Last Occurrence of 5 is at Index " << lastOcc(arr, 8, 2) << endl;

  return 0;
}