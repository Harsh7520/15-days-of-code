
// URL: https://www.hackerrank.com/contests/day-3-of-15/challenges/longest-subarray-of-1s-after-deleting-the-most-elements

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int current = 0, previous = 0, Max = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 1)
            current++;
        else
        {
            Max = max(Max, current + previous);
            previous = current;
            current = 0;
        }
    }
    Max = max(Max, current + previous);
    if (Max == n)
        cout << Max - 1 << endl;
    else
        cout << Max << endl;

    return 0;
}
