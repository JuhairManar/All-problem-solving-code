//link-https://cses.fi/problemset/task/1193

#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    int n,m,i,j,x,y,ml=0,spx,spy;
    vector<string>vs,dir;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        string s;
        for(j=0;j<m;j++)
        {
            char c;
            cin>>c;
            s+=c;
            if(c=='A')
            {
               x=i;
               y=j;
            }
        }
        vs.push_back(s);
    }                                   
    vector<vector<int>>vis(n,vector<int>(m,0));
    vector<vector<int>>level(n,vector<int>(m,0));
    vis[x][y]=1;
    level[x][y]=0;
    queue<pair<int,int>>q;
    q.push({x,y});
    pair<int,int>p;
    spx=x;spy=y;
    string s="";
    dir=vs;
    while(!q.empty())
    {
        p=q.front();
        q.pop();

        x=p.first;
        y=p.second;

        if(vs[x][y]=='B')
        {
            cout<<"YES\n";
            cout<<level[x][y]<<endl;
            while(1){
				
                //s=dir[x][y]+s;
                s = dir[x][y] + s;
                //s+=dir[x][y];
				/* if (dir[x][y] == 'L') y++;
                else if (dir[x][y] == 'R') y--;
                else if (dir[x][y] == 'U') x++;
                else if (dir[x][y] == 'D') x--; */
                if (s[0] == 'L') y++;
                if (s[0] == 'R') y--;
                if (s[0] == 'U') x++;
                if (s[0] == 'D') x--;
				if(spx == x && spy == y)
                {                  
                    break;
                }
			}
            //reverse(s.begin(),s.end());
            //cout<<s.size()<<endl<<s;
            cout<<s;
            return 0;
        }

        //cout<<"front "<<x<<" "<<y<<endl;
        
        //Down -- x+1
        if(x+1>=0 && x+1<n &&  vs[x+1][y]!='#' && !vis[x+1][y])
        {
            q.push({x+1,y});
            level[x+1][y]=level[x][y]+1;
            vis[x+1][y]=1;
            dir[x+1][y]='D';
        }

        //Up -- x-1
        if(x-1>=0 && x-1<n &&  vs[x-1][y]!='#' && !vis[x-1][y])
        {
            q.push({x-1,y});
            level[x-1][y]=level[x][y]+1;
            vis[x-1][y]=1;
            dir[x-1][y]='U';
        }

        //Right-- y+1
        if(y+1>=0 && y+1<m &&  vs[x][y+1]!='#' && !vis[x][y+1])
        {
            q.push({x,y+1});
            level[x][y+1]=level[x][y]+1;
            vis[x][y+1]=1;
            dir[x][y+1]='R';
        }

        //Left-- y-1
        if(y-1>=0 && y-1<m &&  vs[x][y-1]!='#' && !vis[x][y-1])
        {
            q.push({x,y-1});
            level[x][y-1]=level[x][y]+1;
            vis[x][y-1]=1;
            dir[x][y-1]='L';
        }
    }
    //cout<<x<<" "<<y<<endl;
/*     if(x==0 || x==n-1 || y==0 || y==m-1)
    {
        cout<<"YES\n";
        cout<<level[p.first][p.second]<<endl;
        //cout<<ml<<endl;
        cout<<"RRDDR";
    }
    else 
    {
        cout<<"NO\n";
    } */
    cout<<"NO\n";



  return 0;
}