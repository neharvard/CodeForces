#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastt ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sp " "
#define pb push_back
#define all(x) x.begin(),x.end()
#define ff first
#define ss second
#define nl  "\n"

/// TC: O(nlogn), SC: O(n)
void solve()
{
    ll n;
    cin>>n;

    vector<ll>v(n);
    for(ll i=0; i<n; i++) cin>>v[i];

    set<ll>s1,s2;
    s1.insert(v[0]);

    ll cnt = 0, ans = 1;
    ll sz = s1.size();
    for(ll i=1; i<n; i++)  /// O(n)
    {
        /// cout<<"sz: "<<sz<<endl;
        if(s1.find(v[i]) != s1.end() && s2.find(v[i]) == s2.end()) cnt++;   /// O(logn)
        s2.insert(v[i]);   /// O(logn)

        if(cnt == sz)
        {
            /// cout<<"s2 "<<s2.size()<<endl;
            ans++;
            s1.clear();
            swap(s1, s2);
            cnt = 0;
            sz = s1.size();
        }
    }

    cout<<ans<<endl;

    /// Test Case:  1 2 3 1 2 2 2 (ans = 2)
}

int main()
{
    ll t = 1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
