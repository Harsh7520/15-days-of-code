
// url: https://www.hackerrank.com/contests/day-12-of-15/challenges/trick-or-treat-1-7

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    
    vector<int> a(n);
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    sort(a.rbegin(),a.rend());
    
    int cost = 0;
    
    for(int i=0;i<n;i=i+3){
        cost = cost + a[i] + a[i+1];
    }
    
    cout<<cost<<endl;
    
    return 0;
}
