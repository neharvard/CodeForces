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

    ll ans = INT_MIN, cnt = 0;
    for(ll i=0; i<n-1; i++)
    {
        if(s[i] == s[i+1]) cnt++;
        else
        {
            cnt++;
            ans = max(ans, cnt);
            cnt = 0;
        }
    }

    cnt++;
    ans = max(ans, cnt);
    cout<<ans+1<<endl;
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
