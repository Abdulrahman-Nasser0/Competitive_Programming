#include <bits/stdc++.h>
using namespace std;
#define int  long long
#define endl "\n"
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()

signed main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    
    int n ;cin >> n;
    vector<int> v(n);
    for(int i = 0  ; i < n ; i ++) {
        cin >> v[i];
    }
    int ans = LLONG_MIN, a = 0;
    for(int x : v){
        a += x;
        ans = max(ans, a);
        a = max(a, 0ll);
    }
    cout << ans << endl;
    
}
