#include <iostream>
#include <cmath>

using namespace std;

int solve() {
  int n;
  cin >> n;
  int a[n] = {};
  for (int i = 0; i < n; i++) {
    cin >> a[i];

  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) {
      if ((a[i] % a[j]) % 2 == 0) {
        cout << a[j] << " " << a[i] << endl;
        return 0;
      }
    }
  }
  cout << "-1" << endl;
  return 0;
}

int main() {
  int tests;
  cin >> tests;

  for (int t = 0; t < tests; t++) {
    solve();
  }
  return 0;
}
