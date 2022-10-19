
// url: https://www.hackerrank.com/contests/day-5-0f-15/challenges/expanddd

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int main()
{
    string s;
    cin >> s;

    stack<char> stck;
    for (int i = 0; s[i] != '\0'; i++)
    {

        if (s[i] == ']')
        {
            string temp;
            while (!stck.empty() && stck.top() != '[')
            {

                temp = stck.top() + temp;
                stck.pop();
            }

            stck.pop();
            string num;

            while (!stck.empty() && isdigit(stck.top()))
            {
                num = stck.top() + num;
                stck.pop();
            }

            int number = stoi(num);
            string repeat;

            for (int j = 0; j < number; j++)
                repeat += temp;

            for (int j = 0; repeat[j] != '\0'; j++)
                stck.push(repeat[j]);
        }

        else
            stck.push(s[i]);
    }

    string result;

    while (!stck.empty())
    {
        result = stck.top() + result;
        stck.pop();
    }

    cout << result << endl;

    return 0;
}
