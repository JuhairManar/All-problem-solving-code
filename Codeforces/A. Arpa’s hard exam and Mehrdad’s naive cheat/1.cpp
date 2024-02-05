//link-https://codeforces.com/problemset/problem/742/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    int a[]={8,4,2,6};
    long n,r;
    cin>>n;
    if(n==0)
    {
        cout<<"1";
        return 0;
    }
    r=n%4;
    if(r)
    {
        cout<<a[r-1];
    }                
    else
    {
        cout<<a[3];
    }                    


  return 0;
}