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
    vector<ll>a(n), b(n), c(n);
    vector< pair<ll, ll> >va, vb, vc;

    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
        va.pb({a[i], i});
    }
    for(ll i=0; i<n; i++)
    {
        cin>>b[i];
        vb.pb({b[i], i});
    }
    for(ll i=0; i<n; i++)
    {
        cin>>c[i];
        vc.pb({c[i], i});
    }

    sort(va.begin(), va.end(), greater<>());
    sort(vb.begin(), vb.end(), greater<>());
    sort(vc.begin(), vc.end(), greater<>());

    ll ans = 0;
   
   /// Approach-2: TC: O(3^3), SC: O(N)
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            for(int k=0; k<3; k++)
            {
                if(va[i].ss != vb[j].ss && va[i].ss != vc[k].ss && vb[j].ss != vc[k].ss )
                {
                    ans = max(ans, va[i].ff + vb[j].ff + vc[k].ff);
                }
            }
        }
    }


    /*
        /// Approach-1: BruteForce, TC: O(N^3), SC: O(1) [ which got TLE ]
        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<n; j++)
            {
                if(j == i) continue;
                else
                {
                    for(ll k=0; k<n; k++)
                    {
                        if(k == i || k == j) continue;
                        else
                        {
                            ll sum = a[i] + b[j] + c[k];
                            ans = max(ans, sum);  ///cout<<"a:"<<i<<" b:"<<j<<" c:"<<k<<" sum: "<<sum<<" ans: "<<ans<<endl;
                        }
                    }
                }
            }
        }
        */

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
