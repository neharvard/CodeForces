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
    vector<ll>vec(n);
    for (ll i = 0; i<n; i++) cin >> vec[i];

    ll ans = 0;
    for (ll i = 0,j=i+1; j < n; j++){
        while(j<n && vec[i] + 1 >= vec[j]){
            // cout << "I:" << vec[i] << " j:" << vec[j] << endl;
            j++;
        }
        ans++;
        i = j;

        if(j == n-1){
            ans++; 
            break;
        }
    }

    if(ans == 0) ans = 1;

    cout << ans << endl;
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
