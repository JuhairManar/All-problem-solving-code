//link-https://cses.fi/problemset/task/1668

#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    long n,m,i,u,v;
    cin>>n>>m;
    vector<int>adj_list[n+1],team(n+1,0);
    for(i=0;i<m;i++)
    {
        cin>>u>>v;
        adj_list[u].push_back(v);
        //adj_list[v].push_back(u);
    }            
    for(i=1;i<=n;i++)
    {
        //cout<<"i = "<<i<<endl;
        if(team[i]==0)
        {
            team[i]=1;
        }
        if(adj_list[i].size()==0 )
        {
            //cout<<i<<endl;
            continue;
        }
        for(auto g:adj_list[i])
        {
            //cout<<"i = "<<i<<endl;
            if(team[g]==team[i])
            {
                //cout<<"i = "<<i<<" g = "<<g<<endl;
                cout<<"IMPOSSIBLE";
                return 0;
            }
            else
            {
                if(team[i]==1)
                {
                    team[g]=2;
                }
                else
                {
                    team[g]=1;
                }
            }
            //cout<<i<<endl;
        }
    }                    
    for(i=1;i<=n;i++)
    {
        cout<<team[i]<<" ";
    }    


  return 0;
}