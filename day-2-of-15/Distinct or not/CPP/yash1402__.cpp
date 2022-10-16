#include <bits/stdc++.h>
using namespace std;

int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int n;
  cin >> n;

  string ans = "false";
  unordered_map<int, int> hash;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    hash[x]++;

    if (hash[x] >= 2) {
      ans = "true";
      break;
    }
  }

  cout << ans << endl;
  return 0;
}
