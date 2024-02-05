//link-https://codeforces.com/problemset/problem/242/B

#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long n,i,j,min=INT_MAX,max=INT_MIN;
    cin>>n;
    long long a[n][2];
    for(i=0;i<n;i++)
    {
        cin>>a[i][0]>>a[i][1];
        if(a[i][0]<min)
        {
            min=a[i][0];
        }
        if(a[i][1]>max)
        {
            max=a[i][1];
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i][0]==min && a[i][1]==max)
        {
            break;
        }
    }
    if(i<n)
    {
        cout<<i+1;
    }
    else
    {
        cout<<"-1";
    }


  return 0;
}