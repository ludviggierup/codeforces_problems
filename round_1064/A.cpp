#include <iostream>

using namespace std;

int solve(int n, string s) {
  int res = 0;
  char last = s[s.size()-1];
  for (int i = 0; i < n-1; i++) {
    if (s[i] != last) {
      res++;
    }
  }
  return res;
}

int main() {

  int tests;
  cin >> tests;

  for (int t = 0; t < tests; ++t) {
    int n;
    string s;

    cin >> n >> s;
    cout << solve(n, s) << endl;
  }



}
