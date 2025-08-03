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


// Approach: If a num is divisible by n then the digit sum of num is also divisible by n 
// TC: O(n)
// SC: O(1)
void solve()
{
    string s;
    cin>>s;

    ll sz = s.size(), two = 0, three = 0, sum = 0;

    for(ll i=0; i<sz; i++)
    {
        sum += s[i] - '0';
        if(s[i] == '2') two++;
        else if(s[i] == '3') three++;
    }
   /// cout<<"sum: "<<sum<<" 2: "<<two<<" 3: "<<three<<endl;

    bool ok = false;
    if(sum % 9 == 0) ok = true;
    else
    {
        /// ll x = (sum + 8)/9; //ceil of the divisor
        ll need = 9 - (sum%9);
        for(ll i=0; i<=two; i++)
        {
            for(ll j=0; j<=three; j++)
            {
                ll mul = (i*2) + (j*6);
                /// cout<<"mul "<<mul<<endl;

                if(mul%9 == need)
                {
                    ok = true;
                    break;
                }
            }
            if(ok) break;
        }
    }

    if(ok) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

// More Cleaner code with same logic
void solve()
{
    string s;
    cin>>s;

    int sz = s.size(), two = 0, three = 0, sum = 0;

    for(int i=0; i<sz; i++)
    {
        sum += (s[i] - '0');
        if(s[i] == '2') two++;
        else if(s[i] == '3') three++;
    }

    for(int i=0; i<=min(two, 9); i++)
    {
        for(int j=0; j<=min(three, 9); j++)
        {
            int tmp = (sum + (i*2) + (j*6)) % 9;   /// cout<<"sum: "<<tmp<<" i: "<<i*2<<" j: "<<j*6<<endl;
            if(tmp == 0)
            {
                cout<<"YES"<<endl;
                return;
            }
        }
    }

    cout<<"NO"<<endl;
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
