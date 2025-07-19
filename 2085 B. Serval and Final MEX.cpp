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

    ll idxL = -1, idxR = -1;
    for(ll i=0; i<n; i++)
    {
        cin>>v[i];
        if(v[i] == 0)
        {
            if(idxL == -1) idxL = i;
            idxR = i;
        }
    }

    if(idxL == -1 && idxR == -1)
    {
        cout<<1<<endl;
        cout<<1<<sp<<n<<endl;
    }

    /// one zero
    else if(idxL == idxR)
    {
        cout<<2<<endl;
        if(idxL == 0)
        {
            cout<<1<<sp<<2<<endl;
            cout<<1<<sp<<n-1<<endl;
        }
        else if(idxL == n-1)
        {
            cout<<n-1<<sp<<n<<endl;
            cout<<1<<sp<<n-1<<endl;
        }
        else
        {
            cout<<1<<sp<<n-1<<endl;
            cout<<1<<sp<<2<<endl;
        }
    }
    else
    {

        if(idxL == 0 && idxR == n-1)
        {
            cout<<3<<endl;
            cout<<1<<sp<<2<<endl;
            cout<<2<<sp<<n-1<<endl;
            cout<<1<<sp<<2<<endl;
        }
        else
        {
            cout<<2<<endl;
            cout<<idxL+1<<sp<<idxR+1<<endl;
            cout<<1<<sp<<n-(idxR - idxL)<<endl;
        }
    }
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
