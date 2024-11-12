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
    ll n, x, y;
    cin>>n>>x>>y;

    ll xDivNo = n/x;
    ll yDivNo = n/y;

    ll lcm = (x*y) / __gcd(x, y);
    ll common = n/lcm;

    ///cout<<"xDiv: "<<xDivNo<<" yDiv: "<<yDivNo<<" common: "<<common<<endl;

    ll totalSum = (n * (n + 1)) / 2;   /// cout<<"total: "<<totalSum<<endl;

    ll xRem = n -  (xDivNo - common);
    ll yRem = yDivNo - common;

    ll xSum = totalSum - ((xRem * (xRem + 1)) / 2 );
    ll ySum = (yRem * (yRem + 1)) / 2;

    /// cout<<"xsum: "<<xSum<<" ysum: "<<ySum<<endl;

    ll ans = xSum - ySum;

    cout<<ans<<endl;

    /*
        /// Approach-1: BruteForce, TC: O(N), SC: O(1) [ Which got TLE ]

        ll sum1 = 0, sum2 = 0, n1 = n, n2 = 1;
        for(ll i=x; i<=n; i += x)
        {
            if(i % y == 0) continue;

            sum1 += n1;
           // cout<<"i: "<<i<<" n1:"<<n1<<" sum1: "<<sum1<<endl;
            n1--;
        }
        //cout<<endl<<endl;

        for(ll i=y; i<=n; i += y)
        {
            if(i % x == 0) continue;
            sum2 += n2;
            //cout<<"i: "<<i<<" n2:"<<n2<<" sum2: "<<sum2<<endl;
            n2++;
        }

        /// cout<<"sum1: "<<sum1<<" sum2:"<<sum2<<endl;
        cout<<sum1 - sum2 << endl;

        */
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
