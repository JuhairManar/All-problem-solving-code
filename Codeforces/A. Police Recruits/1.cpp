//link-https://codeforces.com/problemset/problem/427/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,d,i,mo=0,po=0,c=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>d;
        if(d>-1)
        {
           po+=d;
        }
        else
        {
            if(po==0)
            {
                c++;
            }
            else
            {
                po--;
            }
        }
    }
    cout<<c;


  return 0;
}