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
    int cnt = 0;
    stack<char>st;

    st.push(s[0]);

    for(int i=1; i<sz; i++)
    {
        if(!st.empty())
        {
            if(s[i] != st.top())
            {
                st.pop();
                cnt++;
            }
            else st.push(s[i]);
        }
        else st.push(s[i]);
    }

    ///cout<<"cnt: "<<cnt<<endl;
    if(cnt % 2 == 0) cout<<"NET"<<endl;
    else cout<<"DA"<<endl;

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
