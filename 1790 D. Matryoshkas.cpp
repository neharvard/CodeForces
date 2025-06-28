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
    map<ll,ll>freq;

    for(ll i=0; i<n; i++)
    {
        cin>>x;
        freq[x]++;
    }
    
    ll ans = 0;
    ///for(auto &it : freq)cout<<it.ff<<sp<<it.ss<<endl; cout<<endl;


    for(auto it = freq.begin(); it != freq.end(); it++)
    {
        while(it->ss > 0)
        {
            it->ss--;
            /// cout<<"num: "<<it->ff<<" freq: "<<freq[it->ff]<<" ans: "<<ans<<endl;
            bool ok = false;
            ll num = it->ff;

            for(auto el = next(it); el != freq.end(); el++)
            {
                 if(el->ss == 0) continue;
                /// cout<<"ff: "<<el->ff<<" num: "<<num<<" ans: "<<ans<<endl;

                if(abs(el->ff - num) != 1)
                {
                    ans++;
                    ok = true;
                    break;
                }
                else if(abs(el->ff - num) == 1)
                {
                    freq[el->ff]--;
                    num = el->ff;
                }
            }
            if(!ok) ans++;
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
