#include <iostream>
using namespace std;

int main() {
  int n, m;

  cout << "Enter Number of Rows :- " << endl;
  cin >> n;

  cout << "Enter Number of Colmuns :- " << endl;
  cin >> m;

  int **arr = new int *[n];

  for(int i = 0; i < n; i++) {
    arr[i] = new int[m];
  }

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      cin >> arr[i][j];
    }
  }
  cout << endl;

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  for(int i = 0; i < n; i++) {
    delete[] arr[i];
  }

  delete[] arr;

  return 0;
}