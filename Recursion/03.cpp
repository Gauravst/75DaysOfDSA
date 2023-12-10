// Write a recursive function to check if a given string is a palindrome or not.

#include <iostream>
#include <string>
using namespace std;

int palindrome(string str, int s, int e) {

  if(s > e) {
    return true;
  }

  if(str[s] != str[e]) {
    return false;
  }

  return palindrome(str, ++s, --e);
}

int main() {
  string str;

  cout << "Enter string :- " << endl;
  cin >> str;

  int size = str.size();
  bool ans = palindrome(str, 0, size-1);

  if(ans){
		cout << "String is a palindrome." << endl;
	}else{
		cout << "String is not a palindrome." << endl;
	}

  return 0;
}