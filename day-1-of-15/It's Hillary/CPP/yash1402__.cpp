#include <bits/stdc++.h>
using namespace std;

/**
 * @brief Given the altitude points, find total amount of valleys & hills
 *
 * -- Valley
 * It is said to be a valley if the left adjacent point & right adjancent point are strictly greater than the current point
 * eg. 10 5 8, is a valley because 5 < 10 && 5 < 8
 * eg. 5 5 8 is not a valley because 5 is not strictly less the left-most 5
 *
 * -- Hill
 * It is said to be a hill if the left adjacent point & right adjancent point are strictly lesser than the current point
 * eg. 10 15 8 is a hill because 15 > 10 && 15 > 8
 * eg. 10 15 20 is not a hill becuase 15 is not strictly greater than 20
 *
 * -- Miscellaneous
 * eg. 10 10 10 is not a hill neither a valley because all items are same
 * eg. 10 5 2 is not a hill neither a valley because middle element is neither strictly greater nor strictly lesser
 *
 * @logic
 * --------
 * -> One way to solve is to simulate all the conditions and remember what previous point was (in-case if they were similar)
 *
 * -> 1) Easy approach would be to drop duplicates from the array so we don't have to deal with duplicates anymore
 *    2) From i = 2 ... n - 1, check if the point is strictly greater or strictly lesser, if yes then update the count
 *
 * Steps:
 * - Input array
 * - Drop duplicates
 * - Count element strictly greater or strictly lesser than their adjacent ones (ignore 0th & last element)
 * - Output count
 */

void solve()
{
  int totalPoints;
  cin >> totalPoints;
  vector<int> pointArr;

  int arrIdx = -1; // Index for the pointArr. It will point to the last element in the pointArr (-1 denotes empty pointArr).

  for (int i = 0; i < totalPoints; i++)
  {
    int x;
    cin >> x;
    if (i > 0 && pointArr[arrIdx] == x)
      continue;
    pointArr.push_back(x);
    arrIdx++;
  }

  int counts = 0;
  for (int i = 1; i < pointArr.size() - 1; i++)
  {
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