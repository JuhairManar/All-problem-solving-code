//link-https://codeforces.com/problemset/problem/139/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,i,d=0;
    int a[8];
    cin>>n;
    for(i=1;i<=7;i++)
    {
        cin>>a[i];
    }
    i=1;
    //cout<<a[7]<<endl;
    //cout<<a[1]<<endl;
    while(n>0)
    {
        n=n-a[i];
        if(n<=0)
        {
            cout<<i;
            break;
        }
        i++;
        if(i==8)
        {
            i=1;
        }
    }
/*     if(i==0)
    {
        cout<<"7";
        return 0;
    }
    cout<<i; */


  return 0;
}