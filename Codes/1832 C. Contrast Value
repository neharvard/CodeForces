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

    /*
             Brute Force Insight:  To minimize b's size while maintaining the same contrast as a:
                    1) Eliminate all elements that don't contribute to changes in contrast.
                    2) Only keep elements where the difference between adjacent values changes direction (peaks or valleys).
    */

    if(n == 1)
    {
        cout<<1<<endl;
        return;
    }

    ll ok = 0, ans = 0;

    for(ll i=1; i<n; i++)
    {
        if(v[i-1] < v[i] && ok != 1)  /// Strictly Increasing order
        {
            ans++;
            ok = 1;
        }
        else if(v[i-1] > v[i] && ok != -1)  /// Strictly Decreasing order
        {
            ans++;
            ok = -1;
        }
    }

    cout<<ans+1<<endl;
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
