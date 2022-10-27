
// url: https://www.hackerrank.com/contests/day-13-of-15/challenges/morse-code-8-1

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <set>
using namespace std;


int main() {
    int n;
    cin>>n;
    
    set<string> result;
    
    string form[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    
    for(int i=0;i<n;i++){
        string a;
        cin>>a;
        string ans = "";
        for(int j=0;j<a.length();j++){
            ans = ans + form[a[j]-'a'];
        }
        // cout<<ans<<endl;
        result.insert(ans);
    }
    
    
    cout<<result.size()<<endl;
    
    
    return 0;
}
