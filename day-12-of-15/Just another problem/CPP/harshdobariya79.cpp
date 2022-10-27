
// url: https://www.hackerrank.com/contests/day-12-of-15/challenges/just-another-problem-1

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    vector<int> a(210,0);
    int n,k;
    cin>>n>>k;
    
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        a[temp+104]++;
    }
    
    
    for(int i=0;i<k;i++){
        int key,occurance=0;
        for(int j=0;j<200;j++){
            if(a[j]>occurance){
                occurance = a[j];
                key = j-104;
            }
        }
        cout<<key<<" ";
        occurance = 0;
        a[key+104] = 0;
    }
    
    return 0;
}
