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
    ll n;
    string a, b;
    cin>>n>>a>>b;

    ll one = 0, zero = 0;
    vector< pair< ll, ll> > vp;

    for(ll i=0, j = 0; i<n; i++)
    {
        if(a[i] == '1') one++;
        else zero++;

        if(one == zero)
        {
            vp.pb({j, i});
            j = i+1;
        }
    }

    for(auto &it : vp)
    {
        ll start = it.ff;
        ll ending = it.ss;

        if(a[start] == b[start]) continue;
        for(ll i = start; i<=ending; i++)
        {
            if(a[i] == '0') a[i] = '1';
            else a[i] = '0';
        }
    }

    for(ll i=0; i<n; i++)
    {
        if(a[i] != b[i])
        {
            cout<<"NO"<<endl;
            return;
        }
    }

    cout<<"YES"<<endl;
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
