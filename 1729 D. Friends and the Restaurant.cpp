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
    vector<ll>x(n), y(n);
    vector<ll>diff;

    for(ll i=0; i<n; i++) cin>>x[i];
    for(ll i=0; i<n; i++)
    {
        cin>>y[i];
        diff.pb(y[i] - x[i]);
    }

    sort(all(diff));
  ///  for(auto &it : diff)cout<<it<<sp; cout<<endl;

    ll days = 0, i = 0, j = n-1, sumX = 0, sumY = 0;
    while(i < j)
    {
        sumY = diff[j];
        while(i<j )
        {
            ///cout<<"x: "<<sumX<<" y: "<<sumY<<" diff: "<<diff[i]<<endl;
            sumX = diff[i];
            if(sumY+sumX >= 0)
            {
                days++;
                i++;
                break;
            }
            i++;
        }
      ///  cout<<"days: "<<days<<endl;
        j--;
    }

    cout<<days<<endl;
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
