//link-https://codeforces.com/problemset/problem/255/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,i,a=0,b=0,c=0,m=0,cnt=1;
    cin>>n;
    int arr[n+1];
    for(i=1;i<=n;i++)
    {
        cin>>arr[i];
        if(i==(3*m)+1)
        {
            a+=arr[i];
        }
        else if(i==(3*m)+2)
        {
            b+=arr[i];
        }
        else
        {
            c+=arr[i];
        }
        cnt++;
        if(cnt>3)
        {
            cnt=1;
            m++;
        }
    }
    if(a>b && a>c)
    {
        cout<<"chest";
    }
    else if(b>a && b>c)
    {
        cout<<"biceps";
    }
    else
    {
        cout<<"back";
    }


  return 0;
}