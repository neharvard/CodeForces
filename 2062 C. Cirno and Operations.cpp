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

/// TC: O(n^2),  SC: O(1)
void solve()
{
    ll n,ans = 0;;
    cin>>n;

    vector<ll>v(n);
    for(ll i=0; i<n; i++)
    {
        cin>>v[i];
        ans += v[i];
    }

    while(n>1)
    {
        ll sum = 0;
        for(ll i=0; i<n-1; i++)
        {
            v[i] = v[i+1] - v[i];
        }
        for(ll i=0; i<n-1; i++)
        {
            ///cout<<v[i]<<sp;
            sum += v[i];
        }
        ans = max(ans, abs(sum));
        n--;
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
