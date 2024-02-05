//link-https://cses.fi/problemset/task/1193

#include<bits/stdc++.h>

using namespace std;

int dx[]={0,0,-1,1},dy[]={1,-1,0,0},n,m,i,j;
string dir="RLUD",s="",path="";

bool valid(int x,int y)
{
    if(x>=0 && x<n && y>=0 && y<m)
    {
        return 1;
    }
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<string>vs,marking;
    cin>>n>>m;
    char c;
    int x=0,y=0,nx,ny,srcx,srcy;
    for(i=0;i<n;i++)
    {
        s="";
        for(j=0;j<m;j++)
        {
            cin>>c;
            if(c=='A')
            {
                srcx=i;srcy=j;
            }
            s+=c;
        }
        vs.push_back(s);
    }
    marking=vs;
    queue<pair<int,int>>q;
    pair<int,int>p;
    x=srcx;y=srcy;
    q.push({x,y});
    vector<vector<int>>vis(n,vector<int>(m,0));
    marking[x][y]='A';
    vis[x][y]=1;
    while(!q.empty())
    {
        p=q.front();
        q.pop();
        x=p.first;
        y=p.second;
       // cout<<x<<"  "<<y<<"  ";
       // cout<<level[x][y]<<endl;
        //cout<<marking[x][y];
        if(vs[x][y]=='B')
        {
            cout<<"YES\n";
            while(marking[x][y]!='A')
            {
                path+=marking[x][y];
                if(path.back()=='L') y++;
                if(path.back()=='R') y--;
                if(path.back()=='U') x++;
                if(path.back()=='D') x--;
            }
            reverse(path.begin(),path.end());
            cout<<path.size()<<endl<<path;

            return 0;
        }
        for(i=0;i<4;i++)
        {
            nx=x+dx[i];
            ny=y+dy[i];
            if (valid(nx,ny) && vis[nx][ny]==0 && vs[nx][ny]!='#')
            {
                vis[nx][ny]=1;
                marking[nx][ny]=dir[i];
                q.push({nx,ny});
            }
        }
    }
    cout<<"NO";





  return 0;
}

/* #include <bits/stdc++.h>
using namespace std;

int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};

bool valid(int x, int y, int n, int m) {
    return x >= 0 && x < n && y >= 0 && y < m;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    vector<vector<char>> vs(n, vector<char>(m));
    vector<vector<int>> marking(n, vector<int>(m, 0));

    int srcx, srcy;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            char c;
            cin >> c;
            if (c == 'A') {
                srcx = i;
                srcy = j;
            }
            vs[i][j] = c;
        }
    }

    queue<pair<int, int>> q;
    q.push({srcx, srcy});
    marking[srcx][srcy] = 1;

    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        if (vs[x][y] == 'B') {
            cout << "YES\n";
            vector<char> path;
            while (vs[x][y] != 'A') {
                int d = marking[x][y];
                path.push_back("RLUD"[d - 1]);
                x -= dx[d - 1];
                y -= dy[d - 1];
            }

            reverse(path.begin(), path.end());

            cout << path.size() << "\n";
            for (char c : path) {
                cout << c;
            }

            return 0;
        }

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (valid(nx, ny, n, m) && marking[nx][ny] == 0 && vs[nx][ny] != '#') {
                marking[nx][ny] = i + 1;
                q.push({nx, ny});
            }
        }
    }

    cout << "NO\n";

    return 0;
} */
