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

// Approahc : Binary Search
// TC: O(nlogn)
// SC: O(1)
void solve()
{
    ll n, x, y;
    cin>>n>>x>>y;

    vector<ll>v(n);
    ll sum = 0;
    for(ll i=0; i<n; i++)
    {
        cin>>v[i];
        sum += v[i];
    }
    sort(all(v));

    ll ans = 0;
    for(ll i=0; i<n; i++)
    {
        ll left = -1, right = -1;

        // finding the left most index which matches the condition
        ll low = i+1, high = n-1;
        while(low <= high)
        {
            ll mid = low + (high-low)/2;
            ll need = sum - (v[i] + v[mid]);

            if(need >= x && need <= y)
            {
                left = mid;
                high = mid-1;
            }
            else if(need < x) high = mid - 1;
            else  low = mid + 1;
        }

        // finding the right most index which matches the condition
        low = i+1, high = n-1;
        while(low <= high)
        {
            ll mid = low+(high-low)/2;
            ll need = sum - (v[i] + v[mid]);

            if(need >= x && need <= y)
            {
                right = mid;
                low = mid + 1;
            }
            else if(need < x) high = mid - 1;
            else if(need > y) low = mid + 1;
        }

        /// cout<<"left: "<<left<<" right: "<<right<<endl;
        if(left != -1 && right != -1) ans += (right - left+1);
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
