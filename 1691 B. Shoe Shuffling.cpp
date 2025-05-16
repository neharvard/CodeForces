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
    vector<ll>vec(n+1);
    for(ll i=1; i<=n; i++) cin>>vec[i];

    vector<ll>ans;
    ll  j = 1,flg = 0;
    for(ll i=2; i<=n; i++)
    {
        if(vec[i] == vec[i-1])
        {
            flg++;
            ans.pb(i);
        }
        else
        {
            if(flg == 0)
            {
                break;
            }
            ans.pb(j);
            j = i;
            flg = 0;
        }
    }
    ans.pb(j);

    if(flg == 0)
    {
        cout<<"-1"<<endl;
        return;
    }

    for(auto &it : ans) cout<<it<<sp;
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
