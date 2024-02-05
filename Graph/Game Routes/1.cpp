/* //link-https://cses.fi/problemset/task/1681

#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long n,m,u,v,i,mod=(1e9)+7;
    cin>>n>>m;
    vector<long>adj_list[n+1];
    vector<long>vis(n+1,0),nw(n+1,0);
    for(i=0;i<m;i++)
    {
        cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }             
    for(i=1;i<=n;i++)
    {
        vis[i]=1;
        for(auto g:adj_list[i])
        {
            if(!vis[g])
            {
                nw[g]++;
                //nw[g]=nw[g]%mod;
                nw[g]%=mod;
            }
        }
    }
    cout<<nw[n];



  return 0;
}
 */

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

const int MOD = 1000000007;

int countWaysToCompleteGame(int n, const vector<pair<int, int>>& teleporters) {
    // Create adjacency list for teleporters
    vector<vector<int>> adj_list(n + 1);
    for (const auto& teleporter : teleporters) {
        int from = teleporter.first;
        int to = teleporter.second;
        adj_list[from].push_back(to);
    }

    vector<long long> dp(n + 1, 0);
    dp[1] = 1;

    for (int i = 1; i <= n; i++) {
        for (int neighbor : adj_list[i]) {
            dp[neighbor] = (dp[neighbor] + dp[i]) % MOD;
        }
    }

    return dp[n] % MOD;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<pair<int, int>> teleporters(m);
    for (int i = 0; i < m; i++) {
        cin >> teleporters[i].first >> teleporters[i].second;
    }

    int num_paths = countWaysToCompleteGame(n, teleporters);
    cout << num_paths << endl;

    return 0;
}

