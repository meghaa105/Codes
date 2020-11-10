#include <bits/stdc++.h>
using namespace std;
//https://www.codechef.com/LRNDSA01/problems/ZCO14003
const int MAX_SIZE = 500000;
typedef long long ll;
ll data[MAX_SIZE];

int main() {
  int n;
  ll maxProfit=0;
  scanf("%d",&n);
  for(int i=0; i<n; i++) {
    scanf("%lld",data+i);
  }
  sort(data, data+n);

  for(int i=0; i<n; i++) {
    maxProfit=max(maxProfit, (n-i)*data[i]);
  }

  cout << maxProfit << endl;

  return 0;
}
