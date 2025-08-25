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

// TC: O(n)
// SC: O(n)
void solve()
{

    ll n, x;
    cin>>n;

    map<ll, ll>freq;
    for(ll i=0; i<n; i++)
    {
        cin>>x;
        freq[x]++;
    }

    for(auto &it : freq)
    {
        ///cout<<"ff: "<<it.ff<<" ss: "<<it.ss<<endl;
        if(it.ss >= 2)
        {
            freq[it.ff + 1] += it.ss - 2;
        }
        if(it.ss == 1)
        {
            cout<<"NO"<<endl;
            return;
        }
    }

    cout<<"YES"<<endl;
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
