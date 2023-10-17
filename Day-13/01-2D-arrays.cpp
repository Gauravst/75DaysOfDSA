#include <iostream>
#include <limits.h>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col) {
  for(int i = 0; i < row; i++) {
    for(int j = 0; j < col; j++) {
      if(arr[i][j] == target) {
        return 1;
      }
    }
  }
  return 0;
}

void sumRowWise(int arr[][4], int row, int col) {
  for(int i = 0; i < row; i++) {
    int sum = 0;
    for(int j = 0; j < col; j++) {
      sum += arr[i][j];
    }
    cout << "Row " << i << " Sum is " << sum << endl;
  }
  cout << endl;
}

void sumColWise(int arr[][4], int row, int col) {
  for(int j = 0; j < col; j++) {
    int sum = 0;
    for(int i = 0; i < row; i++) {
      sum += arr[i][j];
    }
    cout << "Col " << j << " Sum is " << sum << endl;
  }
  cout << endl;
}

void maxSumRow(int arr[][4], int row, int col) {
  int maxi = INT_MIN;
  int index = -1;
  for(int i = 0; i < row; i++) {
    int sum = 0;
    for(int j = 0; j < col; j++) {
      sum += arr[i][j];
    }

    if(sum > maxi) {
      maxi = sum;
      index = i;
    }
  }

  cout << "Max Row Sum is :- " << maxi << endl;
  cout << "Max Row Sum Indx is :- " << index << endl;
}

int main() {
  int arr[3][4];
  int arr1[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2};
  int arr2[3][4] = {{1, 2, 3, 4}, {4, 3, 2, 1}, {5, 6, 7, 8}};

  cout << "Enter Your array Data :- " << endl;
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 4; j++) {
      cin >> arr[i][j];
    }
  }
  cout << endl;

  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 4; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;

  cout << "Enter the element to search :- " << endl;
  int target;
  cin >> target;

  if(isPresent(arr, target, 3, 4)) {
    cout << "Element Found" << endl;
  } else {
    cout << "Element Not Found" << endl;
  }

  sumRowWise(arr, 3, 4);
  sumColWise(arr, 3, 4);
  cout << endl;

  maxSumRow(arr, 3, 4);

  return 0;
}