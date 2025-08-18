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

    for(ll i=0; i<n-1; i++)
    {
        if(i%2 == 0) cout<<"-1"<<sp;
        else cout<<3<<sp;
    }

    if(n%2) cout<<-1<<endl;
    else cout<<2<<endl;
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
