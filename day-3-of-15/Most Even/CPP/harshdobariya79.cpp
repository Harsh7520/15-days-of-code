
// URL: https://www.hackerrank.com/contests/day-3-of-15/challenges/most-even

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
    vector<int> a(n);
    vector<int> b(106, 0);
    bool flag = false;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
            flag = true;
        b[a[i]]++;
    }

    if (flag == false)
    {
        cout << -1 << endl;
        return 0;
    }

    int value = -1, occur = 0;

    for (int i = 0; i < 106; i = i + 2)
    {
        if (b[i] > occur)
        {
            value = i;
            occur = b[i];
        }
    }

    if (value == -1)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << value << endl;
    }

    return 0;
}