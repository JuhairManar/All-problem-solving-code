//link-https://www.spoj.com/problems/UPDATEIT/en/

#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    ll t,q,n,l,r,v,i;
    cin>>t;
    while(t--)
    {
        cin>>n>>q;
        vector<ll>a(n+1,0);
        while(q--)
        {
            cin>>l>>r>>v;
            a[l]+=v;
            a[r+1]-=v;
        }
        for(i=1;i<=n;i++)
        {
            a[i]+=a[i-1];
        }
        cin>>q;
        while(q--)
        {
            cin>>l;
            cout<<a[l]<<endl;
        }
    }                                    


  return 0;
}