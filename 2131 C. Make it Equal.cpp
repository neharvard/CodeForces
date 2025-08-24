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
    ll n, k, x;
    cin>>n>>k;
    vector<ll>v(n);
    for(ll i=0; i<n; i++)
    {
        cin>>x;
        v[i] = x % k;
    }

    map<ll,ll>freq;
    for(ll i=0; i<n; i++)
    {
        cin>>x;
        freq[x%k]++;
    }
    // for(auto &it : freq)cout<<it.ff<<sp<<it.ss<<endl; cout<<endl;

    /// x = 2 k = 5 then x+k=7 x - k = 3; x%k = 2, (x+k) %k = 2 [similar to x%k], (x-k)%k = 3[did abs thus val changes, similar to k - (x%k)]
    /// So need to Check 2 condition, i) is v[i]%k is present or ii) is k - (v[i]%k) is present

    for(ll i=0; i<n; i++)
    {
        if(freq[v[i]]) freq[v[i]]--;
        else
        {
            x = k - v[i];
            if(freq[x]) freq[x]--;
            else
            {
                cout<<"NO"<<endl;
                return;
            }
        }
    }

    for(auto &it : freq)
    {
        /// cout<<it.ff<<sp<<it.ss<<endl;
        if(it.ss != 0)
        {
            cout<<"NO"<<endl;
            return;
        }
    }

    cout<<"YES"<<endl;

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
