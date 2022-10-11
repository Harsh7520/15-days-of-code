#include <bits/stdc++.h>
using namespace std;

int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int n;
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++) cin >> arr[i];

  int overallMax = arr[0], sum = arr[0];

  for (int i = 1; i < n; i++) {
    sum = max(arr[i], arr[i] + sum);
    overallMax = max(sum, overallMax);
  }

  cout << overallMax << endl;

  return 0;
}
