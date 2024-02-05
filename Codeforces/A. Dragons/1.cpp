//link-https://codeforces.com/problemset/problem/230/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long ks;
    int n,i,j;
    cin>>ks>>n;
    //int a[n][2];
    pair<int,int>p[n];
    for(i=0;i<n;i++)
    {
/*         for(j=0;j<2;j++)
        {
            cin>>a[i][j];
        } */
        cin>>p[i].first>>p[i].second;
    }
    sort(p,p+n);
    for(i=0;i<n;i++)
    {
        //cout<<"KS = "<<ks<<endl;
        //cout<<p[i].first<<"   "<<p[i].second<<endl;
        if(p[i].first>=ks) 
        {
            cout<<"NO";
            return 0;
        }
        ks+=p[i].second;
    }
    cout<<"YES";



  return 0;
}