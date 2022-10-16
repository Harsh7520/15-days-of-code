
// URL: https://www.hackerrank.com/contests/day-4-of-15/challenges/cup-of-tea

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    vector<int> a(3);
    cin >> a[0] >> a[1] >> a[2];

    int Max = 0, sum = 0;
    for (int i = 0; i < a.size(); i++)
    {
        Max = max(a[i], Max);
        sum += a[i];
    }
    cout << max(Max, (sum + 1) / 2) << endl;
    return 0;
}