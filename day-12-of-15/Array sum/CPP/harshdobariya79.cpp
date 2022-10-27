
// url: https://www.hackerrank.com/contests/day-12-of-15/challenges/array-sum-31-1

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,k;
    cin>>n;
    
    vector<int> a(n);
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    cin>>k;
    
    int temp = 0;
    
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int l=i;l<=j;l++){
                temp = temp + a[l];
            }
            
            if(temp%k==0){
                cout<<"true"<<endl;
                return 0;
            }
            temp  = 0;
        }
    }
    
    cout<<"false"<<endl;  
    return 0;
}
