#include <bits/stdc++.h>
using namespace std;

#define ipvec(v)    \
  for (auto &i : v) \
    cin >> i;
#define opvec(v)   \
  for (auto i : v) \
    cout << i << " ";
#define opv(v) cout << #v << " : " << v << endl;

#define umap(t1, t2) unordered_map<t1, t2>
#define map(t1, t2) map<t1, t2>
#define uset(t1) unordered_set<t1>
#define set(t1) set<t1>

#define all(v) v.begin(), v.end()

#define limmax(type) numeric_limits<type>::max()
#define limmin(type) numeric_limits<type>::min()

typedef long long ll;

typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;

typedef pair<int, int> pii;
typedef pair<long long, long long> pll;

void solve(int tNo)
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

  for (auto x : hash)
  {
    if (x.second > totalNumbers / 2)
    {
      cout << x.first << endl;
      return;
    }
  }

  for (auto x : hash)
  {
    if (x.second >= totalNumbers / 2)
    {
      cout << x.first << endl;
      return;
    }
  }
}

// #define TEST_CASE_DRIVEN true
#define TEST_CASE_DRIVEN false

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  if (TEST_CASE_DRIVEN)
  {
    int tt;
    cin >> tt;
    for (int i = 0; i < tt; i++)
    {
      solve(i + 1);
    }
  }
  else
  {
    solve(1);
  }
  return 0;
}