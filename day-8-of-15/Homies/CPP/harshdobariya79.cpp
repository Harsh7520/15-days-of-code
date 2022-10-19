
// url: https://www.hackerrank.com/contests/day-8-of-15/challenges/homies

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool check(string str){
    vector<int> s(150,0);
    
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    
    for(int i=0;str[i]!='\0';i++){
        s[str[i]]++;
    }
    
    unsigned long int temp = s['q'] + s['w'] + s['e'] + s['r'] + s['t'] + s['y'] + s['u'] + s['i'] + s['o'] + s['p'];
    
    if(temp!=0){
        if(temp==str.length()) return true;
    }
    
    temp = s['a'] + s['s'] + s['d'] + s['f'] + s['g'] + s['h'] + s['j'] + s['k'] + s['l'];
    
    if(temp!=0){
        if(temp==str.length()) return true;
    }
    
    temp = s['z'] + s['x'] + s['c'] + s['v'] + s['b'] + s['n'] + s['m'];
    
    if(temp!=0){
        if(temp==str.length()) return true;
    }
    
    return false;
    
}

int main() {
    
    
    int n;
    cin>>n;
    
    vector<string> v(n);
    
    for(int i=0;i<n;i++){
        cin>>v[i];
        bool decide = check(v[i]);
        
        if(decide==true)
        cout<<v[i]<<" ";
    }
    
    
    return 0;
    
}
