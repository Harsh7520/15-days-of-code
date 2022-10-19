
// url: https://www.hackerrank.com/contests/day-5-0f-15/challenges/you-again

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    string s;
    cin>>s;
    map<char,int> mp;
    
    for(int i=0;s[i]!='\0';i++){
        auto it = mp.find(s[i]);
            if(it == mp.end()){
                mp.insert({ s[i], 1 });
            }else{
                cout<<it->first<<endl;
                return 0;
            }
    }
    
    return 0;
}
