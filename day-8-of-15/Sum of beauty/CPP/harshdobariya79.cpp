
// url: https://www.hackerrank.com/contests/day-8-of-15/challenges/sum-of-beauty

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
    
    int ans = 0;
    
    bool flag = true;
    
    for(int i=1;i<(n-1);i++){
        
        for(int j = 0;j<i;j++){
            if(a[j]>=a[i]){
                flag = false;
                break;
            }
        }
        
        for(int k = i+1;k<n;k++){
            if(a[k]<=a[i]){
                flag = false;
                break;
            }
        }
        
        if(flag==true){
            ans += 2;
            continue;
        }else{
            flag = true;
        }
        
        if(a[i-1]<a[i] && a[i+1]>a[i]){
            ans += 1;
        }
        
    }
    
    cout<<ans<<endl;
    
    return 0;
}
