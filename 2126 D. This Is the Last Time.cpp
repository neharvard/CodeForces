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
    ll n, k, l, r, x;
    cin>>n>>k;

    vector<pair<pair<ll,ll>, ll>>vp;
    for(ll i=1; i<=n; i++)
    {
        cin>>l>>r>>x;
        vp.pb({{l,r}, x});
    }
    sort(all(vp));

    ll ans = k;
    for(auto &it: vp)
    {
        auto &key = it.ff;
        ll val = it.ss;
        ///  cout<<"l: "<<key.ff<<" r: "<<key.ss<<" x: "<<val<<endl;

        if(ans >= key.ff && ans <= key.ss)
        {
            ans = max(ans, val);
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
