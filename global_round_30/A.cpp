#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int tests;
  cin >> tests;
  for (int j = 0; j < tests; j++) {
    int n, x;
    cin >> n;
    int a[n] = {};
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    cin >> x;

    if (x > *max_element(a, a+n) || x < *min_element(a, a+n)) {
      cout << "NO" << endl;
    }
    else {
      cout << "YES" << endl;
    }
  }
}
