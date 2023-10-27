#include <iostream>
using namespace std;

int sum(int *arr, int n){

	int sum = 0;
	for(int i = 0; i < n; i++){
		sum += arr[i];
	}

	return sum;
}

int main() {
  int n;

  cout << "Enter Array Size :- " << endl;
  cin >> n;

  int *arr = new int[n];

  cout << "Enter your array :- " << endl;
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  cout << endl;

	int ans  = sum(arr, n);
	cout << "Sum is :- " << ans << endl;

	delete []arr;

  return 0;
}