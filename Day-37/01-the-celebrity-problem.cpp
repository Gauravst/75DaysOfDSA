#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int celebrity(vector<vector<int>>& M, int n) {
  stack<int> s;

  for (int i = 0; i < n; i++) {
    s.push(i);
  }

  while (s.size() > 1) {
    int a = s.top();
    s.pop();

    int b = s.top();
    s.pop();

    if (M[a][b] != 1) {
      s.push(a);
    } else {
      s.push(b);
    }
  }

  int candidate = s.top();
  int celebrity = candidate;

  for (int i = 0; i < n; i++) {
    if (M[candidate][i] != 0) {
      celebrity = -1;
    }
  }

  for (int i = 0; i < n; i++) {
    if (candidate != i) {
      if (M[i][candidate] != 1) {
        celebrity = -1;
      }
    }
  }

  return celebrity;
}

int main() {
  vector<vector<int>> M;
  M.push_back({0, 1, 0});
  M.push_back({0, 0, 0});
  M.push_back({0, 1, 0});

  int ans = celebrity(M, 3);
  cout << ans << endl;
  return 0;
}
