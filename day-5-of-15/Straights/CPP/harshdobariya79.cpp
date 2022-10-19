
// url: https://www.hackerrank.com/contests/day-5-0f-15/challenges/straight

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

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] >= a[j])
                continue;
            for (int k = j + 1; k < n; k++)
            {
                if (a[i] < a[j] && a[j] < a[k])
                {
                    cout << "true" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "false" << endl;

    return 0;
}
