/* #include<bits/stdc++.h>

using namespace std;

const long mod=1000000007;

void cp(long i,vector<long>adj_list[],vector<long>&vis,long n,long &c)
{
    if(i==n)
    {
        c=(c+1)%mod;
        vis[i]=0;
        return ;
    }
    vis[i]=1;
    for(auto g:adj_list[i])
    {
        //cout<<"i = "<<i<<" = "<<endl;
        if(!vis[g])
        {
            cp(g,adj_list,vis,n,c);
        }
    }
    vis[i]=0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long n,m,u,v,i,mod=(1e9)+7,c=0;
    cin>>n>>m;
    vector<long>adj_list[n+1];
    vector<long>vis(n+1,0),nw(n+1,-1);
    for(i=0;i<m;i++)
    {
        cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }   
    cp(1,adj_list,vis,n,c);
    cout<<c;         



  return 0;
} */

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

const int MOD = 1000000007;

void dfs(int current_level, const vector<vector<int>>& adj_list, unordered_map<int, int>& memo, int destination, int& count) {
    if (current_level == destination) {
        count = (count + 1) % MOD;
        return;
    }

    if (memo.find(current_level) != memo.end()) {
        count = (count + memo[current_level]) % MOD;
        return;
    }

    for (int neighbor : adj_list[current_level]) {
        dfs(neighbor, adj_list, memo, destination, count);
    }

    memo[current_level] = count;
}

int countWaysToCompleteGame(int n, const vector<pair<int, int>>& teleporters) {
    vector<vector<int>> adj_list(n + 1);
    for (const auto& teleporter : teleporters) {
        int from = teleporter.first;
        int to = teleporter.second;
        adj_list[from].push_back(to);
    }

    int count = 0;
    unordered_map<int, int> memo;

    dfs(1, adj_list, memo, n, count);

    return count;
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








