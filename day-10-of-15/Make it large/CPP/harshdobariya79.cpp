
// url: https://www.hackerrank.com/contests/day-10-of-15/challenges/make-it-large-1

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool sorter(string a,string b){
    return a+b>b+a;
}

int main() {
    int n;
    cin>>n;
    
    vector<string> a(n);
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    sort(a.begin(),a.end(),sorter);
    
    string ans = "";
    
    for(int i=0;i<n;i++){
        ans += a[i];
    }
    
    cout<<ans<<endl;
    
    return 0;
}
