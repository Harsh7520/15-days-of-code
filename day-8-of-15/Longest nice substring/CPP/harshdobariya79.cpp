
// url: https://www.hackerrank.com/contests/day-8-of-15/challenges/longest-nice-substring

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


string solve(string s) {
        int n = s.size();
        string ans = "";
        for (int i = 0; i < n; ++i) {
            int lower = 0, upper = 0;
            for (int j = i; j < n; ++j) {
                if (islower(s[j]))
                    lower |= 1 << (s[j] - 'a');
                else
                    upper |= 1 << (s[j] - 'A');
                if (lower == upper && j - i + 1 > (int)ans.size()) ans = s.substr(i, j - i + 1);
            }
        }
        return ans;
    }


int main() {
    
    string s;
    cin>>s;
    
    string ans = "";
    ans = solve(s);
    
    cout<<ans<<endl;
     
    
    
    return 0;
}
