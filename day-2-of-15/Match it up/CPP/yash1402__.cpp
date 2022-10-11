#include <bits/stdc++.h>
using namespace std;

int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int hashOfFrom[27] = {0};
  int hashOfTo[27] = {0};

  string from, to;
  cin >> to >> from;

  for (auto c : from) hashOfFrom[c - 'a']++;
  for (auto c : to) hashOfTo[c - 'a']++;

  string ans = "true";
  for (int i = 0; i < 27; i++) {
    if (hashOfFrom[i] < hashOfTo[i]) {
      ans = "false";
      break;
    }
  }

  cout << ans << endl;
  return 0;
}
