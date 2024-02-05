//link-https://codeforces.com/problemset/problem/337/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ns,np,i,j,min=INT_MAX;
    cin>>ns>>np;
    int a[np];
    for(i=0;i<np;i++)
    {
        cin>>a[i];
    }
    sort(a,a+np);
    for(i=0;i<=np-ns;i++)
    {
        if((a[i+ns-1]-a[i])<min)
        {
            //cout<<a[i+ns-1]-a[i]<<endl;
            min=a[i+ns-1]-a[i];
        }
    }
    cout<<min;



  return 0;
}