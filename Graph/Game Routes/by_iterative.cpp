//link-https://cses.fi/problemset/task/1681

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