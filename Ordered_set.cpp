#include <bits/stdc++.h>
using namespace std;
// #define int  long long
#define endl "\n"
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<>, rb_tree_tag,tree_order_statistics_node_update>// set
typedef tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update> ordered_multiset;
#define ll long long
void myerase(ordered_set &t, int v){
    int rank = t.order_of_key(v);//Number of elements that are less than v in t
    ordered_set::iterator it = t.find_by_order(rank); //Iterator that points to the (rank+1)th element in t
    t.erase(it);
}
signed main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    
    int n ;cin >> n;
    vector<int> a(n), b(n); 
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int  i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    ordered_multiset s;
    long long ans  = 0;
    for(int i = 0; i < n ; ++i ) {
		ans += s.order_of_key(b[i]);
        	s.insert(a[i]);
	}
    cout << ans << endl;
}



/*
#### old version to solve pair of topics

#include <bits/stdc++.h>
using namespace std;
// #define int  long long
#define endl "\n"
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()


#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<>, rb_tree_tag,tree_order_statistics_node_update>// set

typedef tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update> ordered_multiset;
#define ll long long
void myerase(ordered_set &t, int v){
    int rank = t.order_of_key(v);//Number of elements that are less than v in t
    ordered_set::iterator it = t.find_by_order(rank); //Iterator that points to the (rank+1)th element in t
    t.erase(it);
}

signed main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    
    int n ;cin >> n;
    vector<int> a(n), b(n); 
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> m(n);
    for (int  i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    ordered_multiset s;
    long long ans  = 0;
    for(int i = 0; i < n ; ++i ) {
		ans += s.order_of_key(a[i]-b[i]);
        s.insert(b[i]-a[i]);
	}
    cout << ans << endl;
    
}
*/





/*
#### same idea with lower bound
but use the set, it's better

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
    vector<int> a(n), b(n); 
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    vector<int> m(n);
    for (int  i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int ans  = 0;
    vector<int> v;
    for(int i = 0; i < n ; ++i ) {
        ans += (int)(lower_bound(v.begin(), v.end(), a[i]) - v.begin());
        v.push_back(b[i]);
	}
    cout << ans << endl;
    
}

*/
