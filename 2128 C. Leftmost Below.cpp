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
    vector<ll>v(n);
    for(ll i=0; i<n; i++) cin>>v[i];

    bool flg = true;
    ll mn = v[0];
    for(ll i=1; i<n; i++)
    {
        ll x1, x2;
        if(v[i] % 2)
        {
            x1 = v[i]/2;
            x2 = (v[i]/2) + 1;
        }
        else
        {
            x1 = (v[i]/2) - 1;
            x2 = (v[i]/2) + 1;
        }

        ///cout<<"mn: "<<mn<<" x1: "<<x1<<" x2: "<<x2<<endl;
        if(mn < x1 || mn < x2)
        {
            flg = false;
            break;
        }

        mn = min(mn, v[i]);
    }

    if(flg) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

/// More Cleaner Code with the Same Logic
void solve()
{
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(ll i=0; i<n; i++) cin>>v[i];
 
    bool flg = true;
    ll mn = v[0];
    for(ll i=1; i<n; i++)
    {
        ll x = (v[i]/2) + 1;
        if(mn < x)
        {
            flg = false;
            break;
        }
        mn = min(mn, v[i]);
    }
 
    if(flg) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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
