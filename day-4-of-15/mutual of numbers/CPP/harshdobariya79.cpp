
// URL: https://www.hackerrank.com/contests/day-4-of-15/challenges/mutual-of-numbers

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int count = 0;

    for (int i = 1; i <= max(a, b) / 2; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}