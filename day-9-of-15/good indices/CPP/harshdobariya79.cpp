
// url: https://www.hackerrank.com/contests/day-9-of-15/challenges/find-good-indices

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,k;
    
    cin>>n>>k;
    
    vector<int> a(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    bool flag = false;
    
    for(int i=k;i<n-k;i++){
        
        flag = false;
        
        for(int j=i-k;j<(i-1);j++){
            if(a[j]<a[j+1]){
                flag = true;
                break;
            }
        }
        
        for(int j=i+1;j<i+k;j++){
            if(a[j]>a[j+1]){
                flag = true;
                break;
            }
        }
        
        if(flag) continue;
        
        cout<<i<<" ";
        
        
    }
    
    return 0;
}
