#include <bits/stdc++.h>
using namespace std;

/**
 * @brief Find the element which appear the most in the array
 *
 * - Straigtforward solution would be to count all the occurences of all unique numbers and then print maximum occurence number
 *
 * - Hashing based solution would be to store the counts of occurences in hash table and then traverse through it to find the required answer
 */
void solve()
{
  int totalNumbers;
  cin >> totalNumbers;

  unordered_map<int, int> hash;
  for (int i = 0; i < totalNumbers; i++)
  {
    int x;
    cin >> x;
    hash[x]++;
  }

  int ans = -1, maxOccurences = 0;
  for (auto x : hash)
  {
    if (x.second > maxOccurences)
    {
      ans = x.first;
      maxOccurences = x.second;
    }
  }

  cout << ans << endl;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  solve();
  return 0;
}