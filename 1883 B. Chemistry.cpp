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
    ll n, k;
    string s;
    cin>>n>>k>>s;

    unordered_map<char, ll> freq;
    for(ll i=0; i<n; i++)
    {
        freq[s[i]]++;
    }

    ll odd = 0;
    for(auto &it : freq)
    {
        if(it.ss % 2) odd++;
    }

    if(odd > (k + 1)) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
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
