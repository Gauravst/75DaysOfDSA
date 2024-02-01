#include <iostream>
using namespace std;

int main() {
  int arr[5] = {34, 44, 2, 9, 0};

  for(int i = 0; i < 5; i++) {
    int min = i;
    for(int j = i + 1; j < 5; j++) {
      if(arr[j] < arr[min]) {
        min = j;
      }
    }
    if(min != i) {
      swap(arr[i], arr[min]);
    }
  }

  for(int i = 0; i < 5; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}