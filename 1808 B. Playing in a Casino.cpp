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
    vector<vector<ll>>v(n, vector<ll>(m,0));
    vector<ll>result(m, 0);

    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<m; j++)
        {
            cin>>v[i][j];
            result[j] += v[i][j];
        }
    }

    for(ll j=0; j<m; j++)
    {
        vector<ll>temp(n);
        for(ll i=0; i<n; i++)
        {
            temp[i] = v[i][j];
        }
        sort(all(temp));
        for(ll i=0; i<n; i++) v[i][j] = temp[i];
    }

    /*
    for(ll i=0; i<n; i++){
       for(ll j=0; j<m; j++) cout<<v[i][j]<<sp; cout<<endl;
    }
    for(auto &it : result) cout<<it<<sp; cout<<endl;
       */

    ll ans = 0, cnt = n-1;
    for(ll i=0; i<n-1; i++)
    {
        ll sum = 0;
        for(ll j=0; j<m; j++)
        {
            result[j] -= v[i][j];
            sum += result[j] - (v[i][j]*cnt);
        }
        /// for(auto &it : result) cout<<it<<sp; cout<<endl;
        cnt--;
        /// cout<<"sum: "<<sum<<endl;
        ans += sum;
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
