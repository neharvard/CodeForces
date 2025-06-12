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

    ll ans = 0;

    for(ll i=1; i<=n; i++)
    {
        for(ll j=i-1; j<n; j+=i)
        {
           ///cout<<"i: "<<i<<" j: "<<j<<" sj: "<<s[j]<<endl;
            if(s[j] == '1') break;
            else if(s[j] == '0')
            {
                ans += i;
              /// cout<<"ans: "<<ans<<endl;
                s[j] = '2';
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
