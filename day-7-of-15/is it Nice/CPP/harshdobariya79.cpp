
// url: https://www.hackerrank.com/contests/day-7-of-15/challenges/is-it-nice

#include <cmath>
#include <cstdio>
#include <vector>
#include <climits>
#include <iostream>
#include <algorithm>
using namespace std;

int check(vector<int> &a,int start,int end){
    for(int i=start;i<end;i++){
        for(int j=i+1;j<end;j++){
            if((a[i]&a[j])!=0){
         
                return -1;
            }
        }
    }
 
    return (end-start);
}


int main() {
    int n;
    cin>>n;
    
    vector<int> a(n);
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    } 
    
    int ans = 1;
    
    
    for(int i=0;i<n;i++){
        for(int j = i+1;j<n;j++){
            int temp = check(a,i,j+1);
           if(temp > ans){
             ans = temp;
           } 
        }
    }
    
    cout<<ans<<endl;
    
    return 0;
}
