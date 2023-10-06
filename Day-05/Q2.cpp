// swap alternate
#include <iostream>
using namespace std;

void revers(int arr[], int size) {
  int j = 0;
  while(j + 1 < size) {
    swap(arr[j], arr[j + 1]);
		j = j + 2;
  }
}

void print(int arr[], int size) {
  for(int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
}

int main() {
  int arr[6] = {1, 2, 3, 4, 5, 6};

  revers(arr, 6);
  print(arr, 6);

  return 0;
}