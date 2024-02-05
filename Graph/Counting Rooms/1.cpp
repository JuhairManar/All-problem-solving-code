//linkhttps://cses.fi/problemset/task/1192

#include<bits/stdc++.h>

using namespace std;

void dfs(vector<string>&vs ,int r,int c,int n,int m,int &cr)
{
    if(r>=0 && r<n && c>=0 && c<m && vs[r][c]=='.')
    {
        vs[r][c]='*';
        dfs(vs,r+1,c,n,m,cr);
        dfs(vs,r-1,c,n,m,cr);
        dfs(vs,r,c+1,n,m,cr);
        dfs(vs,r,c-1,n,m,cr);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    vector<string>vs;
    int n,m,i,j,cr=0;
    cin>>n>>m;
    string s;
    for(i=0;i<n;i++)
    {
        cin>>s;
        vs.push_back(s);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(vs[i][j]=='.' )
            {
                cr++;
                dfs(vs,i,j,n,m,cr);
            }
        }
    }
    cout<<cr;


  return 0;
}