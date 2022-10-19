
// url: https://www.hackerrank.com/contests/day-6-0f-15/challenges/not-again-again

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s;
    cin>>s;
    
    int flag = false;
    
    for(int i=0;s[i]!='\0';i++){
        flag = false;
        for(int j=0;s[j]!='\0';j++){
            if(i==j) continue;
            
            if(s[i]==s[j]){
                flag = true;
                break;
            } 
            
        }
        if(flag==false){
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    
    return 0;
}
