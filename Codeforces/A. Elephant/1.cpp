//link-https://codeforces.com/problemset/problem/617/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    int a[5],i;
    for(i=0;i<5;i++)
    {
        a[i]=i+1;
    }    
    long x,c=0;
    cin>>x;
    if(x%5)
    {
       cout<<(x/5)+1;   
    }   
    else
    {
        cout<<x/5;
    }                           


  return 0;
}