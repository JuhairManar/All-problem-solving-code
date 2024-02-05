#include<bits/stdc++.h>

using namespace std;

const long mod=(1e9)+7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long n,m,u,v,i,mod=(1e9)+7,f;
    cin>>n>>m;
    vector<long>adj_list[n+1];
    vector<long>vis(n+1,0),nw(n+1,0);
    for(i=0;i<m;i++)
    {
        cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }   
    //cout<<m;          
    queue<long>q;
    q.push(1);
    vis[1]=1;
    while(!q.empty())
    {
        f=q.front();
        q.pop();
        //cout<<f<<" ";
        for(auto g:adj_list[f])
        {
            if(!vis[g])
            {
                q.push(g);
                vis[g]=1;
                nw[g]++;
            }
            else
            {
                nw[g]+=nw[f];
            }
        }
    }
    cout<<nw[n];



  return 0;
}