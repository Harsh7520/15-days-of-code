
// url: https://www.hackerrank.com/contests/day-9-of-15/challenges/sort-array-by-frequency

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    int n;
    cin>>n;
    
    vector<int> b(202,0);
    
    vector<int> a(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
        b[a[i]+100]++;
    } 
    
    bool flag = true;
    
    int num=10000,occur=10000;
    
    while(true){
        
        flag = true;
        occur = 10000;
        
        for(int i=0;i<202;i++){
            if(b[i]<=occur && b[i]>0){
                occur = b[i];
                num = i-100;
                flag = false;
            }
        }
        
        b[num+100] = 0;
        
        if(flag==true) break;
        
        for(int i=0;i<occur;i++){
            cout<<num<<" ";
        }
        
    }   
    
    return 0;
}
