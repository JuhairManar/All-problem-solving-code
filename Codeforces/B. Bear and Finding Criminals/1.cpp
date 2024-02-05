// link-https://codeforces.com/problemset/problem/680/B

#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    int n,k,c=0,i;
    cin>>n>>k;    
    int a[n+1],j;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }                                
    if(a[k])
    {
        c++;
    }
    i=k-1;j=k+1;
    while(i>=1 || j<=n)
    {
        if(i>=1 && j<=n)
        {
            if(a[i] && a[j])
            {
                c+=2;
            }
        }
        else if(i>=1)
        {
            if(a[i])
            {
               c++;
            }
        }
        else
        {
            if(a[j])
            {
                c++;
            }
        }
        i--;j++;
    }
    cout<<c;

  return 0;
}