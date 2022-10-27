
// url: https://www.hackerrank.com/contests/day-13-of-15/challenges/integer-to-english-word-1

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

using namespace std;

static string one_to_twenty[] ={"Zero","One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine",
                 "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", 
                 "Seventeen", "Eighteen", "Nineteen"};
                 
static string twenty_to_hundred[]={"","", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety" };


static string thousand_plus[]={"Hundred", "Thousand", "Million", "Billion" };


string below_hundred(long long int num) {
    string result;

    if (num == 0) {
        return result;
    }else if (num < 20) {
        return one_to_twenty[num];
    } else if (num < 100) {
        result = twenty_to_hundred [num/10];
        if (num%10 > 0) { 
            result += " " + one_to_twenty[num%10];
        }
    }else {
        result = one_to_twenty[num/100] + " " + thousand_plus[0];
        if ( num % 100 > 0 ) {
            result += " " + below_hundred( num % 100 );
        }
    }
    return result;
}

string number_to_words(int num) {

    if (num ==0 ) return one_to_twenty[num];

    vector<string> ans;
    for( ;num > 0; num/=1000 ) {
        ans.push_back( below_hundred(num % 1000) );
    }

    string result=ans[0];
    for (int i=1; i<ans.size(); i++){
        if (ans[i].size() > 0 ){
            if ( result.size() > 0 ) {
                result = ans[i] + " " + thousand_plus[i] + " " + result; 
            } else {
                result = ans[i] + " " + thousand_plus[i]; 
            }
        }

    }
    return result;
}

int main() 
{
      
      long long int num;
      cin>>num;
      cout << number_to_words(num) <<  endl;   
    
    return 0;
}
