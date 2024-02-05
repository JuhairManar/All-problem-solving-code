//link-https://cses.fi/problemset/task/1754

#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    ll t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(2*a<b || 2*b<a)
        {
            cout<<"NO\n";
            continue;
        }
        if((a+b)%3==0)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }                                    


  return 0;
}