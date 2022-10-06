#include <bits/stdc++.h>
using namespace std;

/**
 * @brief Given a matrix find the maximum sum of all elements of pattern "I" that can be formed with given matrix
 *
 * - Straightforward solution would be to traverse the matrix from i: 0 ... m - 2 && 0 ... n - 2
 * and on every pair(i, j) calculate the sum of pattern that starts at (i, j)
 */
void solve()
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

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  solve();
  return 0;
}
