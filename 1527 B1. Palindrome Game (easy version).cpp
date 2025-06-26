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
    string s;
    cin>>n>>s;

    ll zeroCnt = 0;
    for(ll i=0; i<n; i++)
    {
        if(s[i] == '0') zeroCnt++;
    }

    ///cout<<"cnt: "<<zeroCnt<<endl;

    string ans = "BOB";
    if(zeroCnt != 1 && zeroCnt % 2) ans = "ALICE";
    else if(zeroCnt == 0) ans = "DRAW";

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
