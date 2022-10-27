
// url: https://www.hackerrank.com/contests/day-13-of-15/challenges/combinations-12-2

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
    
string str[] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void two(int a,int b){
     
    for(auto i=0;i<str[a].length();i++){
        string ans = "";
        ans = ans + str[a].substr(i,1);
        for(auto j=0;j<str[b].length();j++){
            ans = ans + str[b].substr(j,1);
            cout<<ans<<" ";
            ans.pop_back();
        }
    }
}

void three(int a,int b,int c){
        
    for(auto i=0;i<str[a].length();i++){
        string ans = "";
        ans = ans + str[a].substr(i,1);
        for(auto j=0;j<str[b].length();j++){
            ans = ans + str[b].substr(j,1);
            for(auto k=0;k<str[c].length();k++){
                ans = ans + str[c].substr(k,1);
                cout<<ans<<" ";
                ans.pop_back();
            }
            ans.pop_back();
        }
    }
}

void four(int a,int b,int c,int d){
        
    for(auto i=0;i<str[a].length();i++){
        string ans = "";
        ans = ans + str[a].substr(i,1);
        for(auto j=0;j<str[b].length();j++){
            ans = ans + str[b].substr(j,1);
            for(auto k=0;k<str[c].length();k++){
                ans = ans + str[c].substr(k,1);
                for(auto l=0;l<str[d].length();l++){
                    ans = ans + str[d].substr(l,1);
                    cout<<ans<<" ";
                    ans.pop_back();
            }
                ans.pop_back();
            }
            ans.pop_back();
        }
    }
}

int main() {
    string inp;
    cin>>inp;
    
    int n = stoi(inp);
    
    if(inp.length()==1){
        
        for(auto i=0;i<str[n].length();i++){
            cout<<str[n][i]<<" ";
        }
        
    }
    else if(inp.length()==2){

        int b = n%10;
        int a = n/10;

        two(a,b);
        
    }else if(inp.length()==3){
        
        int c = n%10;
        n = n/10;
        int b = n%10;
        int a = n/10;

        three(a,b,c);
        
    }else{
        
        int d = n%10;
        n = n/10;
        int c = n%10;
        n = n/10;
        int b = n%10;
        int a = n/10;
        
        four(a,b,c,d);
    }
        
    return 0;
}
