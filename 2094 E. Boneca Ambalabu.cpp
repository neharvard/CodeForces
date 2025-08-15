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
    cin>>n;
    vector<ll>v(n);
    for(ll i=0; i<n; i++) cin>>v[i];

    /// TC: O(lonN), SC: O(31)
    ll freq[31] = {0};
    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<31; j++)
        {
            ///  check if ith Bit is set or not
            if((1<<j) & v[i]) freq[j]++;
        }
    }
    //for(auto &it : freq)cout<<it<<sp; cout<<endl;

    ll ans = 0;
    for(ll i=0; i<n; i++)
    {
        ll sum = 0;
        for(ll j=0; j<31; j++)
        {
            ///cout<<"vi: "<<v[i]<<" setBit: "<<((1<<j) & v[i])<<" freq: "<<freq[j]<<endl;
            if((1<<j) & v[i]) sum += (1<<j) * (n - freq[j]);
            else sum += (1<<j) * freq[j];
        }
        ///cout<<"sum: "<<sum<<endl;
        ans = max(ans, sum);
    }

    cout<<ans<<endl;


    /// BruteForce, TC: O(n^2), SC: O(1);  TLE
    /*
    ll sum = 0;
    for(ll i=0; i<n; i++)
    {
        ll temp = 0;
        for(ll j=0; j<n; j++)
        {
            cout<<"i: "<<v[i]<<" j: "<<v[j]<<" xor: "<<(v[i] ^ v[j])<<endl;
            temp += (v[j] ^ v[i]);
        }
        cout<<"temp: "<<temp<<endl;
        sum = max(sum, temp);
    }
    cout<<sum<<endl;
    */

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
