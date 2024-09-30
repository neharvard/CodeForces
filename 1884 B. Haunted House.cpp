/*
 question link: https://codeforces.com/contest/1884/problem/B
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
    ll n;
    string s;
    cin>>n>>s;
    vector<ll>ans(n, -1), temp;

    reverse(all(s));

    ll cntOne = 0;
    for(ll i=0; i<n; i++)
    {
        if(s[i] == '0')
        {
            temp.pb(cntOne);
            /// temp.pb(i-temp.size()); // count of one before that zero
        }
        else cntOne++;
    }

    ///for(auto it : temp) cout<<it<<sp; cout<<endl;

    for(ll i=0; i<temp.size(); i++)
    {
        if(i == 0) ans[i] = temp[i];
        else ans[i] = temp[i] + ans[i-1];
    }

    for(auto it : ans) cout<<it<<sp;
    cout<<endl;

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
