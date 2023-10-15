#include <bits/stdc++.h>
using namespace std;

int fastPower(int a, int b) {
  if(b==0) return 1;
  int ans = fastPower(a,b/2);
  ans = ans * ans;
  if(b&1)
    return a * ans;
  return ans;
}

int main() 
{
    cout<<fastPower(2,8);
    return 0;
}
