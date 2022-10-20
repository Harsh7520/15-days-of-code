
// url: https://www.hackerrank.com/contests/day-11-of-15/challenges/balloon-hunt

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    vector<int> a(5,0);
    
    string s;
    cin>>s;
    
    for(int i=0;s[i]!='\0';i++){
        switch(s[i]){
            case 'b' : a[0]++;
                       break;
            case 'a' : a[1]++;
                       break;
            case 'l' : a[2]++;
                       break;
            case 'o' : a[3]++;
                       break;
            case 'n' : a[4]++;
                       break;
        }
    }
    
    a[2] = a[2]/2;
    
    a[3] = a[3]/2;
    
    sort(a.begin(),a.end());
    
    cout<<a[0]<<endl;
    
    return 0;
}
