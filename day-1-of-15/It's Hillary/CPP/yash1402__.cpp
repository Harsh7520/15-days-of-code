#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int totalPoints;
  cin >> totalPoints;
  vector<int> pointArr;

  for (int i = 0; i < totalPoints; i++)
  {
    int x;
    cin >> x;
    if (i > 0 && pointArr[i - 1] == x)
      continue;
    pointArr.push_back(x);
  }

  int counts = 0;
  for (int i = 1; i < pointArr.size() - 1; i++)
  {
    if (pointArr[i] == pointArr[i - 1] && pointArr[i] == pointArr[i + 1])
      continue;

    if (pointArr[i] < pointArr[i - 1] && pointArr[i] < pointArr[i + 1])
      counts++;
    if (pointArr[i] > pointArr[i - 1] && pointArr[i] > pointArr[i + 1])
      counts++;
  }

  cout << counts << endl;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  solve();
  return 0;
}