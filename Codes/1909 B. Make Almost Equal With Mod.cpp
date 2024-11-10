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

// BruteForce with optimization
// TC: O(N * LOG(K))
// SC: O(1)
void solve()
{
    ll n;
    cin>>n;
    vector<ll>v(n);


    for(ll i=0; i<n; i++)
    {
        cin>>v[i];
    }

    ll ans;
    for(ll i=2; i<=1e18; i *= 2)
    {
        // cout<<"i: "<<i<<endl;
        set<ll>st;

        for(ll j=0; j<n; j++)
        {
            ll rem = v[j] % i;
            st.insert(rem);

            if(st.size() > 2) break;
        }

        if(st.size() == 2)
        {
            ans = i;
            break;
        }
    }

    cout<<ans<<endl;

}

int main()
{
    fastt;
    ll  t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
