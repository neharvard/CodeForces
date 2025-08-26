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

/// TC: O(n*m + nlogn),  SC: O(n*m)
void solve()
{
    ll n, m;
    cin>>n>>m;

    vector<vector<ll>>v(n, vector<ll>(m));
    vector<pair<ll,ll>>vp;

    for(ll i=0; i<n; i++)
    {
        ll sum = 0;
        for(ll j=0; j<m; j++)
        {
            cin>>v[i][j];
            sum += v[i][j];
        }
        ///cout<<"sum: "<<sum<<" i: "<<i<<endl;
        vp.pb({sum, i});
    }

    sort(begin(vp), end(vp), greater<pair<ll,ll>>());
    ///for(auto &it : vp)cout<<it.ff<<sp<<it.ss<<endl; cout<<endl;

    ll ans = 0, prevSum = 0;
    for(auto &it: vp)
    {
        ll i = it.ss;
        for(ll j=0; j<m; j++)
        {
            ans += prevSum + v[i][j];
            prevSum += v[i][j];
            /// cout<<"v: "<<v[i][j]<<" ans: "<<ans<<" prev: "<<prevSum<<endl;
        }
    }

    cout<<ans<<endl;
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
