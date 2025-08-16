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
    ll n, x;
    cin>>n;
    vector<ll>odd, ev;
    for(ll i=0; i<n; i++)
    {
        cin>>x;
        if(x % 2) odd.pb(x);
        else ev.pb(x);
    }

    sort(begin(odd), end(odd), greater<ll>());
    sort(begin(ev), end(ev), greater<ll>());
    /// for(auto &it : odd) cout<<it<<sp; cout<<endl;
    /// for(auto &it: ev) cout<<it<<sp;cout<<endl;

    ll odSz = odd.size(), evSz = ev.size();
    if(odSz == 0)
    {
        cout<<ev[0]<<endl;
        return;
    }
    if(evSz == 0)
    {
        cout<<odd[0]<<endl;
        return;
    }

    ll i = 0, j = 0, ans = 0;
    if(odd[i] > ev[j]) ans += odd[i], i++;
    else ans += ev[j], j++;

    while(i<odSz && j<evSz)
    {
        ll t1 = ans + odd[i];
        ll t2 = ans + ev[j];
        ///cout<<"ans: "<<ans<<" t1: "<<t1<<" t2: "<<t2<<endl;

        if(t1 % 2 && t2 % 2 == 0)
        {
            ans = t1;
            i++;
        }
        else if(t2 % 2 && t1 %2 == 0)
        {
            ans = t2;
            j++;
        }
        else if(t1 % 2 && t2 % 2)
        {
            if(t1 >= t2) ans = t1, i++;
            else ans = t2, j++;
        }
        else break;
    }
    ///cout<<"I: "<<i<<" j: "<<j<<endl;

    if(i < odSz)
    {
        ///cout<<" odd: "<<sp;
        while(i < odSz)
        {
            if(ans % 2) ans += odd[i] - 1;
            else ans += odd[i];
            ///cout<<"a1: "<<ans<<endl;
            i++;
        }
    }

    if(j < evSz)
    {
        ///cout<<" ev: "<<sp;
        while(j < evSz)
        {
            if(ans % 2) ans += ev[j];
            else ans += ev[j]-1;
            ///cout<<"a2: "<<ans<<endl;
            j++;
        }
    }

    cout<<ans<<endl;
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
