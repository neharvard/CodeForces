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
    string s;
    cin>>n>>s;

    ll ans = INT_MAX;
    for(int i='a'; i<='z'; i++)
    {
        ll change = 0;
        ll l=0, r = n-1;

        /// two pointer approach
        while(l <= r)
        {
            if(s[l] != s[r])
            {
               /// cout<<"sl: "<<s[l]<<" sr: "<<s[r]<<endl;
                if(s[l] == i)
                {
                    ///cout<<"l: "<<s[l];
                    l++;
                    change++;
                   /// cout<<" chg: "<<change<<endl;
                }
                else if(s[r] == i)
                {
                    ///cout<<"r: "<<s[r];
                    r--;
                    change++;
                   /// cout<<" chg: "<<change<<endl;
                }
                else
                {
                    change = INT_MAX;
                    break;
                }
            }
            else
            {
                l++;
                r--;
            }
        }

       /// cout<<"i: "<<i<<" change: "<<change<<endl<<endl;
        ans = min(ans, change);
    }

    if(ans == INT_MAX) cout<<"-1"<<endl;
    else cout<<ans<<endl;
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
