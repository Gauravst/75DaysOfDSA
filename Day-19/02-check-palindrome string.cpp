#include <iostream>
using namespace std;

bool checkPalindrome(string str, int i, int j) {
  if(i > j) {
    return true;
  }

  if(str[i] == str[j]) {
    return checkPalindrome(str, ++i, --j);
  } else {
    return false;
  }
}

int main() {
  string str;
  cout << "Enter a string :- " << endl;
  cin >> str;

  if(checkPalindrome(str, 0, str.length() - 1)) {
    cout << "String is Palindrome";
  } else {
    cout << "String is not a Palindrome";
  }

  return 0;
}