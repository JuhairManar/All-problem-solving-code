//link-https://www.spoj.com/problems/PRATA/

#include<bits/stdc++.h>

using namespace std;

bool po(int p,vector<int>v,long mid)
{
    long s,i,tc=-1,pc=0,j;
    for(i=1;i<=8;i++)
    {
        if(!v[i])
        {
            continue;
        }
/*         if(tc>mid)
        {
            return false;
        } */
        if(pc=>p)
        {
            return true;
        }
        tc=0; 
        for(j=1;j<=1000;j++)
        {
            if(v[i]*(i*j)+tc<=mid)
            {
                tc++;
                pc++;
                if(pc>=p)
                {
                    return true;
                }
            }
            else
            {
                 return false;
            }
        }
    }
}

long tc()
{
    int p,n,i,d;
    vector<int>v(9,0);
    cin>>n;
    long r=4004000,l=0,mid=(l+r)/2,ans=-1;
    for(i=0;i<n;i++)
    {
        cin>>d;
        v[d]++;
    }
    while(l<=r)
    {
        if(po(p,v))
        {
            ans=mid;
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
        mid=(l+r)/2;
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    int t;
    cin>>t;
    while(t--)
    {
        cout<<tc()<<"\n";
    }


  return 0;
}