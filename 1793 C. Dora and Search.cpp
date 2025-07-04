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

    ll mn = 1, mx = n, l = 0, r = n-1, flgL = 0, flgR = 0;

    while(l < r)
    {
        //  cout<<"l:"<<l<<" r: "<<r<<" mn: "<<mn<<" mx: "<<mx<<endl;
        if(v[l] == mn)
        {
            //  cout<<"1111111: "<<endl;
            l++;
            mn++;
        }
        else if( v[l] == mx)
        {
            //  cout<<"1111111: "<<endl;
            l++;
            mx--;
        }
        else if(v[r] == mn)
        {
            //   cout<<"222222: "<<endl;
            r--;
            mn++;
        }
        else if (v[r] == mx)
        {
            //   cout<<"222222: "<<endl;
            r--;
            mx--;
        }

        else
        {
            cout<<l+1<<sp<<r+1<<endl;
            return;
        }

    }

    cout<<"-1"<<endl;
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
