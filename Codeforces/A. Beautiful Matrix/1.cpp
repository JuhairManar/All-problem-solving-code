//linkk-https://codeforces.com/problemset/problem/263/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x,y,i,j,s,a[5][5];
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cin>>a[i][j];
            if(a[i][j]==1)
            {
                x=i+1;
                y=j+1;
            }
        }
    }
    //cout<<x<<endl<<y<<endl;
    s=abs(3-x)+abs(3-y);
    cout<<s;

  return 0;
}