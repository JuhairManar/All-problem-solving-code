#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,k,i,j=0,mid;
    cin>>n>>k;
    //int a[n+1];
    //vector<long long>v;
/*     for(i=1;i<=n;i++)
    {
        if(i%2==1)
        {
            a[j]=i;
            j++;
        }
    }
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            a[j]=i;
            j++;
        }
    } 
    cout<<a[k];
    */
/*     for(i=1;i<=n;i=i+2)
    {
        v.push_back(i);
    }
    for(i=2;i<=n;i=i+2)
    {
        v.push_back(i);
    } */
    //cout<<v[k-1]; 
    mid=(n+1)/2;
    if(k<=mid)
    {
        cout<<(k*2)-1;
    }
    else
    {
        cout<<(k-mid)*2;
    }


  return 0;
}