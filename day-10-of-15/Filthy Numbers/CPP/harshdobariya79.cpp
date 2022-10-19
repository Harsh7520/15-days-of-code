
// url: https://www.hackerrank.com/contests/day-10-of-15/challenges/filthy-numbers

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool check_ugly(int x)
{
    
    while (x % 2 == 0)
        x = x / 2;
    
    while (x % 3 == 0)
        x = x / 3;
    
    while (x % 5 == 0)
        x = x / 5;

    if (x == 1)
        return true;
    else
        return false;
}

int main() {
    int n;
    cin>>n;
    
    int i = 1,count = 1; 

    while (n > count) {
        i++;
        if (check_ugly(i)){
            count++;
        } 
    }
    
    cout<<i<<endl;
    
    return 0;
}
