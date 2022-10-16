
// URL: https://www.hackerrank.com/contests/day-4-of-15/challenges/xor-is-the-way

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

    vector<int> p(n);
    vector<int> a(n);

    cin >> p[0];
    cout << p[0] << " ";
    a[0] = p[0];

    for (int i = 1; i < n; i++)
    {
        cin >> p[i];
    }

    for (int i = 1; i < n; i++)
    {
        a[i] = a[i - 1] ^ p[i];
        cout << a[i] << " ";
        a[i] = a[i] ^ p[i - 1];
    }

    return 0;
}