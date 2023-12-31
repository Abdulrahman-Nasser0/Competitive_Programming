#include <bits/stdc++.h>
using namespace std;
#define int  long long
#define endl "\n"
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()

double nCr(double n , double r){
    if(r == 0)return 1;
    return (n / r) * nCr(n-1, r-1);
}

signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    double n, r ;cin >> n >> r;
    cout << (unsigned long long)round(nCr(n , r)) << endl;

}
