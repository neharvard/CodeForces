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

/// Observation , TC: O(nlogn), SC: O(1)
void solve()
{
    ll n;
    cin>>n;
    vector<ll>v(n);

    for(ll i=0; i<n; i++) cin>>v[i];
    sort(all(v));

    if(v[0] != v[1])
    {
        cout<<"YES"<<endl;
        return;
    }

    for(ll i=1; i<n; i++)
    {
        if(v[i] % v[0] != 0)
        {
            cout<<"YES"<<endl;
            return;
        }
    }

    cout<<"NO"<<endl;

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
