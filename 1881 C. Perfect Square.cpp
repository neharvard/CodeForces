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

/// Observation , TC: O(n), SC: O(1)
void solve()
{
    ll n;
    cin>>n;

    vector<string>v(n);
    for(ll i=0; i<n; i++) cin>>v[i];

    ll ans = 0;
    for(ll i=0; i<n/2; i++)
    {
        for(ll j=0; j<n/2; j++)
        {
            /// Rotating the grid, compare the 4 points which is considered for rotating
            vector<ll>res;
            res.pb(v[i][j] - 'a'); /// for getting aschi value subtract 'a'
            res.pb(v[j][n-1-i] - 'a');
            res.pb(v[n-1-i][n-1-j] - 'a');
            res.pb(v[n-1-j][i] - 'a');

            sort(all(res)); // size is 4
            for(ll k = 0; k<3; k++) ans += res[3] - res[k];
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
