
// url: https://www.hackerrank.com/contests/day-6-0f-15/challenges/equality-in-array

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
    vector<int> b(n/2);
    
    
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    } 
    
    if(n==1){
        cout<<a[0]<<endl;
        return 0;
    }
    
    while(n!=1){
    
        for(int i=0;i<(n/2);i++){
            if(i%2==0){
                b[i] = min(a[2 * i], a[2 * i + 1]);
            }else{
                b[i] = max(a[2 * i], a[2 * i + 1]);
            }
        }

        for(int i=0;i<(n/2);i++){
            a[i] = b[i];
        }
        
        n = n/2;
    
    }
    
    cout<<a[0]<<endl;
    
    
    return 0;
}
