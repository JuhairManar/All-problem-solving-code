
// link-https://atcoder.jp/contests/dp/tasks/dp_h

#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, m, i, j, u, l, f = 0, mod = 1e9 + 7;
    cin >> n >> m;
    // cin.ignore();
    // string s[n];
    vector<string> s(n);
    for (i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    vector<vector<ll>> v(n, vector<ll>(m));
    v[0][0] = 1;
    /*     for(auto g:s)
        {
            cout<<g<<endl;
        } */
    // cout<<"YES\n";
    for (i = 0; i < n; i++)
    {
        // cout<<"YES\n";
        for (j = 0; j < m; j++)
        {
            if (s[i][j] == '#')
            {
                continue;
            }
            if (i > 0)
            {
                v[i][j] = (v[i][j] + v[i - 1][j]) % mod;
            }
            if (j > 0)
            {
                v[i][j] = (v[i][j] + v[i][j - 1]) % mod;
            }
        }
    }
    cout << v[n - 1][m - 1];

    return 0;
}
/*
74 53
7 7 7 9 1 4 4 7 8 2 10 3 9 8 1 9 7 1 2 8 7 3 5 3 9 8 9 7 8 3 2 4 2 6 10 1 6 4 10 5 3 7 1 6 5 6 1 8 6 7 5 1 2 3 5 2 9 10 3 1 2 10 5 7 10 2 7 9 3 4 2 8 10 5

 */

/*
If check all the rods of array that means when i == rods.size
We can return 0 if difference is 0 else return -INF

 if(i == rods.size(
Base Case:
If check all the rods of array that means when i == rods.size
We can return 0 if difference is 0 else return -INF

 if(i == rods.size())
 {
     if(diff == 0) return 0;
     return -1e9;
 }

 */

/*
If check all the rods of array that means when i == rods.size
We can return 0 if difference is 0 else return -INF

 if(i == rods.size(
Base Case:
If check all the rods of array that means when i == rods.size
We can return 0 if difference is 0 else return -INF

 if(i == rods.size())
 {
     if(diff == 0) return 0;
     return -1e9;
 }
 */

// link-https://atcoder.jp/contests/dp/tasks/dp_g
