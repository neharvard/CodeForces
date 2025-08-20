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

void solve()
{
    ll n,m;
    cin>>n>>m;
    vector<vector<ll>>v(n, vector<ll>(m));
    unordered_map<ll,ll>adj;


    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<m; j++)
        {
            cin>>v[i][j];
            adj[v[i][j]] = 1;
        }
    }



    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<m; j++)
        {
            ll cnt = 0;

            /// right
            if(j+1 < m && v[i][j] == v[i][j+1]) cnt++;
            ///down
            if(i+1 < n && v[i][j] == v[i+1][j]) cnt++;

            /// left
            if(j>0 && v[i][j] == v[i][j-1]) cnt++;

            /// up
            if(i>0 && v[i][j] == v[i-1][j]) cnt++;


            ///cout<<"v: "<<v[i][j]<<" adj: "<<adj[v[i][j]]<<" cnt: "<<cnt<<endl;
            if(cnt != 0) adj[v[i][j]] = 2;
        }
    }

    ///for(auto &it : adj)cout<<it.ff<<sp<<it.ss<<endl;

    ll ans = 0, mx = INT_MIN;
    for(auto &it : adj)
    {
        ans += it.ss;
        mx = max(mx, it.ss);
    }
    ///cout<<"mx: "<<mx<<endl;

    cout<<ans-mx<<endl;
}
/*
5 4
1 4 3 2
1 4 3 5
6 6 3 5
1 6 3 5
3 3 5 5
*/

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
