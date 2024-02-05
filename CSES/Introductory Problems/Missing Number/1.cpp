#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    long long n,s=0,ss,i,d;
    cin>>n;
    ss=((n)*(n+1))/2;
    for(i=0;i<n-1;i++)
    {
        cin>>d;
        s+=d;
    }
    cout<<ss-s;



  return 0;
}