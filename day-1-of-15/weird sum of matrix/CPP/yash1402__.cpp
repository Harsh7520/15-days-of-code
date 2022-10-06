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
  int m, n;
  cin >> m >> n;
  int mat[m][n];

  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      int x;
      cin >> x;
      mat[i][j] = x;
    }
  }

  int ans = 0;
  for (int i = 0; i < m - 2; i++)
  {
    for (int j = 0; j < n - 2; j++)
    {
      int sum = mat[i][j] + mat[i][j + 1] + mat[i][j + 2] + mat[i + 1][j + 1] + mat[i + 2][j] + mat[i + 2][j + 1] + mat[i + 2][j + 2];
      ans = max(ans, sum);
    }
  }

  cout << ans << endl;
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
