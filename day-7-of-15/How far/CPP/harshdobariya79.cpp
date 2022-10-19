
// url: https://www.hackerrank.com/contests/day-7-of-15/challenges/how-far

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;


int main() {
    string s;
    cin>>s;
    
    int n = s.length();
    
    char target;
    cin>>target;
    
    int first=INT_MAX;
    
    for(int i=0;i<n;i++){
        
        if(s[i]==target){
            cout<<0<<" ";
            continue;
        }
                
        for(int j=0;j<n;j++){
            if(s[j]==target && abs(i-j)<first){
                first = abs(i-j);
            }
        }
        
        cout<<first<<" ";
     
        first = INT_MAX;
    }
    
    return 0;
}
