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

    ll oneCnt = 0;
    for(ll i=0; i<n; i++)
    {
        if(s[i] == '1') oneCnt++;
    }

    if((2*k) > n) cout<<"Alice"<<endl;

    else
    {
        if(oneCnt <= k) cout<<"Alice"<<endl;
        else cout<<"Bob"<<endl;
    }

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
