
// url: https://www.hackerrank.com/contests/day-10-of-15/challenges/one-among-many

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

bool check(int x){
    
    map<int,int> mp;
    
    
    while(x>0){
        int num = x%10;
        
        auto it = mp.find(num);
            if(it == mp.end()){
                mp.insert({ num, 1 });
            }else{
                return false;
            }
        x = x/10;
    }
    
    return true;
    
}

int main() {
    int n;
    cin>>n;
    
    if (n > 10){
        cout<<0<<endl;
        return 0;
    } 
    
    int criteria = 1;
    
    for(int i=0;i<n;i++){
        criteria = criteria * 10;
    }
    
    
    int count = 0;
    
    for(int i=0;i<criteria;i++){
        if(check(i)){
            count++;
        }
    }
    
    cout<<count<<endl;
    
    
    
    return 0;
}
