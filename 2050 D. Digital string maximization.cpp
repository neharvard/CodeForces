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
    string s;
    cin>>s;

    ll sz = s.size();
    for(ll i=0; i<sz; i++)
    {
        ll sz1 = i+11; /// for 0-9 digit sz is 10
        ll idx = 1, prev = s[i] - '0', rightIdx, flg = 0;
        ///cout<<"prev: "<<prev<<sp;

        for(ll j=i+1; j<min(sz1, sz);  j++)
        {
            ll curr = s[j] - '0';
            curr -= idx;
            idx++;

            if(curr > prev)
            {
                prev = curr;
                rightIdx = j;
                flg = 1;
            }
        }
       ///cout<<"flg: "<<flg<<" Prev: "<<prev<<" j: "<<rightIdx<<endl;

        if(flg)
        {
            /// moving each element (from i+1 to J) to the right by 1 unit
            for(ll j = rightIdx; j>=i+1; j--) s[j] = s[j-1];
            s[i] = prev + '0';
        }

        ///cout<<"S: "<<s<<endl;
    }

    cout<<s<<endl;
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
