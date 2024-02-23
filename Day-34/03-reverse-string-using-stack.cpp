#include <iostream>
#include <stack>
using namespace std;

int main() {
  string str = "Gaurav";
  stack<char> s;

  int i = 0;
  while(i < str.length()) {
    s.push(str[i]);
    i++;
  }

  string ans;
  while(!s.empty()) {
    char c = s.top();
		ans.push_back(c);
		s.pop();
  }

	cout << "Reverse string is :- " << ans << endl;

  return 0;
}