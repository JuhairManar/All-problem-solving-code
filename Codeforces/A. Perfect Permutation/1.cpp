//link-https://codeforces.com/problemset/problem/233/A

/* 
ppi = i and pi ≠ i -means
p(p[1])= p[1]=2 ,then ,p[2]=1

 */
#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i,j,n;
    cin>>n;
    if(n==0 || n%2==1)
    {
        cout<<"-1";
        return 0;
    }
    else
    {
        if(n%2==0)
        {
            for(i=1;i<=n;i++)
            {
                if(i%2==0)
                {
                    cout<<i-1<<" ";
                }
                else
                {
                    cout<<i+1<<" ";
                }
            }
        }
        else
        {
            for(i=1;i<=n;i++)
            {
                if(i!=n)
                {
                    cout<<i+1<<" ";
                }
                else
                {
                    cout<<"1";
                }
            }
        }
    }


  return 0;
}