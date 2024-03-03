#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
  int start = 0;
  int end = size - 1;
  int mid = start + (end - start) / 2;

  while(start <= end) {
    if(arr[mid] == key) {
      return mid;
    }

    if(arr[mid] < key) {
      start = mid + 1;
    } else {
			end = mid -1;
    }
		mid = start + (end - start) / 2;
  }
	return -1;
}

int main() {
  int evenArr[4] = {2, 4, 5, 17};
  int oddArr[3] = {3, 4, 8};

  int evenIndex = binarySearch(evenArr, 4, 2);
  int oddIndex = binarySearch(oddArr, 3, 8);

  cout << "Even array index of 4 is " << evenIndex << endl;
  cout << "odd array index of 4 is " << oddIndex << endl;

  return 0;
}
