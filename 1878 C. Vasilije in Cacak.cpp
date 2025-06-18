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
    ll n, k, x;
    cin>>n>>k>>x;

    ll totalSum = n*(n+1) / 2;
    ll rem = n - k;

    ll mxSum = totalSum - (rem * (rem+1) / 2);
    ll mnSum = k*(k+1) / 2;
    /// cout<<"mx: "<<mxSum<<" mn: "<<mnSum<<endl;

    if(x >= mnSum && x <= mxSum) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

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
