
// url: https://www.hackerrank.com/contests/day-6-0f-15/challenges/not-again

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    
    int temp;
    
    vector<int> a(2005,0);
    
    for(int i=0;i<n;i++){
        cin>>temp;
        
        a[temp+1000]++;
        
    } 
    
    
    
    sort(a.rbegin(),a.rend());
    
    
    
    for(int i=1;(a[i]!=0 && i!=2005);i++){
        if(a[i]==a[i-1]){
            cout<<"false"<<endl;
            return 0;
        }
    }
    
    if(a[1]==0){
        cout<<"true"<<endl;
        return 0;
    }
    
    cout<<"true"<<endl;
    
    
    
    return 0;
}
