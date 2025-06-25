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
    ll n,k,x;
    cin>>n>>k>>x;

    vector<ll>v(n);
    for(ll i=0; i<n; i++) cin>>v[i];
    sort(all(v));

    ll diff = 0, ans = 1;
    vector<ll>need;
    for(ll i=1; i<n; i++)
    {
        diff = v[i] - v[i-1];
        /// cout<<"i: "<<v[i]<<" num: "<<v[i-1]<<" diff:"<<diff<<" ans:"<<ans<<" k: "<<k<<endl;

        if(diff > x)
        {
            ans++;
            need.pb((diff -1)/x);
        }
    }

    sort(all(need));
    for(auto &it : need)
    {
        ///cout<<it<<endl;
        if(k >= it)
        {
            k -= it;
            ans--;
        }
        else break;
    }

    cout<<ans<<endl;
}

int main()
{
    fastt;
    ll  t = 1;
    ///cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
