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

    ll op = 3 + (n-3)*2;
    cout<<op<<endl;

    cout<<1<<sp<<1<<sp<<n<<endl;
    cout<<2<<sp<<1<<sp<<n-1<<endl;

    for(ll i=3, j=2; i<n; i++,j++)
    {
        cout<<i<<sp<<1<<sp<<n-j<<endl;
        cout<<i<<sp<<n-j+1<<sp<<n<<endl;
    }

    cout<<n<<sp<<2<<sp<<n<<endl;

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
