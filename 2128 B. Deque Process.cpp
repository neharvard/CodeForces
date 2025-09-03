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


///Two Pointer,  TC: O(n),  SC: O(1)
void solve()
{
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(ll i=0; i<n; i++) cin>>v[i];

    string ans;
    ans += 'L';
    ll last = ans[0];

    for(ll i=1, j = n-1; i<j; i++, j--)
    {
        if(v[i] > last && v[j] > last)  // l = 7, vi = 10, vj = 12
        {
            if(v[i] > v[j])
            {
                ans += "LR";
                last = v[j];
            }
            else
            {
                ans += "RL";
                last = v[i];
            }
        }
        else if(v[i] < last && v[j] < last)   /// l=7, vi = 3, vj = 5
        {
            if(v[i] < v[j])
            {
                ans += "LR";
                last = v[j];
            }
            else
            {
                ans += "RL";
                last = v[i];
            }
        }
        else
        {
            ans += "LR";
            last = v[j];
        }
    }
    if(n%2 == 0) ans += 'R';

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
