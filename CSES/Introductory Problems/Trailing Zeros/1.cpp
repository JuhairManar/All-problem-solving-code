//link-https://cses.fi/problemset/task/1618

#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    long n,c=0,i;
    cin>>n;
    for(i=5;n/i>=1;i*=5)
    {
        c+=n/i;
    }       
    cout<<c;                             


  return 0;
}