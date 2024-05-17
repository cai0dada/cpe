#include "bits/stdc++.h"
using namespace std;
int main()
{ int N,Q,Kase = 0;
  while (cin >> N >> Q, N || Q)
  { int arr[N];
    for (auto&i:arr)cin >> i;
    sort(arr,arr+N);
    cout << "CASE# " << ++Kase << ":" << endl;
    int number;
    while (Q--)
    { cin >> number;
      int*FIND = lower_bound(arr,arr+N,number);
      if (*FIND == number)cout << number << " found at " << FIND - arr + 1 << endl;
      else                cout << number << " not found" << endl;
    }
  }
}