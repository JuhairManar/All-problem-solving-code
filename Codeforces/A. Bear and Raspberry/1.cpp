//link-https://codeforces.com/contest/385/problem/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,d,mx=-1,i;
    cin>>n>>m;
    int a[n];                                    
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n-1;i++)
    {
        d=a[i]-a[i+1];
        mx=max(mx,d);
    }
    mx-=m;
    if(mx>=0)
    {
        cout<<mx;
    }
    else
    {
        cout<<"0";
    }

  return 0;
}