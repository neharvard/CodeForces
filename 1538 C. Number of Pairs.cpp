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


/// Binary Search , TC: O(nlogn), SC: O(1)
void solve()
{
    ll n, l, r;
    cin>>n>>l>>r;
    vector<ll>v(n);

    for(ll i=0; i<n; i++)
    {
        cin>>v[i];
    }
    sort(all(v));

    ll ans = 0, cnt;
    for(ll i=0; i<n-1; i++)
    {
        ll left = -1, right = -1;
        ll low = i+1, high = n-1;
        while(low <= high)
        {
            ll mid = low + (high-low)/2;

            if(v[mid]+v[i] >= l)
            {
                left = mid;
                high = mid-1;
            }
            else low = mid+1;
        }

        low = i+1, high = n-1;
        while(low <= high)
        {
            ll mid = low + (high-low)/2;

            if(v[mid]+v[i] <= r)
            {
                right = mid;
                low = mid+1;
            }
            else high = mid-1;
        }

        ///cout<<"left: "<<left<<" right: "<<right<<endl;
        if(left != -1 && right != -1) ans += (right - left + 1);
    }

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
