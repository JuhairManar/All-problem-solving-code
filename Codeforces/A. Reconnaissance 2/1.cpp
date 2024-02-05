//link-https://codeforces.com/problemset/problem/34/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,i,min=INT_MAX,d;
    cin>>n;
    int a[n+1];
    pair<int,int>p;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        d=abs(a[i]-a[i+1]);
        if(d<min)
        {
           min=d;
           p.first=i;
           p.second=i+1;
        }
    }
    if(abs(a[1]-a[n])<min)
    {
        min=abs(a[1]-a[n]);
        p.first=n;
        p.second=1;
    }
    cout<<p.first<<" "<<p.second;


  return 0;
}

   v.erase(remove(v.begin(), v.end(), g), v.end());
   vecto
