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

// Approach: Find the SubMask 
// TC: O(n)
// SC: O(1)
void solve()
{
    ll n, x;
    cin>>n>>x;
    vector<ll>ans(n);

    ll j =0, OR = 0, i = 0;
    for( ; i<n; i++)
    {
        OR |= j;
        if(OR <= x && (OR | x) == x)
        {
            /// cout<<"j: "<<j<<" OR: "<<OR<<endl;
            ans[i] = j;
            j++;
        }
        else break;
    }

    if(i<n)
    {
        while(i < n)
        {
            OR |= x;
            ans[i] = x;
            i++;
        }
    }
    if(OR != x) ans[n-1] = x;

    /// OR = 0;
    for(auto &it : ans)
    {
        ///OR |= it;  cout<<" or: "<<OR<<endl;
        cout<<it<<sp;
    }
    cout<<endl;
}

/// Same Logic + More Cleaner code
void solve()
{
    ll n, x;
    cin>>n>>x;
    
    ll OR=0;
    for(ll i=0; i<n-1; i++)
    {
        if((i | x) == x)
        {
            OR |= i;
            cout<<i<<sp;
        }
        else
        {
            OR |= x;
            cout<<x<<sp;
        }
    }

    if((OR | n-1) == x) cout<<n-1<<endl;
    else cout<<x<<endl;
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
