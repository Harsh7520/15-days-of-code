
// url: https://www.hackerrank.com/contests/day-7-of-15/challenges/morphology#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s1,s2;
    cin>>s1>>s2;
    
    if(s1.length()!=s2.length()){
        cout<<"false"<<endl;
        return 0;
    }
    
    int n = s1.length();
    
    bool flag = false;
    
    for(int i=0;i<n;i++){
        s1 = s1.substr(1,(n-1)) + s1[0];
        
        if(s1==s2){
            flag = true;
            break;
        }
    }
    
    if(flag==true){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    
    return 0;
}


