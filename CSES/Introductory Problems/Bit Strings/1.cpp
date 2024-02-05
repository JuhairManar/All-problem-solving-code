//link-https://cses.fi/problemset/task/1617

#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    long long n,s=1,mod=(1e9)+7,i;
    cin>>n;  
    for(i=0;i<n;i++)
    {
        s=(s*2)%mod;
    }               
    cout<<s;        


  return 0;
}