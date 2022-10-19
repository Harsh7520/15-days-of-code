
// url: https://www.hackerrank.com/contests/day-9-of-15/challenges/7th-base

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void convert(int n)
{
    int ans[32];
  
    int flag = false;
    
    if(n<0) flag = true;
    
    n = abs(n);
    
    int i = 0;
    while (n > 0) {

        ans[i] = n % 7;
        n = n / 7;
        i++;
    }
    
    if(flag) cout<<"-";
  
    for (int j = i - 1; j >= 0; j--)
        printf("%d", ans[j]);
}

int main() {
    
    int n;
    cin>>n;
    
    convert(n);
    
    return 0;
}
