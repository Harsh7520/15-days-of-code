
// url: https://www.hackerrank.com/contests/day-11-of-15/challenges/array-sub-array

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
    
    int s=0,e=0,max = 0,temp = 1;
    
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                temp = temp * a[k];
            }
            
            if(temp>max){
                max = temp;
                s = i;
                e = j;
            }
            temp = 1;
        }
    }
    
    cout<<max<<endl;
    
    return 0;
}
