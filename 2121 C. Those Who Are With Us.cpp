/// Approach-1 : BruteForce, Accepted but not so optimized
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
    int n, m;
    cin>>n>>m;
    vector<vector<int>>v(n, vector<int>(m, 0));

    int mx = INT_MIN;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>v[i][j];
            mx = max(mx, v[i][j]);
        }
    }

    int totalMx = 0, rowMx = 0, colMx = 0, idxRow, idxCol;
    vector<int>row, col;

    for(int i=0; i<n; i++)
    {
        int cnt = 0;
        for(int j=0; j<m; j++)
        {
            if(v[i][j] == mx)
            {
                totalMx++;
                cnt++;
            }
        }
        if(cnt > rowMx)
        {
            rowMx = cnt;
            idxRow = i;
        }
    }

    for(int i=0; i<m; i++)
    {
        int cnt = 0;
        for(int j=0; j<n; j++)
        {
            if(v[j][i] == mx) cnt++;
        }
        if(cnt > colMx)
        {
            colMx = cnt;
            idxCol = i;
        }
    }

    for(int i=0; i<n; i++)
    {
        int cnt = 0;
        for(int j=0; j<m; j++)
        {
            if(v[i][j] == mx) cnt++;
        }
        if(cnt == rowMx) row.pb(i);
    }

    for(int i=0; i<m; i++)
    {
        int cnt = 0;
        for(int j=0; j<n; j++)
        {
            if(v[j][i] == mx) cnt++;
        }
        if(cnt == colMx) col.pb(i);
    }

    int ok = 0, flg = 0;
    if(row.size() > 1 || col.size() > 1)
    {
        for(auto &r : row)
        {
            for(auto &c : col)
            {
                if(v[r][c] != mx)
                {
                    ok =1 ;
                    flg = 1;
                    break;
                }
            }
            if(ok) break;
        }
    }

    /// cout<<"total: "<<totalMx<<" row: "<<rowMx<<" col: "<<colMx<<" idxRow: "<<idxRow<<" idxCol: "<<idxCol<<endl;

    int total = colMx+rowMx;
    if(!ok && flg) total -=1;
    else if(flg == 0 && v[idxRow][idxCol] == mx) total -= 1;
    /// cout<<"ttt: "<<total<<endl;

    if(total == totalMx) cout<<mx-1<<endl;
    else cout<<mx<<endl;
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



/// Approach-2: Optimized
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
    int n, m;
    cin>>n>>m;
    vector<vector<int>>v(n, vector<int>(m, 0));

    int mx = INT_MIN;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>v[i][j];
            mx = max(mx, v[i][j]);
        }
    }

    vector<int>row(n), col(m);
    int total = 0;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(v[i][j] == mx)
            {
                v[i][j] = 1;
                row[i]++, col[j]++;
                total++;
            }
            else v[i][j] = 0;
        }
    }

    /// cout<<"total: "<<total<<" mx: "<<mx<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            /// cout<<"row: "<<row[i]<<" col: "<<col[j]<<" v: "<<v[i][j]<<endl;
            if(row[i] + col[j] - v[i][j] == total)
            {
                cout<<mx-1<<endl;
                return;
            }
        }
    }
    cout<<mx<<endl;
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
