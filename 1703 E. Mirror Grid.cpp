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
    vector<vector<char>> mat(n, vector<char>(n));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> mat[i][j];
    } //! O(n^2)

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int c0 = 0, c1 = 0;

            if (mat[i][j] == '0')
                c0++;
            else
                c1++;

            if (mat[j][n - i - 1] == '0')
                c0++;
            else
                c1++;

            if (mat[n - i - 1][n - j - 1] == '0')
                c0++;
            else
                c1++;

            if (mat[n - j - 1][i] == '0')
                c0++;
            else
                c1++;

            if ((c0 == 0) or (c1 == 0))
                continue;

            if (c0 >= c1)
            {
                //! 1s are in minority, so change all 1s to 0s
                ans += c1;
                mat[i][j] = '0';
                mat[j][n - i - 1] = '0';
                mat[n - i - 1][n - j - 1] = '0';
                mat[n - j - 1][i] = '0';
            }
            else
            {
                //! 0s are in minority, so change all 0s to 1s
                ans += c0;
                mat[i][j] = '1';
                mat[j][n - i - 1] = '1';
                mat[n - i - 1][n - j - 1] = '1';
                mat[n - j - 1][i] = '1';
            }
        }
    }

    cout<<ans<<endl;

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
