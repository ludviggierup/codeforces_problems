#include <iostream>
#include <algorithm>

using namespace std;

int solve(int a, int b, int n) {
  if (b <= a/n || a == b) return 1;
  return 2;
}

int main() {
  int tests;
  cin >> tests;

  for (int t = 0; t < tests; t++) {
    int a, b, n;
    cin >> a >> b >> n;
    cout << solve(a, b, n) << endl;
  }
}
