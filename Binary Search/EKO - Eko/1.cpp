//link-https://www.spoj.com/problems/EKO/

#include<bits/stdc++.h>

using namespace std;

bool po(vector<long>v,long m,long mid)
{
    long s=0;
    //cout<<mid<<endl;
    for(auto g:v)
    {
        //cout<<g<<" ";
        if(g>mid)
        {
            s+=g-mid;
        }
    }
    cout<<endl;
    if(s>=m)
    {
        return true;
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    long n,m,i,r=-1,l=0,mid,ans=-1;
    cin>>n>>m;
    vector<long>v(n);
    for(i=0;i<n;i++)
    {
        cin>>v[i];
        r=max(r,v[i]);
    }
    mid=(l+r)/2;
    //cout<<mid<<endl;
    while(l<=r)
    {
        if(po(v,m,mid))
        {
            ans=mid;
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
        mid=(l+r)/2;
    }     
    cout<<ans;                              

  return 0;
}