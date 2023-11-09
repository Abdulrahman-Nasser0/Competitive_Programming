#include <bits/stdc++.h>
using namespace std;
#define int  long long
#define endl "\n"
#define allr(v) v.rbegin(), v.rend()

signed main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    
    int t ;cin >> t;
    while(t--){
        int n ; cin >> n;
        vector<int> v(n);
        multiset<int> st;
        for(int i = 0 ; i < n ; i++){
            cin >> v[i];
            st.insert(v[i]);
        }    
        sort(allr(v));
        vector<int> res;
        int gcd = v[0];
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            int mx = 0;
            for(auto j : st){
                if(__gcd(gcd, j) > mx){
                    mx = __gcd(gcd, j);
                    x = j;
                }
            }
            res.push_back(x);
////////////////////////////////////////////////////////////////////
            auto range = st.equal_range(x);
            if (range.first != range.second) {
                // Erase one occurrence of the element
                st.erase(range.first);
            }
////////////////////////////////////////////////////////////////////
            gcd = mx;
        }

        for(auto i : res) cout << i << " " ;
        cout << endl;
        
    }
}
