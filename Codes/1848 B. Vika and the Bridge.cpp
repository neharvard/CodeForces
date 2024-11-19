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
    ll n, k, ans = INT_MAX;
    cin>>n>>k;

    vector<ll>v(n+1);
    map<ll, vector<ll> > mp;

    for(ll i=1; i<=n; i++)
    {
        cin>>v[i];
        mp[v[i]].pb(i);
    }

    for(ll i=1; i<=k; i++) mp[i].pb(n+1);

    for(auto &it : mp)
    {
       /// cout<<"it: "<<it.ff<<endl;
        ll prevIdx = 0, mx1 = 0, mx2 = 0; // mx1 = first max element, mx2 = second max element
        for(auto &el : it.ss)
        {
            /// cout<<"el: "<<el<<" precv: "<<prevIdx<<endl;

            ll diff = el - prevIdx - 1;

            if(diff >= mx1 && mx1 >= mx2)
            {
                mx2 = mx1;
                mx1 = diff;
            }
            else if(diff > mx2) mx2 = diff;


            ///  cout<<"diff: "<<diff<<" mx1: "<<mx1<<" mx2: "<<mx2<<endl;
            prevIdx = el;
        }

        ans = min(ans, max(mx2, mx1/2));

        ///   cout<<"mx11: "<<mx1<<" mx2: "<<mx2<<" ans: "<<ans<<endl<<endl;
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

//10 5
//1 3 1 1 2 5 3 1 2 1
