//link-https://codeforces.com/problemset/problem/431/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    long arr[5],i,a,b,c,d,n,sum=0;
    cin>>a>>b>>c>>d;
    arr[1]=a;
    arr[2]=b;
    arr[3]=c;
    arr[4]=d;
    string s;
    cin>>s;
    n=s.size();
    for(i=0;i<n;i++)
    {
        int v=s[i]-48;
        sum+=arr[v];
    }
    cout<<sum;


  return 0;
}