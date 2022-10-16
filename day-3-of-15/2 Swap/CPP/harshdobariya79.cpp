
// URL: https://www.hackerrank.com/contests/day-3-of-15/challenges/2-swap

#include <cmath>
#include <string>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s1, s2;
    vector<int> s(60, 0);

    cin >> s1 >> s2;

    if (s1.length() != s2.length())
    {
        cout << "false" << endl;
        return 0;
    }

    int count = 0;

    for (int i = 0; s1[i] != '\0'; i++)
    {
        s[s1[i] - 'A']++;
        if (s1[i] != s2[i])
        {
            count++;
        }
    }

    sort(s.rbegin(), s.rend());

    if ((count == 0 && s[0] >= 2) || count == 2)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}
