#include <bits/stdc++.h>
using namespace std;
#define int  long long
#define endl "\n"
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
 
 
 
signed main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    
    int n ; cin >> n;
    vector<int> v(n) ; 
    for(int & i : v) cin >> i;
    stack<int> st;
    vector<int> res(n, -1);
    for (int i = 0; i < n  ; i++)
    {
        while(!st.empty() && v[i] > v[st.top()])
        {
            res[st.top()] = i+1;
            st.pop();
        }
        st.push(i);
    }
    int q; cin >> q;
    while(q--){
        int x; cin >> x;
        cout << res[x-1] << endl;
    }
 
}
