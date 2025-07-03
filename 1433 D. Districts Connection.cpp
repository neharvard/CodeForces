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
    ll n, x;
    cin>>n;

    unordered_map<ll, vector<ll>>ump;
    ll mxFreq = INT_MIN, mxNum = INT_MIN;

    for(ll i=0; i<n; i++)
    {
        cin>>x;
        ump[x].pb(i+1);

        ll sz = ump[x].size();
        if(mxFreq < sz)
        {
            mxFreq = sz;
            mxNum = x;
        }
    }

    /// cout<<"NUM: "<<mxNum<<endl;

    if(ump.size() == 1)
    {
        cout<<"NO"<<endl;
        return;
    }

    cout<<"YES"<<endl;
    ll num;

    for(auto &it : ump)
    {
        /// cout<<"ff: "<<it.ff<<endl;
        if(it.ff == mxNum) continue;
        num = it.ff;

        for(ll &idx : it.ss)
        {
            /// cout<<"id: "<<idx<<endl;
            cout<<ump[mxNum][0]<<sp<<idx<<endl;
        }
    }

    /// cout<<"num: "<<num<<endl;
    for(ll i=1; i<ump[mxNum].size(); i++) cout<<ump[num][0]<<sp<<ump[mxNum][i]<<endl;

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
