LeetCode problems: -
#include <iostream>
using namespace std;

void revers(int arr[], int size) {
  int start = 0;
  int end = size - 1;

  for(start; start < end; start++) {
    swap(arr[start], arr[end]);
    end--;
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