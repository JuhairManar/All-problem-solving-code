//link-https://cses.fi/problemset/task/1070
#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long i,c=0,n,h;
    cin>>n;
    if(n<4)
    {
        cout<<"NO SOLUTION";
        return 0;
    }
    h=n/2;
    for(i=0;i<h;i++)
    {
        cout<<c+2<<" ";
        c+=2;
    }    
    c=-1;
    for(i;i<n;i++)
    {
        cout<<c+2<<" ";
        c+=2;
    }                                


  return 0;
}
