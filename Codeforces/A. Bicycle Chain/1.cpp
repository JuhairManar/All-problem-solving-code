//link-https://codeforces.com/problemset/problem/215/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i,j,n,m,max=INT_MIN,r;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>m;
    int b[m];
    for(i=0;i<m;i++)
    {
        cin>>b[i];
    }
    map<int,int>mp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(b[j]%a[i]==0)
            {
                r=b[j]/a[i];
                if(r>=max)
                {
                    max=r;
                    mp[max]++;
                }
            }
        }
    }
    cout<<mp[max];

  return 0;
}