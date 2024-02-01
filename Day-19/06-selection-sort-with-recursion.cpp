#include <iostream>
using namespace std;

void selSort(int *arr, int i, int n) {
  if(i >= n) {
    return;
  }

  int min = i;
  for(int j = i + 1; j < n; j++) {
    if(arr[min] > arr[j]) {
      min = j;
    }
  }

	if(min != i){
		swap(arr[min], arr[i]);
	}

  selSort(arr, ++i, n);
}

int main() {
  int arr[5] = {3, 4, 7, 0, 13};
  selSort(arr, 0, 5);

  for(int i = 0; i < 5; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}