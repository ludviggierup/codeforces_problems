#include <iostream>
#include <vector>

using namespace std;

int solve() {
  int n, m;
  cin >> n >> m;

  vector<int> swords(n);
  int monsters[m] = {};
  int cs[m] = {};
  for (int i = 0; i < n; i++) {
    cin >> swords[i];
  }
  for (int i = 0; i < m; i++) {
    cin >> monsters[i];
  }
  for (int i = 0; i < m; i++) {
    cin >> cs[i];
  }

  for (int i = 0; i < m; i++) {
    // go through monsters
    for (int s = 0; s < swords.size(); s++) {
      // go through swords
      cout << "at sword " << s << endl;
      if (swords[s] >= monsters[i]) {
        if (cs[i] > 0) {
          swords[s] = max(swords[s], cs[i]);
        }
        else {
          swords[s] = 0;
        }
      }
      else if (s == swords.size()-1) {
        cout << "out of swords" << endl;
        cout << i-1 << endl;
        return 0;
      }
    }
  }
  cout << "went through all the monsters" << endl;
  cout << n << endl;
  return 0;


}

int main() {
  int tests;
  cin >> tests;
  cout << "-----" << endl;
  for (int t = 0; t < tests; t++) {
    solve();
  }
  return 0;
}
