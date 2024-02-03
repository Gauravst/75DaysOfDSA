#include <iostream>
using namespace std;

int partition(int *arr, int s, int e) {
  int pivot = arr[s];

  int count = 0;
  for(int i = s + 1; i <= e; i++) {
    if(arr[i] <= pivot) {
      count++;
    }
  }

  // pivot index & place in right place
  int pivotIndex = s + count;
  swap(arr[s], arr[pivotIndex]);

  // left right part fix
  int i = s, j = e;
  while(i < pivotIndex && j > pivotIndex) {
    while(pivot > arr[i]) {
      i++;
    }

    while(pivot < arr[j]) {
      j--;
    }

		if(i < pivotIndex && j > pivotIndex){
			swap(arr[i++], arr[j--]);
		}
  }

	return pivotIndex;
}

void quickSort(int *arr, int s, int e) {
  // base case
  if(s >= e) {
    return;
  }

  // partition
  int p = partition(arr, s, e);

  // left part
  quickSort(arr, s, p - 1);

  // right part
  quickSort(arr, p + 1, e);
}

int main() {
  int arr[5] = {4, 5, 0, 3, 55};
  int n = 5;

  quickSort(arr, 0, n - 1);

  for(int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}