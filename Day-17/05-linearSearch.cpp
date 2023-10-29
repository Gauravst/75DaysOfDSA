#include <iostream>
using namespace std;

bool search(int arr[], int size, int key) {
  if(size == 0) {
    return false;
  }

  if(arr[0] == key) {
    return true;
  } else {
    bool part = search(++arr, --size, key);
    return part;
  }
}

int main() {
  int arr[5] = {1, 2, 3, 6, 7};

  bool ans = search(arr, 5, 9);

  if(ans) {
    cout << "Found" << endl;
  } else {
    cout << "Not Found" << endl;
  }

  return 0;
}