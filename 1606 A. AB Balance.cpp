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
    int sz = s.size();

    int cntAB = 0, cntBA = 0;
    for(int i = 0; i<sz-1; i++)
    {
        if(s[i] == 'a' && s[i+1] == 'b') cntAB++;
        else if(s[i] == 'b' && s[i+1] == 'a') cntBA++;
    }

    int diff = abs(cntAB - cntBA);
    if(cntAB > cntBA)  /// replace A to B
    {
        for(int i = 0; i<sz; i++)
        {
            if(s[i] == 'a')
            {
                if(diff > 0) cout<<"b";
                else cout<<s[i];
                diff--;
            }
            else cout<<s[i];
        }
    }
    else  if(cntAB < cntBA)  /// replace B to A
    {
        for(int i = 0; i<sz; i++)
        {
            if(s[i] == 'b')
            {
                if(diff > 0) cout<<"a";
                else cout<<s[i];
                diff--;
            }
            else cout<<s[i];
        }
    }

    else cout<<s;
    cout<<endl;

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
