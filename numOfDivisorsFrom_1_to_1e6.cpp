#include <bits/stdc++.h>
using namespace std;
#define int  long long
#define endl "\n"
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()

vector<int>res(1e6 + 1);
void div()
{
    for (int i = 1; i <= 1e6; ++i)
    {
        for (int j = i; j <= 1e6; j+= i)
            res[j]++;
    }
}

void solve() {
    int a , b , c;
    cin >> a >> b >> c;
    int sum = 0;
    int m = 1073741824;
    div();
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            for (int k = 1; k <= c; k++)
            {
                sum += res[i*j*k];
            }
            
        }
        
    }
    cout << sum%m << endl;
    
}


signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
}
