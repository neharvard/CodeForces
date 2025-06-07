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
    ll n, s, sum = 0, oneCnt = 0;
    cin>>n>>s;
    vector<ll>vec(n);

    for(ll i=0; i<n; i++)
    {
        cin>>vec[i];
        sum += vec[i];
        oneCnt++;
    }

    if(sum < s || (sum - s) > oneCnt)
    {
        cout<<"-1"<<endl;
        return;
    }

    sum = 0;
    ll ans = INT_MAX, i = 0, j = 0, sz;
    for( ; j<n; j++)
    {
        sum += vec[j];
        while(sum > s && i<n)
        {
            sz = (i+1) + (n - j - 1);
            ans = min(ans, sz);
            sum -= vec[i];
            i++;
        }
    }
    sz = (i+1) + (n - j - 1);
    ans = min(ans, sz);
  
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
