//link-https://codeforces.com/problemset/problem/144/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,i,ps,pb,max=INT_MIN,min=INT_MAX,moves;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>max)
        {
            max=a[i];
            pb=i;
        }
        if(a[i]<=min)
        {
            min=a[i];
            ps=i;
        }
    }
    if(pb>ps)
    {
       moves=pb+((n-1)-(ps+1));
    }
    else
    {
        moves=pb+((n-1)-ps);
    }
    cout<<moves;


  return 0;
}