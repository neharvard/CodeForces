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

/// BruteForce , TC: O(n^2), SC: O(1)
void solve()
{
    ll n;
    cin>>n;
    vector<ll>a(n), b(n);

    for(ll i=0; i<n; i++) cin>>a[i];
    for(ll i=0; i<n; i++) cin>>b[i];

    vector<pair<ll, ll>>ans;

    for(ll i=0; i<n; i++)
    {
        if(a[i] > b[i])
        {
            ans.pb({3, i+1});
            swap(a[i], b[i]);
        }
    }

   /// for(auto &it : a) cout<<it<<sp;cout<<endl;
   /// for(auto &it : b) cout<<it<<sp;cout<<endl; cout<<endl;

    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<n-i-1; j++)
        {
          //  cout<<"j: "<<a[j]<<" j+: "<<a[j+1]<<endl;
            if(a[j] > a[j+1])
            {
                ans.pb({1, j+1});
                swap(a[j], a[j+1]);
            }
        }
    }

    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<n-i-1; j++)
        {
           /// cout<<"j: "<<b[j]<<" j+: "<<b[j+1]<<endl;
            if(b[j] > b[j+1])
            {
                ans.pb({2, j+1});
                swap(b[j], b[j+1]);
            }
        }
    }

   // cout<<endl;
   /// for(auto &it : a) cout<<it<<sp;cout<<endl;
   /// for(auto &it : b) cout<<it<<sp;cout<<endl; cout<<endl;

    cout<<ans.size()<<endl;
    for(auto &it : ans) cout<<it.ff<<sp<<it.ss<<endl;

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
