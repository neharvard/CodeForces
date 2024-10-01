/*
    question link: https://codeforces.com/contest/1839/problem/B
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
    ll n, a, b;
    cin>>n;
    map<ll, vector<ll>>mp;
    for(ll i=1; i<=n; i++)
    {
        cin>>a>>b;
        mp[a].pb(b);
    }

    for(auto &it : mp) sort(it.ss.begin(), it.ss.end(), greater<ll>() );

    ll cnt = 0, ans = 0, temp;
    for(auto it : mp)
    {
        ///cout<<"ff: "<<it.ff<<sp<<it.ss.size()<<endl;
        for(auto el : it.ss)
        {
            ///cout<<el<<endl;
            ans += el;
            cnt++;
            temp = cnt;
            if(mp.find(cnt) != mp.end())
            {
                /// cout<<"cnt: "<<cnt<<endl;
                ll sz = mp[cnt].size();   ///cout<<"sz:"<<sz<<endl;
                mp[cnt].clear();
                
                if(sz <= temp) cnt = temp - sz;
                else cnt = 0;
                
                if(temp == it.ff) break;
            }
        }
    }
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
