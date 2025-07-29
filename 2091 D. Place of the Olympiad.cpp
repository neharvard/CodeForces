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


// Approach-1: Binary Search
// TC: O(logn)
// SC: O(1)
void solve()
{
    ll n, m, k;
    cin>>n>>m>>k;

    ll low = 1, high = m, ans;

    while(low <= high)
    {
        ll mid = low + (high-low)/2;

        ll cellOneRow = ((m/(mid+1)) * mid )+ (m%(mid+1));  /// This finds the min cell we can took in one row
        ll total = cellOneRow * n;
        // cout<<"mid: "<<mid<<" cell: "<<cellOneRow<<" total: "<<total<<endl;

        if(total < k) low = mid+1;
        else
        {
            ans = mid;
            high = mid-1;
        }
    }
    cout<<ans<<endl;
  
    /// Using Formula, TC: O(1), SC: O(1)
    ll totalCollNeed = (k+n-1) / n;
    ll colRem = m - totalCollNeed;

    ll need = colRem+1;
    ll ans = (totalCollNeed + need-1)/need;
    cout<<ans<<endl;
}

// Approach-2: Using Formula
// TC: O(1)
// SC: O(1)
void solve()
{
    ll n, m, k;
    cin>>n>>m>>k;

    ll totalCollNeed = (k+n-1) / n;
    ll colRem = m - totalCollNeed;

    ll need = colRem+1;
    ll ans = (totalCollNeed + need-1)/need;
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
