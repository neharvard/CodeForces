/*
 question link: https://codeforces.com/contest/1905/problem/B
*/

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
    ll n, u, v;
    cin>>n;

    /// Approach : find the leaves of the tree, then divide it by 2 & took the ceil value;
    /// how to find the leaves of a tree: the freq of vertices = 1 are the leaf

    unordered_map<ll, ll> freq;
    for(ll i=1; i<n; i++)
    {
        cin>>u>>v;
        freq[u]++;
        freq[v]++;
    }

    ll cnt = 0;
    for(auto &it : freq)
    {
        if(freq[it.ff] == 1) cnt++;
    }

    //cout<<"cnt: "<<cnt<<endl;
    /// ll ans = ceil(cnt/2);
    ll ans = (cnt+2-1) / 2;

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
